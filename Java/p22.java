//22. Program to implement Dynamic stack implementing Interface.

import java.util.*;

interface stack{
    Vector<Integer> v = new Vector<>();
    void push(int a);
    int pop();
    int peep(int a);
    int Size();
}

class Stack implements stack{
    int temp;
    public void push(int a){
        v.add(a);
    }
    public int pop(){
        temp = v.lastElement();
        v.removeElementAt(v.size() - 1);
        return temp;
    }
    public int peep(int a){
        if(a < v.size()){
            return v.elementAt(a);
        }
        else{
            return -1;
        }
    }
    public int Size(){
        return v.size();
    }
}

public class p22
{
	public static void main(String[] args) {
		Stack s = new Stack();
		s.push(11);
		s.push(22);
		s.push(33);
		s.push(44);
		s.push(55);
		s.push(66);
		System.out.println(s.pop());
		System.out.println(s.Size());
		System.out.println(s.peep(4));
	}
}
