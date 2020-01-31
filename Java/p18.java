//18. Program to implement final keyword.

/*
#    Final Class   #
final class A{

}
class B extends A{

}

Output =>
error: cannot inherit from final A
       class B extends A
*/

//#    final Variable   #

/*
class A{
     final int speed = 100;
      void run(){
          speed = 150;
     }
}

Output =>
error: error: cannot assign a value to final variable speed
*/

/*
#   final method    #
class A{
     final void run(){
          System.out.println("Hello");
     }
}
class B extends A{
     void run(){
          System.out.println("Hi");
     }
}

Output =>
error: run() in B cannot override run() in A
       void run(){
*/

/*
class A{
     final int speed = 100;

}

final class B extends A{
     final void run(){
          System.out.println(speed);
     }
}

class p18{
     public static void main(String[] args) {
          B b = new B();
          b.run();
     }
}
*/
