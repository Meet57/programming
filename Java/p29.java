//29. Program to implement thread priority.

class Work extends Thread{
	Work(int m){
		this.setPriority(m);
	}
	public void run(){
		try{
			for(int i=0;i<5;i++){
				System.out.println(this.getPriority());
				//Thread.sleep(1);
			}
		}catch(Exception e){
			System.out.println(e);
		}
	}
}

class p29{
	public static void main(String[] args){
		Work a = new Work(7);
		Work b = new Work(6);
		
		
		
		a.start();
		b.start();
	}
}