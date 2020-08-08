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

    public String search(String x) {
        if (top != -1) {
            for(int i=0;i<=top;i++){
                if(a[i].equals(x)){
                    return "Index : "+Integer.toString(i);
                }
            }
            return "Value not found";
        }        
        return "Stack Underflow";
    }
}

class b1 {
    public static void main(String[] args) {
        stack s = new stack(10);
        Scanner scan = new Scanner(System.in);
        int choice = 9;
        while(true){
            System.out.print("1.Push\t");
            System.out.print("2.pop\t");
            System.out.print("3.search\t");
            System.out.println("4.exit");
            choice = scan.nextInt();
            switch(choice){
                case 1:
                    System.out.println("Enter Value : ");
                    scan.nextLine();
                    s.push(scan.nextLine());
                    break;
                case 2:
                    System.out.println(s.pop());
                    break;
                case 3:
                    System.out.println("Enter Value : ");
                    scan.nextLine();
                    System.out.println(s.search(scan.nextLine()));
                    break;
                case 4:
                    break;
            }
            if(choice == 4){
                break;
            }
        }
    }
}