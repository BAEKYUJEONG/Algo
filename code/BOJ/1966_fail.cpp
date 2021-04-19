#include <string>
#include <vector>
#include <queue>
#include <iostream>
 
using namespace std;
 
int main (){
    int test_case;
    int N, M;
    //N�� ���� ����
    //M�� location
    int answer = 0;

    vector <int> priorities;
    queue <pair<int, int>> q;
    priority_queue <int> priq;

    cin >> test_case;

    for(int i=0; i<test_case; i++){

      answer = 0;

      cin >> N >> M;
      
      for(int i=0; i<N; i++){
        int tmp = 0;
        cin >> tmp;
        priorities.push_back(tmp); //���� ������� ����.
      }

      for(int i = 0; i < priorities.size(); i++){
        q.push(make_pair(i, priorities[i]));
        // ó�� location, �߿䵵 push
        priq.push(priorities[i]);
        // �߿䵵 �������� ���� push
        //priority_queue? �켱���� ť. �ڵ� �������� ���� ���.
      }

      while(!q.empty()){
        int n = q.front().first; // �� �� �׸� location
        int p = q.front().second; // �� �� �׸� �߿䵵
        q.pop();

        if(p == priq.top()){
        // ���� �׸� �߿䵵 == ���� �߿�
            priq.pop();
            answer++;
            if(n == M){
            // ���� �׸� == ���� �˰� ���� ��ġ �׸�
                cout << answer << endl;
                break;
            }
        }else{
            q.push({n,p});
            // �׸��� �ڷ� �̵���Ų��.
        }
      }
    }

    return 0;
}