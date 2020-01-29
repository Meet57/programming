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

/*
#    final Variable   #
class A{
     final int speed = 100;
     static void run(){
          speed = 150;
     }
}

Output =>
error: non-static variable speed cannot be referenced from a static context
       speed = 150;
*/

/*
#    final method    #
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
