//1 a queue

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

public class b1 {
    public static void main(String[] args) {
        queue q = new queue(5);
        
        q.enqueue("Meet");
        q.enqueue("Dhruv");
        q.enqueue("Narendra");
        q.enqueue("Dharmistha");
        
        System.out.println(q.dequeue());
        System.out.println(q.dequeue());
        System.out.println(q.dequeue());
        System.out.println(q.dequeue());
    }
}