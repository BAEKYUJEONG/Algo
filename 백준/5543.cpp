#include<iostream>

using namespace std;

int compare(int a, int b){
    
    if(a>b)
        return b;
    if(a<b)
        return a;
}

int main(){
    
    int a,b,c,d,e;
    int x,y;
    
    cin>>a>>b>>c>>d>>e;
    
    
    x = compare(compare(a,b),c);
    y = compare(d,e);
    
    cout<<x+y-50;
}

/*
#include <iostream>

using namespace std;

int main() {

	int Bugger[3];

	int a, b;



	cin >> Bugger[0] >> Bugger[1] >> Bugger[2] >> a >> b;



	int c=Bugger[0];

	for (int i = 1; i < 3; i++) 

		if (c > Bugger[i])

			c = Bugger[i];

	int c1 = a > b ? b : a;

	cout << c1 + c-50;

}

�ٸ� ����� �̷��� Ǯ������.
�ٵ� ���� ������ ������ �� ���������� ���� �� �� ������ ��.
*/