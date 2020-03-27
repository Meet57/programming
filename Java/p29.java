//29. Program to implement thread priority.

class Work extends Thread{
	Work(int m,String n){
		this.setPriority(m);
		this.setName(n);
	}
	public void run(){
		System.out.println(this.getName() + ":" + this.getPriority());
	}
}

class p29{
	public static void main(String[] args){
		Work a = new Work(7,"Thread 1");
		Work b = new Work(6,"Thread 2");

		a.start();
		b.start();
	}
}
