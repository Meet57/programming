//26. Program to create new threads.

class A extends Thread{
	A(){
		Thread t = new Thread(this);
		t.start();
	}
	public void run(){
		System.out.println("Extended Thread");
	}
}

class B implements Runnable{
	public void run(){
		System.out.println("Runnable Thread");
	}
}

class p26{
	public static void main(String[] args){
		new A();
		B b = new B();
		Thread t = new Thread(b);
		
		t.start();
	}
}