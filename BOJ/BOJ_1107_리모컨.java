import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ_1107_������ {
	static int N, M;
	static int min;
	static boolean[] button = new boolean[10];
	
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		N = Integer.parseInt(br.readLine()); // 5457
		M = Integer.parseInt(br.readLine()); // 3
		
		if(M!=0) { // M�� 0�� ��� ����
			StringTokenizer st = new StringTokenizer(br.readLine());
			for(int i=0; i<M; i++) {
				int tmp = Integer.parseInt(st.nextToken());
				button[tmp] = true;
			}
		}
		
		min = Math.abs(N-100);

		for(int i=0; i<=1000000; i++) {
			int len = check(i);
			
			if(len>0) { //return 0�� �ƴ϶��
				int press = Math.abs(N-i);
				min = Math.min(min, len+press);
			}
		}
		
		System.out.println(min);
	}
	
	private static int check(int n) {
		int length = 0;
		
		if(n==0) { // 0�� �����⸦ �� �� ����
			if(button[n]) return 0;
			else return 1; // 0 ���̱� 1�̶�
		}
		
		while(n>0) {
			if(button[n%10]) return 0;
			n /= 10;
			length++;
		}
		
		return length;
	}

}
