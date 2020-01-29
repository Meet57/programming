//1 - Queen space
//0 - Blank space
//5 - Occupied space

class Chess{
	int[][] matrix = new int[10][10];
	int[] space = new int[2];
	int[] result;
	int i,j,k;
	
	Chess(){
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				matrix[i][j] = 0;
			}
		}
	}
	
	public void placeQueen(){
		for(k=0;k<5;k++){
			result = searchPlace();
			blockSpace(result[0],result[1]);
		}
		printBoard();
	}
	
	public int[] searchPlace(){
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				if(matrix[i][j]==0){
					space[0] = i;
					space[1] = j;
					return space;
				}
			}
		}
		return space;
	}
	
	public void blockSpace(int m,int n){
		for(i=0;i<10;i++){
			matrix[i][n] = 5;
			matrix[m][i] = 5;
		}
		i = m;
		j = n;
		while(i != 9 && j != 9){
			try{
				matrix[i][j] = 5; 
				i++; j++;
			}catch(Exception e){}
		}
		i = m;
		j = n;
		while(i != 9 && j != 9 && i != 0 && j!= 0){
			try{
				matrix[i][j] = 5; 
				i++; j--;
			}catch(Exception e){}
		}
		i = m;
		j = n;
		while(i != 9 && j != 9 && i != 0 && j!= 0){
			try{
				matrix[i][j] = 5; 
				i--; j++;
			}catch(Exception e){}
		}
		i = m;
		j = n;
		while(i != 0 && j!= 0){
			try{
				matrix[i][j] = 5; 
				i--; j--;
			}catch(Exception e){}
		}
		matrix[m][n] = 1;
	}
	
	public void printBoard(){
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				if(matrix[i][j] != 1){k = 0;}
				else{k = 1;}
				System.out.print(k + "\t");
			}
			System.out.println();
		}
	}
	
}

class Queen{
	public static void main(String[] args){
		Chess c = new Chess();
		c.placeQueen();
	}
}