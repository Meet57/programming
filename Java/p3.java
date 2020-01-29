//3.Program to implement Stack.

class Stack { 
	static final int MAX = 1000; 
	int top; 
	int a[] = new int[MAX];
	Stack() 
	{ 
		top = -1; 
	} 

	void push(int x) 
	{ 
		if (top >= (MAX - 1)) { 
			System.out.println("Stack Overflow");
		} 
		else { 
			a[++top] = x; 
			System.out.println(x + " pushed into stack");
		} 
	} 

	int pop() 
	{ 
		if (top < 0) { 
			System.out.println("Stack Underflow"); 
			return 0; 
		} 
		else { 
			int x = a[top--]; 
			return x; 
		} 
	} 
} 

// Driver code 
class three { 
	public static void main(String args[]) 
	{ 
		Stack s = new Stack(); 
		s.push(10); 
		s.push(20); 
		s.push(30);
		System.out.println(s.pop() + " Popped from stack"); 
	} 
} 
