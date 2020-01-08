//7. Program to implement Call by Reference.
import java.util.*;

class Prime{
     int x;
     Prime(int a){
          x=a;
     }
     public void isPrime(Prime a){
          for (int i=2;i<=a.x/2;i++) {
               if(a.x%i==0){
                    System.out.println("Not Prime");
                    return;
               }
          }
          System.out.println("Prime");
     }
}

class seven{
     public static void main(String[] args) {
          Scanner s = new Scanner(System.in);
          int a = s.nextInt();

          Prime pal = new Prime(a);
          pal.isPrime(pal);
     }
}
