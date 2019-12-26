//2.Program to implement a Class and method with parameters and return value.

class Box{
	int height,width;
	
	public int getArea(int h,int w){
		height = h ;
		width = w;
		return (height*width);
	}
}

class two{
	public static void main(String[] Args){
		Box box = new Box();
		System.out.print(box.getArea(10,20));
	}
}