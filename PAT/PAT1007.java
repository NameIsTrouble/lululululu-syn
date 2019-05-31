package Java.PAT;

import java.lang.reflect.Array;
import java.util.*;

public class PAT1007 {
    public static Vector<Integer> prime = new Vector();
    public static boolean[] isPrime = new boolean[100005];

    public static void getPrime(int n) {
        isPrime[0] = false;
        isPrime[1] = false;

        for (int i = 2; i <= n; ++i)
            if (isPrime[i]) {
                for (int j = i + i; j < n; j += i)
                    isPrime[j] = false;

                prime.add(i);
            }
    }

    public static void main(String[] args) {
        Arrays.fill(isPrime, true);
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        getPrime(n + 1);

        int cnt = 0;
        for (int i = 1; i < prime.size(); ++i)
            if (prime.get(i) - prime.get(i - 1) == 2)
                ++cnt;

        System.out.println(cnt);
    }
}
