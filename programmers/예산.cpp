#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    
    int answer = 0;
    int sum = 0;
    int count = 0 ;
    
    cin >> budget;
    
    sort(d.begin(),d.end());
    
    for(int i=0; i<d.size(); i++){
        sum += d[i];
        if(budget>=sum){
            count++;
        }
    }
    
    answer = count;
    
    return answer;
}

//ó������ sum += d[i]�� if�� �ȿ� �־ Ʋ�ȴ�.
//�ϳ� �� ũ�� ������ �̽��� �߻��� ��찡 �ִ���.