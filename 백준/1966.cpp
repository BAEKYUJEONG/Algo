#include <iostream>
#include <queue>

using namespace std;

int main() {
    int answer = 0;
    int test_case;
    
    cin >> test_case;
    
    int n, m, ipt;//������ ����, �ñ��� ���� ��ġ, �߿䵵
    
    for (int i = 0; i < test_case; ++i) {
        answer = 0;
        
        cin >> n >> m;
        
        queue<pair<int, int>> q;
        priority_queue<int> pq; // �켱���� ť
        
        for (int j = 0; j < n; j++) {
            cin >> ipt;
            q.push({ j, ipt });
            pq.push(ipt);
        }
        
        while (!q.empty()) {
            int n = q.front().first;
            int p = q.front().second;
            q.pop();
            if (p == pq.top()) {
                pq.pop();
                answer++;
                if (n == m) {
                    cout << answer << endl;
                    break;
                }
            }
            else 
                q.push({ n,p });
        }
    }
}