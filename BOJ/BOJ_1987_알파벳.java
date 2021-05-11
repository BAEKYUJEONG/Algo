import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

//���ĺ��� ��ġ�� ������ ���� ���ϱ� ������ visited�� ĭ���� ������ �ʿ� ����!
//���ĺ��� ������ �ƴ����� visited ������ �ص� �ȴ�.
public class BOJ_1987_���ĺ� {
	static int R,C, answer, distance;
	static char[][] arr;
	static boolean[] visited_alphabet;
	static int dx[] = {0,0,-1,1};
	static int dy[] = {-1,1,0,0};
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		R = Integer.parseInt(st.nextToken());
		C = Integer.parseInt(st.nextToken());
		answer = 1;
		distance = 1;
		
		arr = new char[R][C];
		visited_alphabet = new boolean[26];
		
		//�Է¿� ����
		for(int i=0; i<R; i++) {
			arr[i] = br.readLine().toCharArray();
			for(int j=0; j<C; j++) {
				arr[i][j] = (char)(arr[i][j]-'A');
			}
		}
		
		/*
		for(int i=0; i<R; i++) {
			char[] line = br.readLine().toCharArray();
			for(int j=0; j<C; j++) {
				arr[i][j] = (char)(line[j]-'A');
			}
		}
		*/
		
		dfs(0,0);
		System.out.println(answer);
	}

	private static void dfs(int i, int j) {
		int idx = arr[i][j];
		visited_alphabet[idx] = true;
		
		for(int k=0; k<4; k++) {
			int nr = i+dx[k];
			int nc = j+dy[k];
			if(nr>=0 && nr<R && nc>=0 && nc<C) { //���� �� & �湮x & �湮�� ���ڰ� �ƴ϶��
				int next = arr[nr][nc];
				
				if(!visited_alphabet[next]) {					
					distance++;
					answer = Math.max(answer, distance);
					dfs(nr,nc);
				}
			}
		}
		
		//��Ʈ��ŷ
		visited_alphabet[idx] = false;
		distance--;
	}
}