#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    
    for(int i=0; i<prices.size(); i++){
        int count = 0;
        //���� �ƴ϶� �ȿ� �־���� �ϴ� ���� : �׷��� �ѹ��� �� ������ ��� �ʱ�ȭ�� �����ϴ�.
        //�ƴϸ� [4,3,1,1,0]�� [4,7,8,9,9]�� ����!
        for(int j=i+1; j<prices.size(); j++){
            if(prices[i]<=prices[j]){
                count++;
            }else{
                count++;
                break;
            }
        }
        answer.push_back(count);
    }
    return answer;
}

//������ ����ϴٰ� ������ �� �ִ� ������������ ������ ���ذ� �����ߴ�.
//���������� ��� ���װ� �������� ������ �� ���� ������ ��쿡 ���� �����ϴ� ���� �ƴ϶�,
//i�׿� ����ִ� ���� ������ �� �׵���� �񱳸� �ؾ���.
//���� for�� ����. �ϳ��� �������� �� ���ʿ��� �ѹ��� ���� ��. ����.