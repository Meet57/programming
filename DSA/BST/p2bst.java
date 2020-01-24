// Preorder to bst
import java.util.*;

class BinarySearchTree{

     static Node root = null;
     Node temp = null;

     class Node{
          int key;
          Node right,left;
          public Node(int key){
               this.key = key;
               right = null;
               left = null;
          }
     }

     void convertToBST(int[] arr,int n){
          for(int i=0;i<n;i++){
               createNodes(root,arr[i]);
          }
     }

     void createNodes(Node root,int key){
          if (root == null) {
               root = new Node(key);
               System.out.println("not Done");
               if (root == null) {
                    System.out.println("not Done");
               }
          }
          else{
               temp = root;
               while(true){
                    if(temp == null){
                         temp = new Node(key);
                         System.out.println("Done");
                         break;
                    }
                    else if(temp.key > key){
                         temp = temp.left;
                    }
                    else if(temp.key < key){
                         temp = temp.right;
                    }
               }
          }
     }

     void preOrder(){
          preOrderRec(root);
     }

     void preOrderRec(Node root){
          if(root != null){
               System.out.println(root.key);
               preOrderRec(root.left);
               preOrderRec(root.right);
          }
          else{
               System.out.println("you doing so wrong");
          }
     }

}

class p2bst{
     public static void main(String[] args) {
          int preOrder[] = {5,3,11,8,32};
          BinarySearchTree bst = new BinarySearchTree();
          bst.convertToBST(preOrder,preOrder.length);
          bst.preOrder();
     }
}
