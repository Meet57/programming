//20 .Program to implement interface.

interface do_it{
	void print();
}

class test implements do_it{
	public void print(){
		System.out.println("Hello");
	}
}

class p20{
	public static void main(String[] args){
		test t = new test();
		t.print();
	}
}