//16. Program to implement Method Overriding.
class A{
     static{
          System.out.println("Block 1");
     }
     void run(){
          System.out.println("A");
     }
}

class B extends A{
     static{
          System.out.println("Block 2");
     }
     void run(){
          System.out.println("B");
     }
}

class 16{
     public static void main(String[] args) {
          B b = new B();
          b.run();
     }
}
