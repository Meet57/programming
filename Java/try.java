import java.util.*;

class Check{
     int x;
     Check(int a){
          x=a;
     }
     void function(){
          Scanner scan = new Scanner(System.in);
          switch (scan) {
               case 1:
                    Prime();
                    break;
               case 2:
                    Amstrong();
                    break;
               case 3:
                    Palindrome();
                    break;
          }
     }
     static void Prime(){
          for (int i=2;i<=x/2;i++) {
               if(x%i==0){
                    System.out.println("Not Prime");
                    return;
               }
          }
          System.out.println("Prime");
     }
     static void Palindrome(){
          int a = x;
         int temp=0,r;
         while(x!=0){
             r = x%10;
             temp = temp * 10 + r;
             x = x/10;
         }
         if(a==temp){
              System.out.println("Palindrome");
         }
         else{
              System.out.println("Not Palindrome");
         }
     }
     static void Amstrong(){
          temp=x;
         while(x>0)
         {
         a=x%10;
         x=x/10;
         c=c+(a*a*a);
         }
         if(temp==c)
          System.out.println("armstrong number");
         else
             System.out.println("Not armstrong number");
        }
     }
}

class try{
     public static void main(String[] args) {
          Scanner s = new Scanner(System.in);
          int a = s.nextInt();

          Check c = new Check(a);
          c.function();
     }
}
