import java.util.ArrayList;

public class programmers_�Ҽ�ã�� {
    static int answer = 0;
	static ArrayList<Integer> list = new ArrayList<>();
	
	public static int solution(String numbers) {
        String[] num = numbers.split("");
        boolean[] visited = new boolean[num.length];
        
        for(int i=1; i<=num.length; i++) {
        	String[] output = new String[i];
        	permutation(num, visited, output, 0, i, num.length);
        }
        
        return answer;
    }
	
	// �� �����
	public static void permutation(String[] num, boolean[] visited, String[] output, int depth, int n, int length) {
		if(depth == n) {
			check(output);
			return;
		}
		
		for(int i=0; i<length; i++) {
			if(!visited[i]) {
				visited[i] = true;
				output[depth] = num[i];
				permutation(num, visited, output, depth+1, n, length);
				visited[i] = false;
			}
		}
	}
	
	// �Ҽ� ã��
	public static void check(String[] output) {
		boolean flag = false;
		String s = "";
		
		// �տ� 0�� �ִٸ� �����ְ� ���� �����
		for(int i=0; i<output.length; i++) {
			if(flag == true) {
				s += output[i];
			}else if(!output[i].equals("0")) {
				flag = true;
				s += output[i];
			}
		}
		
		if(s=="") return;
		
		int n = Integer.parseInt(s);
		
		if(n==1) return;
		
		// �Ҽ� �Ǻ�
        // �����ٱ����� �Ǻ��ϱ�
		for(int i=2; i<=Math.sqrt(n); i++){
            if(n % i == 0) return;
        }
		
		boolean exit_flag = false;
		
		for(int i=0; i<list.size(); i++) {
			if(list.get(i) == n) exit_flag = true;
		}
		
		if(!exit_flag) { // �̹� ���� �Ҽ��� �ƴϸ�
			answer++;
			list.add(n);
		}
	}

	public static void main(String[] args) {
		String numbers = "17";
		//String numbers = "011";
		
		System.out.println(solution(numbers));
	}
}
