//1 a queue
import java.util.Scanner;

class queue{
    private String a[],temp;
    private int top;
    private int size;
    queue(int l){
        a = new String[l];
        top = -1;
        size = l;
    }
    void enqueue(String s){
        if(top<size){
            top = top + 1;
            a[top] = s;
        }else{
            System.out.println("Queue Overflow");
        }
    }
    String dequeue(){
        if(top!=-1){
            temp = a[0];
            for(int i=0;i<top;i++){
                a[i] = a[i+1];
            }
            top = top-1;
            return temp;
        }else{
            return "Queue Underflow";
        }
    }
}

public class a1 {
    public static void main(String[] args) {
        queue q = new queue(5);
        
        Scanner scan = new Scanner(System.in);
        int choice = 9;
        while(true){
            System.out.println("1.Enqueue");
            System.out.println("2.Dequeue");
            System.out.println("3.exit");
            choice = scan.nextInt();
            switch(choice){
                case 1:
                    System.out.println("Enter Value : ");
                    scan.nextLine();
                    q.enqueue(scan.nextLine());
                    break;
                case 2:
                    System.out.println(q.dequeue());
                    break;
                case 3:
                    break;
            }
            if(choice == 4){
                break;
            }
        }
    }
}