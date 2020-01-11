import java.util.*;

class Check{
     public int x;
     Check(int a){
          x=a;
     }
     void function(){
          Scanner scan = new Scanner(System.in);
		  int A = scan.nextInt();
          switch (A) {
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
     void Prime(){
          for (int i=2;i<=x/2;i++) {
               if(x%i==0){
                    System.out.println("Not Prime");
                    return;
               }
          }
          System.out.println("Prime");
     }
     void Palindrome(){
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
     void Amstrong(){
         int a = x;
		 int temp=0,c;
		 while(a>0){
			 c = a%10;
			 temp = temp + c*c*c;
			 a = a/10;
		 }
		 if(temp == x){
			 System.out.println("Amstrong");
		 }
		 else{
			 System.out.println("Not Amstrong");
		 }
     }
}


class meet{
     public static void main(String[] args) {
          Scanner s = new Scanner(System.in);
          int a = s.nextInt();

          Check c = new Check(a);
          c.function();
     }
}
