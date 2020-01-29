class Check{
     static int x;
     Check(int x){
          this.x = x;
     }
     public static void Prime(){
          for(int i=2;i<=(x/2);i++){
               if(x % 2 == 0){
                    System.out.println("Not Prime");
                    return;
               }
          }
          System.out.println("Prime");
     }
     void caller(){
          this.Prime();
     }
}

class five1{
     public static void main(String[] args) {
          Check A = new Check(153);
          A.caller();
     }
}
