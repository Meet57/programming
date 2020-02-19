//21. Program to implement partial implementation.

interface function{
    void do1();
    void do2();
}

abstract class A implements function{
    public void do1(){
        System.out.println("Parent class");
    }
}

class B extends A{
    public void do2(){
        do1();
        System.out.println("Child class");
    }
    //void do2(int a){}
    //int do2(){}
}

public class p21{
	public static void main(String[] args) {
		B b = new B();
		b.do2();
	}
}
