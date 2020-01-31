class SingleInheritance{
	SingleInheritance(){
		B b = new B();
		b.run2();
	}
	class A{
		void run(){
			System.out.println("A 1");
		}
	}
	class B extends A{
		void run2(){
			System.out.println("B 2");
			run();
		}
	}
}

class MultipleInheritance{
	MultipleInheritance(){
		C c = new C();
		c.run3();
	}
	class A{
		void run(){
			System.out.println("A 1");
		}
	}
	class B extends A{
		void run2(){
			System.out.println("B 2");
			run();
		}
	}
	class C extends B{
		void run3(){
			System.out.println("C 3");
			run2();
		}
	}
}

class inh{
	public static void main(String[] args){
		MultipleInheritance mi = new MultipleInheritance();
	}
}