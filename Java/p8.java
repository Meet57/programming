//8. Program to implement returning objects.

class Check{
     public int value;

     Check(int a){
          value = a;
     }

     public static Check greaterObject(Check a,Check b){
          if(a.value > b.value){
               return a;
          }
          else{
               return b;
          }
     }

}

class eight{
     public static void main(String[] args) {
          Check A = new Check(15);
          Check B = new Check(20);

          System.out.print(Check.greaterObject(A,B).value);
     }
}