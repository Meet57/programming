//0 - blank space
//8 - queen space
//1 - blocked space

class setQueen{
	static int[][] matrix = new int[10][10];
	int i,j,k;
	
	//Set all boxes
	setQueen(){
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				matrix[i][j] = 0;
			}
		}
	}
	
	//put three queens
	public void queenSet(){
		for(k=0;k<3;k++){
			takePosition();
		}
		printBox();
	}
	
	//put queen on certain position
	public void takePosition(){
		int[] result = searchPosition();
		blockPosition(result[0],result[1]);
		matrix[result[0]][result[1]] = 8;
		i = j = 0;
	}
	
	//blocks the square which is under any queen
	public void blockPosition(int m,int n){
		for(i=0;i<6;i++){
			matrix[m][i] = 1;
			matrix[i][n] = 1;
		}
		i = j = 0;
	}
	
	//return empty space
	public int[] searchPosition(){
		int[] ans = new int[2];
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				if(matrix[i][j] == 0){
					System.out.println("check");
					ans[0] = i;
					ans[1] = j;
					
					return ans;
				}
			}
		}
		ans[0] = 99;
 		ans[1] = 99;
		i = j = 0;
		return ans;
	}
	
	//show you table;
	void printBox(){
		for(i=0;i<6;i++){
			for(j=0;j<6;j++){
				System.out.print(matrix[i][j]);
			}
			System.out.println();
		}
		i = j = 0;
	}
}

class Queen{
	public static void main(String[] args){
		setQueen qs = new setQueen();
		qs.queenSet();
	}
}