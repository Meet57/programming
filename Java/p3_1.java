//3.1 -> Program to implement Stack.

import java.util.*;

class three1{
     public static void main(String[] args) {
          Stack<Integer> stack = new Stack<Integer>();
          Stack<String> strings = new Stack<String>();

          stack.push(1);
          stack.push(2);
          stack.push(3);
          stack.push(4);
          stack.push(5);


          System.out.println(stack.contains(3));

          System.out.println(stack.get(3)); // get the index and print

          stack.setSize(4);

          stack.remove(3); // remove third index

          System.out.print("pop : ");
          System.out.println(stack.pop());

          System.out.println(stack);
          System.out.print("size : ");
          System.out.println(stack.size());

          stack.clear();
          System.out.print(stack);
     }
}
