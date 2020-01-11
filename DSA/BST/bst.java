import java.util.*;

class BinarySearchTree{

     Node root;
     static final int COUNT = 10;
     boolean s = false;

     class Node{
          int key;
          Node left,right;

          public Node(int item){
               key = item;
               left = right = null;
          }
     }

     BinarySearchTree(){
          root = null;
     }

     void insert(int key){
          root = insertTree(root,key);
     }

     Node insertTree(Node root,int key){
          if(root == null){
               root = new Node(key);
               return root;
          }

          if(key < root.key){
               root.left = insertTree(root.left,key);
          }
          else if(key > root.key){
               root.right = insertTree(root.right,key);
          }

          return root;
     }

     void preOrder(){
          preOrderRec(root);
     }

     void preOrderRec(Node root){
          if(root != null){
               System.out.print(root.key);
               preOrderRec(root.right);
               preOrderRec(root.left);
          }
     }

     void delete(int key){
          root = deleteTree(root,key);
     }

     Node deleteTree(Node root,int key){
          if (root == null){
               return root;
          }

          if (key < root.key){
               root.left = deleteTree(root.left,key);
          }
          else if (key > root.key){
               root.right = deleteTree(root.right,key);
          }

          else{
               if (root.left == null){
                    return root.right;
               }
               else if(root.right == null){
                    return root.left;
               }

               root.key = minValue(root.right);

               root.right = deleteTree(root.right,root.key);
          }

          return root;
     }

     int minValue(Node root){
          int val = root.key;
          while (root.left != null) {
               root = root.left;
               val = root.key;
          }
          return val;
     }

     boolean Search(int key){
          return search(root,key);
     }

     boolean search(Node root,int key){
          if (root != null) {
               if (root.key == key) {
                    s = true;
               }
               else if (root.key < key) {
                    s = search(root.right,key);
               }
               else if (root.key > key) {
                    s = search(root.left,key);
               }
               else{
                    s = false;
               }
          }
          else{
               s = false;
          }

          return s;
     }

}

class bst{
     public static void main(String[] args) {
          BinarySearchTree bst = new BinarySearchTree();
          Scanner scan = new Scanner(System.in);
          int choice=0;
          int temp;

          while(choice!=5){
               System.out.println("1.Insert");
               System.out.println("2.Delete");
               System.out.println("3.Print tree");
               System.out.println("4.Search");
               System.out.println("5.Exit");

               System.out.print("\nEnter your Choice : ");
               choice = scan.nextInt();

               switch(choice){
                    case 1:
                         temp = scan.nextInt();
                         bst.insert(temp);
                         break;
                    case 2:
                         temp = scan.nextInt();
                         bst.delete(temp);
                         break;
                    case 3:
                         bst.preOrder();
                         break;
                    case 4:
                         temp = scan.nextInt();
                         System.out.println(bst.Search(temp));
                         break;
                    case 5:
                         break;
                    default:
                         System.out.println("Wrong input");
               }
               System.out.println("___________________________________________________________");
          }
     }
}
