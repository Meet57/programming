import java.util.Scanner;

class Food {
	static String type;
	static String title;
	static int price;

	public static String getType() {
		return type;
	}

	public void setType(String type) {
		Food.type = type;
	}

	public static String getTitle() {
		return title;
	}

	public void setTitle(String title) {
		Food.title = title;
	}

	public static int getPrice() {
		return price;
	}

	public void setPrice(int price) {
		Food.price = price;
	}

	public void print() {
		System.out.println(title);
		System.out.println(type);
		System.out.println(price);
	}
}

public class myclass {
	private static Scanner obj;

	public static void main(String[] args) {
		obj = new Scanner(System.in);
		Food abc = new Food();
		int choice = 0;
		while (choice != 3) {
			System.out.println("1. Add Item");
			System.out.println("2. See Item");
			System.out.println("3. Exit");
			choice = obj.nextInt();
			switch (choice) {
			case 1:
				abc.setPrice(obj.nextInt());
				abc.setTitle(obj.nextLine());
				abc.setType(obj.nextLine());
				break;
			case 2:
				abc.print();
				break;
			case 3:
				break;
			default:
				System.out.println("Wrong Input");
				break;
			}
		}
	}
}
