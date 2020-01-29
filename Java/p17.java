//17 Program to implement super keyword
class A{
     int var = 150;
     A(){
          System.out.println("Constructor A");
     }
     void call(){
          System.out.println("Parent class method : ");
     }
}

class B extends A{
     int var = 100;
     B(){
          super();
          System.out.println("Constructor B");
     }
     void call(){
          System.out.println("Base class Method : ");
          System.out.println("Base class var : " + var);
          System.out.println("Parent class var : " + super.var);
          super.call();
     }
}

class p17{
     public static void main(String[] args) {
          B b = new B();
          b.call();
     }
}
