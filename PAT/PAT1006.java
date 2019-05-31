package Java.PAT;

import java.util.*;

public class PAT1006 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        StringBuffer ans = new StringBuffer();

        for (int i = n % 10; i > 0; --i)
            ans.append(i);

        n /= 10;

        for (int i = 0; i < n % 10; ++i)
            ans.append('S');

        n /= 10;

        for (int i = 0; i < n % 10; ++i)
            ans.append('B');

        ans.reverse();

        System.out.println(ans);

    }
}