#include <string>
#include <vector>
#include <algorithm>
//algorithm �� �Ἥ ��� ���� �ʹ� ��ģ��.

using namespace std;

/*bool order(int a, int b){
    return a < b;
}*/

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    int count;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i]%divisor==0){
            answer.push_back(arr[i]);
            //answer+=arr[i];
            count++;
        }
    }
    
    if(answer.size()==0){
        answer.push_back(-1);
    }else{
        //sort(arr,arr+count);
        sort(answer.begin(), answer.end());
        //ó���� ���� �̷� ������ ��Ÿ���� �� ���� ��.
        //sort(answer.begin(), answer.end(), order);�ε� ����
        //���� bool �Լ��� ����. ������ �⺻�� ��������.
    }
    
    return answer;
}

/*
size_t �� unsigned int �̸�, ���ڿ��̳� �޸��� ����� ��Ÿ�� �� ����մϴ�.
"unsigned int"�� 

typedef unsigned int size_t; 

�̷��� size_t ��� �̸����� ������ ���� ���Դϴ�.
*/