//6. Program to implement Call by value.
import java.util.*;

class Palindrome{
     public static void isPalindrome(int x){
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
}

class six{
     public static void main(String[] args) {
          Scanner s = new Scanner(System.in);
          int a = s.nextInt();

          Palindrome.isPalindrome(a);
     }
}
