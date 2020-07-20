//1c. A stack using queue

class queue{
    private String a[],temp;
    private int top;
    private int size;
    queue(){
        a = new String[10];
        top = -1;
        size = 10;
    }
    public boolean isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    public void enqueue(String s){
        if(top<size){
            top = top + 1;
            a[top] = s;
        }else{
            System.out.println("Queue Overflow");
        }
    }
    public String dequeue(){
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

class stack{
    queue q1,q2;
    stack(){
        q1 = new queue();
        q2 = new queue();
    }
    public void push(String a){
        while(!q1.isEmpty()){
            q2.enqueue(q1.dequeue());
        }
        q1.enqueue(a);
        while(!q2.isEmpty()){
            q1.enqueue(q2.dequeue());
        }
    }
    public String pop(){
        return q1.dequeue();
    }
}

public class d1 {
    public static void main(String[] args) {
        stack s = new stack();

        s.push("Narendra");
        s.push("Dharmistha");
        s.push("Dhruv");
        s.push("Meet");

        System.out.println(s.pop());
        System.out.println(s.pop());
        System.out.println(s.pop());
        System.out.println(s.pop());
    }
}