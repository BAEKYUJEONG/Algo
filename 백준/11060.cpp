#include <iostream>

using namespace std;
int main() {
  int N;
  cin >> N;
  int *A =new int[N];
  
  for (int i=0;i<N;i++){
    cin>>A[i];
  }
  int count=0;
  int M = N-1;
  for(;M!=0;){
    //���� ���ǹ� ������ ��, ���ǹ� �� �� ��� while���� �����ϰ� �� �� �ִ�.
    int check = 1;
    int check2 =0;
    for(int j=M-1;j>=0;j--){
      if(A[j]>=check){
        M=j;
        check2= 1;
      }
      check++;
    }
    if(check2==0){
        cout << "-1"<<endl;
        return 0;
    }
    count++;
  }
  cout << count << endl;
  return 0;
}