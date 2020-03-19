//1. Program to implement a Class and method without parameters.


class Box{
  int h=10,w=20;
  public void volume(){
    System.out.println(h*w);
  }
}

class one{
  public static void main(String[] args) {
    Box box = new Box();
    box.volume();
  }
}
