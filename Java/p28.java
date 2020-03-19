//28. Program to demonstrate synchronize keyword.

class caller extends Thread{
	int n;
	caller(int n){
		this.n = n;
	}
	public void run(){
		p28.table(n);
	}
}

class p28{
	static synchronized void table(int n){
		try{
			for(int i=1;i<=5;i++){
				System.out.println(n*i);
				Thread.sleep(100);
			}
		}catch(Exception e){
			System.out.println(e);
		}
	}
	public static void main(String[] args){
		caller t1 = new caller(2);
		caller t2 = new caller(11);
		
		t1.start();
		t2.start();
	}
}