#include<iostream>

using namespace std;

int main(){
    
    int n, x, r;
    
    cin >> n >> x;
        
    for(int i=0; i<n; i++){
        cin >> r;
        
        if(x>r){
            cout << r << " ";
        }
    }
    
    cout << endl;

}

/*
�Է��� ����� ������, c++������
cin >> a >> b; �� ���� �����ؼ� �Է� ����.
���� rand()�� �� �ʿ� ���� ���� ���� �Լ������ε� r�� �������� ���� ����.
*/