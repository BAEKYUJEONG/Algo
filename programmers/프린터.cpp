#include <string>
#include <vector>
#include <queue>
 
using namespace std;
 
int solution(vector<int> priorities, int location){
    int answer = 0;
    queue <pair<int, int>> q;
    priority_queue <int> priq;
    
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
        
        if(p == priq.top()){
        // ���� �׸� �߿䵵 == ���� �߿�
            if(n == location){
            // ���� �׸� == ���� �˰� ���� ��ġ �׸�
                answer++;
                break;
            }else{
                answer++;
                q.pop();
                priq.pop();
                // ���� �߿��� �׸� o, but ���� �˰� ���� �� x, ���� �ڷ� �и�
                // �׸� �ش��ϴ� �͵� pop
            }
        }else{
            q.push(q.front());
            q.pop();
            // �׸��� �ڷ� �̵���Ų��.
        }
    }
    
    return answer;
}