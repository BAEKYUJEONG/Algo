#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for(int i=0; i<commands.size(); i++){
        
        vector<int> temp;
        for(int j=commands[i][0]-1; j<commands[i][1]; j++)
            temp.push_back(array[j]);
        sort(temp.begin(),temp.end());
        answer.push_back(temp[commands[i][2]-1]);
    
    }
    return answer;
}

/*
// ���� �����ڵ�
vector<int> solution(vector<int> array1, vector<vector<int>> commands) {
    vector<int> answer;
    //��ȯ�ǾߵǴ� ��Ʈ���� �ݺ�
    for (int i = 0; i < commands.size(); i++){
        //�ӽ� ���� ����
        vector<int> temp;
        //�ʿ��� �κи� �ӽú��Ϳ� ����
        for (int j = commands[i][0] - 1; j < commands[i][1]; j++)
            temp.push_back(array1[j]);
        //**�ӽ� ��������**
        sort(temp.begin(), temp.end());
        //�ӽú����� index��°�� answer�� ����
        //���⼭�� Ư���ϰ� at�� ��.
        answer.push_back(temp.at(commands[i][2] - 1));
    }
    return answer;
}
*/