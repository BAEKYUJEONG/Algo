#include<iostream>

using namespace std;

int main(){
    
    int star, i, j;
    cin >> star;
    
    for(i=0; i<star; i++){
        for(j=0; j<star-(i+1); j++){
            cout << " ";
        }
        for(j=0; j<i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
}

// ����� ��ȭ. ���� ����
//����for�������� for�� �ȿ� �ΰ��� for��
//\n ��� endl �� ��������
//main �Լ� �ȿ��� ó������ ���ڸ� �޾Ƽ� �ص� ������, (���α׷��ӽ�ó��) ���� cin���� �ص� �ȴ�.