#include<iostream>

using namespace std;

int main(){
    
    int n, init;
    
    if(0<=n && n<=99){
        cin >> n;
    }
    init = n;
    
    int a,b,sum;
    int count =0;
    
    do{
        a = n/10;
        b = n%10;
        sum = a+b;
        n = b*10+(sum%10);
        count++;
    }while(n!=init);
    
    cout << count;
}

/*
���� �ٺ�ó�� if���� �ѹ��� ���� ���� ����.
0<=n<=99 (x)
�׳� ���� ���ظ� ������. �ܼ� �յ��ڸ� ���ϴ� ������ �ƴ϶� 
�� �׸��� ���ڸ��� ���ؼ� ���� ���ڸ��� ���ϴ� �ſ���. �̰� ������ �̳� ���.
init = n �̰� �����Ѵ�! ���ʿ� ��ġ ���ϱ�.
*/