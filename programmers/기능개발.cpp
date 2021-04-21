#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> proR;
    vector<int> speedR;
    vector<int> cnt;
    int count = 0;
    
    for (int i=0; i < progresses.size(); i++) {
        proR.push_back(progresses[progresses.size()-i -1]);
        speedR.push_back(speeds[speeds.size()-i-1]);
    }
    //�̰� �־�� �迭�� �ݴ� ������ �־��� ���� pop_back()�� �� �� ����.
    //vector�� push_back(), pop_back()�� �ִ� �迭�� ����� �����̱� ����.
    
    while(proR.size() > 0) {
        for (int i = 0; i < progresses.size(); i++) {
            proR[i] = proR[i] + speedR[i];
        }
        
        while(proR.back()>= 100){
            if (proR.back() >= 100) {
                proR.pop_back();
                speedR.pop_back();
                count++;
            }
        }
        cnt.push_back(count);
        count = 0;
    }
    
    for (int i = 0; i < cnt.size(); i++) {
        if (cnt[i] !=0 ) {
            answer.push_back(cnt[i]);
        }
    }
    
    return answer;
}