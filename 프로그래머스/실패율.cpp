#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, double> &a, const pair<int, double> &b){
    if(a.second > b.second){
        return true;
    }else if(a.second == b.second){
        if(a.first < b.first){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    vector<pair<int,double>> stg;
    //pair�� ���� <��������, ������> �̷��� ����� ���ϸ� ���ϴ�.
    
    for(int i=1; i<=N; i++){
        int num = 0;
        //���� ���������� �ӹ����ִ� ��� = ���������� ���� ���� ���
        int break_p = 0;
        //�������� �� �÷��̾�. ������ ��>=N �� �͵�.
        
        for(int j=0; j<stages.size(); j++){
            if(i==stages[j]){
                num++;
            }
            if(stages[j]>=i){
                break_p++;
            }
        }
        
        if(break_p == 0) {
            stg.push_back(make_pair(i, 0));
            continue;
        }
        //�ڸ��� �߿��ϴ�. for�� �ȿ��� ���� �����ϸ� break_p�� 0�� ���¿��� �����ϱ� ������ ������ ���ǿ� ������ �� �ۿ� ����.
        
        double failrate = 0;
        failrate = (double)num/break_p;
        stg.push_back(make_pair(i,failrate));
    }
    
    sort(stg.begin(),stg.end(),compare);
    
    for(int i=0; i<N; i++){
        answer.push_back(stg[i].first);
    }
    
    return answer;
}

//ó���� ���Լ� �κ��� bool compare(int a, int b)�̶� �ߴµ�
//bool compare(const pair<int, double> &a, const pair<int, double> &b)��� �ؾ��Ѵ�.
//const�� C, C++���� ��� ��� �ǹ��Դϴ�. ��, ����, �Լ�, ��ü, ������ ��.... �� ���ȭ ��ų �� �ִ� Ű���� �Դϴ�. �׷� �����?? �������� �ʱ�ȭ�� �̷����� �� ���� �ٲ� �� ������ �� �ִ� ���Դϴ�.

//���Լ� �غκе� stg.second(a) > stg.second(b);�� �ƴ�
//a.second > b.second ������ ǥ���ؾ��Ѵ�.