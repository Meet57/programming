//4. Program to implement object passing as arguments.

class Compare{
	
	public String name;
	public int marks;
	
	Compare(String n,int m){
		marks = m;
		name = n;
	}
	
	public static void compare(Compare c1,Compare c2){
		if(c1.marks>c2.marks){
			System.out.print(c1.name);
			System.out.print("Is greater");
		}
		else{
			System.out.print(c2.name);
			System.out.print(" : is greater");
		}
	}
}

class four{
	public static void main(String[] Args){
		
		Compare c1 = new Compare("A",300);
		Compare c2 = new Compare("B",500);
		
		Compare.compare(c1,c2);
		
	}
}