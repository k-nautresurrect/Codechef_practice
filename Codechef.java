import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner in = new Scanner(System.in);
		long t = in.nextLong();
		ArrayList<Long> a = new ArrayList<Long>();

		for (long i = 0; i < t; i++) { a.add(in.nextLong()); }
		Collections.sort(a);

		long max = 0;
		long res;
		for (long i = 0; i < t; i++) {
			res = (t - i) * a.get(i);
			if (res > max) { max = res; }
		}
		System.out.println(max);
	}
}