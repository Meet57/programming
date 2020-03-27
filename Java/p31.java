//31. Program to demonstrate deadlock, using thread.

class p31{
	public static void main(String[] Args){

		String R1 = "R1";
		String R2 = "R2";

		Thread t1 = new Thread(new Runnable(){
			public void run(){
				synchronized(R1){
					System.out.println("R1 Taken By T1");

					try{Thread.sleep(100);}
					catch(Exception e){}

					synchronized(R2){
						System.out.println("R2 Taken By T1");
					}
				}
			}
		},"T1");

		Thread t2 = new Thread(new Runnable(){
			public void run(){
				synchronized(R2){
					System.out.println("R2 Taken By T2");

					try{Thread.sleep(100);}
					catch(Exception e){}

					synchronized(R1){
						System.out.println("R1 Taken By T2");
					}
				}
			}
		},"T2");

		t1.start();
		t2.start();
	}
}
