using namespace std;

long long solution(int w,int h) {
    long long answer = 1;
    int mark_n;
    int division_n;
    int new_w, new_h;
    
    if(w>h) mark_n = h;
    else mark_n = w;
    
    for(int i=0; i<mark_n/2; i++){
        if(w%i==0 && h%i==0){
            division_n = i;
        }
    }
    
    new_w = w/division_n;
    new_h = h/division_n;
    
    
    
    
    return answer;
}


//������ ���� �׷����� �����ϰ� �־��µ�, 1*n���� ���� 2*n���� ���� ���� ������ �����ѵ�, 3*5�� ���� ���� �� �𸣰ھ ������ ����µ� �־� ��Ӹ���... ��ĭ���� ���̻��� �����ϸ� 2ĭ�� �����ϰ� �� �� �ִ�. �׷��� ���� ��ǥ�� ������ ���� ���������� Ȯ���ϴ� �ڵ带 ������ϴµ� �װ� �� �ʹ� �밡�� ���Ƽ� ���� ���̴�. ������ ��� �ø��� ������ �� �ϴ���.