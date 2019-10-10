import java.io.FileWriter;
import java.util.Scanner;

class MyClass extends Thread {
	static private int t = 0;

	public void run() {
		for (int i = 0; i < 10; i++) {
			try {
				t++;
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}

	public void time() {
		System.out.println(t);
	}
}

public class try {

	private static Scanner obj;
	private static MyClass timer;

	public static void main(String[] args) {

		timer = new MyClass();
		timer.start();

		obj = new Scanner(System.in);

		System.out.println("Enter your file name : ");
		String name = obj.nextLine();
		name = name + ".txt";

		System.out.println("Enter the details you want to write : ");
		String line = obj.nextLine();

		FileWriter fw;
		try {
			fw = new FileWriter(name);
			fw.write(line);
			fw.close();
		} catch (Exception e) {
			System.out.println(e);
		}

		timer.time();
		timer.stop();
	}
}
