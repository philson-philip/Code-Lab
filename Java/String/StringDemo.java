import java.io.*;
import java.util.*;
class StringDemo
{
	public static void main(String args[]) throws IOException
	{
		String a,b;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter First String");
		a = br.readLine();
		System.out.println("Enter Second String");
		b = br.readLine();
		int l1 = a.length();
		int l2 = b.length();
		int l = l1+l2;
		System.out.println("The Sum of lengths of Strings is"+l);
		if(a.compareTo(b)<0)
		{
			System.out.println("Yes");
		}
	}
}