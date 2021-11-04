import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		int n = t;
		int[] lead = new int[t + 1];
		int max = 0;

		while (t-- > 0) {
			int Si = in.nextInt();
			int Ti = in.nextInt();

			lead[t] = Math.max(Si, Ti) - Math.min(Si, Ti);
			if (lead[t] > max) {
				max = lead[t];

				if (Math.max(Si, Ti) == Si) {
					lead[n] = 1;
				} else {
					lead[n] = 2;
				}
			}
		}
		System.out.print(lead[n] + " " + max);
	}
}