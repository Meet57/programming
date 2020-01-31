class A{
	static int i = 1111;
	static{
		i = i-- - --i;
		System.out.println("Block 1");
	}
	{
		i = i++ + ++i;
		System.out.println("Block 2");
	}
}

class B extends A{
	static{
		i = --i - i--;
		System.out.println("Block 3");
	}
	{
		i = ++i + i++;
		System.out.println("Block 4");
	}
}

class pac{
	public static void main(String[] Args){
		B b = new B();
		System.out.println(b.i);
		System.out.println('j' + 'a' + 'v' + 'a'); 
	}
}