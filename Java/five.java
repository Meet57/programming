//5. Program to implement this keyword.

class Box{
	int h,w;
	
	public int getArea(int h,int w){
		this.h = h ;
		this.w = w;
		return (this.h*this.w);
	}
}

class five{
	public static void main(String[] Args){
		Box box = new Box();
		System.out.print(box.getArea(10,20));
	}
}