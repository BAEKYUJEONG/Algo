#include <iostream> 
using namespace std; 

int main() 
{ 
    int star; // N ���� 
    cin >> star; // N �Է� 
    if (star < 1 || star >100) // 1<= N <= 100 ���� 
        return 0; 
    for (int i = 0; i < star; i++) // ���� 
    { 
        for (int j = 0; j < i+1; j++) // ���ٴ� �� ���� 
        { 
            cout << "*"; // * ��� 
        } 
        cout << endl; // �� �ѱ�� 
    } 
        return 0; 
}
