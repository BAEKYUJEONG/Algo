import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ_14503_�κ�û�ұ� {
	static int N,M;
	static int r,c,d;
	static int arr[][];
	static int visited[][];
	static boolean flag = true;
	static int dx[] = {-1,0,1,0};
	static int dy[] = {0,1,0,-1};
	
	static int clean = 0;
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		
		st = new StringTokenizer(br.readLine());
		r = Integer.parseInt(st.nextToken());
		c = Integer.parseInt(st.nextToken());
		d = Integer.parseInt(st.nextToken());
		//0 ��
		//1 ��
		//2 �Ʒ�
		//3 ��
		
		arr = new int[N][M];
		visited = new int[N][M];
		
		for(int i=0; i<N; i++) {
			st = new StringTokenizer(br.readLine());
			for(int j=0; j<M; j++) {
				arr[i][j] = Integer.parseInt(st.nextToken());
				if(arr[i][j]==1) visited[i][j] = 2; // �� ó��
			}
		}
		
		//1. ���� ��ġ�� û���Ѵ�.
		visited[r][c] = 1;
		clean++;
		
		cleanup();
		
		System.out.println(clean);
		
	}

	private static void cleanup() {
		while(flag) {
			int tmp = 0; // ��� ������ Ȯ���� ����
			
			for(int k=3; k>=0; k--) {
				int nr = r+dx[k];
				int nc = c+dy[k];
				if(visited[nr][nc]!=0) {
					tmp++;
				}
			}
			
			//��� ������ û�Ұ� �Ǿ��ְų� ���̸�
			if(tmp==4) {
				int behind = (d+2)%4;
				
				int br = r+dx[behind];
				int bc = c+dy[behind];
				
				if(visited[br][bc]==2) { //�ڰ� ���̶� ������ �� �� ���ٸ�
					flag = false;
				} else { //�ƴ϶�� ����
					r = br;
					c = bc;
				}
			}
			
			//2. ���� ��ġ ���� ���ʺ��� û��
			for(int k=1; k<=4; k++) {
				int left = (d-k+4)%4; //���� ���� ����
				
				int lr = r+dx[left];
				int lc = c+dy[left];
				
				if(visited[lr][lc]==0) {
					visited[lr][lc] = 1;
					clean++;
					r = lr;
					c = lc;
					d = left;
					cleanup();
				}
			}
		}
	}
}
