//33. Program to read lines of strings from console.

import java.io.*;

class p33{
	public static void main(String[] args) throws IOException{
		BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
		
		String[] lines = new String[100];
		int i=0;
		
		while(true){
			lines[i] = read.readLine();
			i=i+1;
			if(lines[i-1].equals("EXIT")){i--;break;}
		}
		
		for(int j=0;j<i;j++){
			System.out.println(lines[j]);
		}
	}
}