 

import java.io.*;

public class vowels {
	public static void main(String[] args)
		throws IOException
	{
		String str = "Hacktoberfest";
		str = str.toLowerCase();
		int count = 0;

		for (int i = 0; i < str.length(); i++) {
			 
			if (str.charAt(i) == 'a' || str.charAt(i) == 'e'
				|| str.charAt(i) == 'i'
				|| str.charAt(i) == 'o'
				|| str.charAt(i) == 'u') {
				 
				count++;
			}
		}

		 
		System.out.println(
			"Total no of vowels: " + count);
	}
}
