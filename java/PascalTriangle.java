public class Algorithms{

	static int fun(int n){
		int ctr=1;

		for(int i=2;i<=n;i++)
			ctr*=i;	

		return ctr;
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();

		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				System.out.print((fun(i)/fun(i-j)*fun(j)));
			}
			
		}
	}
}