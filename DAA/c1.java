//1c. A queue using stack

class stack{
    private String[] a;
    int size;
    private int top;

    stack() {
        top = -1;
        size = 10;
        a = new String[10];
    }

    public boolean isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
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
        if (!isEmpty()) {
            top = top - 1;
            return a[top + 1];
        } else {
            return "Stack Underflow";
        }
    }
}

class queue{
    stack s1,s2;
    queue(){
        s1 = new stack();
        s2 = new stack();        
    }
    public void enQueue(String a){
        while(!s1.isEmpty()){
            s2.push(s1.pop());
        }
        s1.push(a);
        while(!s2.isEmpty()){
            s1.push(s2.pop());
        }
    }
    public String deQueue(){
        return s1.pop();
    }
}

class c1{
    public static void main(String[] args) {
        queue q = new queue();
        q.enQueue("Meet"); 
        q.enQueue("Dhruv"); 
        q.enQueue("Narendra"); 

        System.out.println(q.deQueue());
        q.enQueue("Dharmistha");
        System.out.println(q.deQueue()); 
        System.out.println(q.deQueue());
        System.out.println(q.deQueue());
    }
}