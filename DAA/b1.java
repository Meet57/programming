//1(b) stack

import java.util.Scanner;

class stack{
    private String[] a;
    int size;
    private int top;

    stack(int l) {
        top = -1;
        size = l;
        a = new String[l];
    }

    public void push(String s) {
        if (top < size) {
            top = top + 1;
            a[top] = s;
        } else {
            System.out.println("Stack Overflow");
        }
    }

    public String pop() {
        if (top != -1) {
            top = top - 1;
            return a[top + 1];
        } else {
            return "Stack Underflow";
        }
    }

    public String peek() {
        if (top != -1) {
            return a[top];
        } else {
            return "Stack Underflow";
        }
    }
}

class a1 {
    public static void main(String[] args) {
        stack s = new stack(10);
        // Scanner scan = new Scanner(System.in);
        // int choice = 9;
        // while(true){
        //     System.out.println("1.Push");
        //     System.out.println("2.pop");
        //     System.out.println("3.peek");
        //     System.out.println("4.exit");
        //     choice = scan.nextInt();
        //     switch(choice){
        //         case 1:
        //             System.out.println("Enter Value : ");
        //             scan.nextLine();
        //             s.push(scan.nextLine());
        //             break;
        //         case 2:
        //             System.out.println(s.pop());
        //             break;
        //         case 3:
        //             System.out.println(s.peek());
        //             break;
        //         case 4:
        //             break;
        //     }
        //     if(choice == 4){
        //         break;
        //     }
        // }
        s.push("Dhruv");
        s.push("Narendra");
        s.push("Dharmistha");
        s.push("Meet");

        System.out.println(s.pop());
        System.out.println(s.pop());
        System.out.println(s.pop());
        System.out.println(s.pop());
    }
}