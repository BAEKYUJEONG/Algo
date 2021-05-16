import java.awt.Point;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.StringTokenizer;

public class BOJ_15686_ġŲ��� {
	static int N, M, answer;
	static int[][] arr;
	static boolean[][] visited;
	static ArrayList<Point> chicken;
	static ArrayList<Point> home;
	static boolean[] visited_open;
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		
		arr = new int[N][N];
		visited = new boolean[N][N];
		chicken = new ArrayList<>();
		home = new ArrayList<>();
		
		for(int i=0; i<N; i++) {
			st = new StringTokenizer(br.readLine());
			for(int j=0; j<N; j++) {
				arr[i][j] = Integer.parseInt(st.nextToken());
				if(arr[i][j]==2) chicken.add(new Point(i,j));
				if(arr[i][j]==1) home.add(new Point(i,j));
			}
		}
		
		//ġŲ�� ������ŭ ������ ���� ����
		visited_open = new boolean[chicken.size()];
		answer = Integer.MAX_VALUE;
		
		combination(0,0);
		System.out.println(answer);
		
	}
	
	//��Ʈ��ŷ : ������ �ִ� dfs
	//r = ������ ����(�����ؼ� ���� ����), cnt
	private static void combination(int start, int r) { 
		if(r == M) {
			int result = 0;
			
			for(int i=0; i<home.size(); i++) {
				int tmp = Integer.MAX_VALUE;
				
				//�ּҰŸ� ���ϱ�
				for(int j=0; j<chicken.size(); j++) {
					if(visited_open[j]) { //���԰� �����ٸ�
						int distance = getDistance(home.get(i), chicken.get(j));
						//�� ���� �߿��� ���� �Ÿ��� ª�� �Ÿ�
						tmp = Math.min(tmp, distance);
					}
				}
				//�� ���ո����� �ּ� �Ÿ� ���� ����
				result += tmp;
			}
			//��ü ���� �߿��� �ּ� �Ÿ�
			answer = Math.min(answer, result);
			return;
		}
		
		//��Ʈ��ŷ
		//1,2,3,4�� �ִٸ�
		//1,2��  true�� �̰� �� ��
		//2�� ���� �κп��� false�� ��������
		//1�� ��� �ִ� ���¿��� 3�� true�� �� 1,3�� �̴� �������� for���� ������ ����ȴ�.
		for(int i=start; i<chicken.size(); i++) {
			visited_open[i] = true;
			combination(i+1, r+1);
			visited_open[i] = false;
		}
	}
	
	private static int getDistance(Point p1, Point p2) {
		return Math.abs(p1.x - p2.x) + Math.abs(p1.y - p2.y);
	}

}
