//34. Program to copy the contents of one file to another file.

import java.io.*;

class p34{
	public static void main(String[] args)throws IOException{
		FileReader fr = new FileReader(args[0]);
		FileWriter fw = new FileWriter(args[1]);
		int i;
		while((i=fr.read())!=-1){
			fw.write((char)i);
		}
		fr.close();
		fw.close();
	}
}
