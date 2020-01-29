//10. Program to implement Recursion (Printing elements of an Array).

class ten{
     static void printArray(int[] arr,int i){
          if(i==0){
               System.out.println(arr[i]);
          }
          else {
               printArray(arr,i-1);
               System.out.println(arr[i]);
          }
     }

     public static void main(String[] args) {
          int arr[] = {1,2,3,4,5,6,7,8,9};

          printArray(arr,arr.length-1);
     }
}
