import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		int sum1 = 0, sum2 = 0, lead = 0, max = 0, p = 0;

		while (t-- > 0) {
			int Si = in.nextInt();
			int Ti = in.nextInt();

			sum1 += Si;
			sum2 += Ti;

			if (sum1 > sum2) {
				max = sum1 - sum2;
				if (max > lead) {
					lead = max;
					p = 1;
				}
			} else {
				max = sum2 - sum1;
				if (max > lead) {
					lead = max;
					p = 2;
				}
			}
		}
		System.out.println(p + " " + lead);
	}
}