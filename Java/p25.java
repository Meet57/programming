//25. Program to implement main Thread.

class p25{
	public static void main(String[] args){
		Thread t = Thread.currentThread();
		
		t.setName("Main Thread");
		t.setPriority(10);
		
		try{
			for(int i=0;i<5;i++){
				System.out.println(i);
				t.sleep(100);
			}
		}
		catch(Exception e){
			System.out.println(e);
		}		
	}
}