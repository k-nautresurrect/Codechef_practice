import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while (t-- > 0) {
			int a = in.nextInt();
			int b = in.nextInt();
			int c = in.nextInt();

			int max = Math.max(a, b);
			int max1 = Math.max(b, c);
			int max2 = Math.max(a, c);

			if (max == max1) {System.out.println(max2);}
			if (max1 == max2) {System.out.println(max);}
			if (max == max2) {System.out.println(max1);}
		}
	}
}