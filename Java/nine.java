//9. Program to implement Recursion (Example of factorial).

class nine{

     static int factorial(int a){
          if(a == 0)
               return 1;
          else
               return(a * factorial(a-1));
     }

     public static void main(String[] args) {
          System.out.print(factorial(10));
     }
}
