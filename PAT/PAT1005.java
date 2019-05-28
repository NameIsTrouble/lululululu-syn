package Java.PAT;

import java.lang.reflect.Array;
import java.util.*;
import java.lang.String;

public class PAT1005 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        boolean vis[] = new boolean[10005];
        Arrays.fill(vis, false);
        int n = in.nextInt();
        int array[] = new int[n];

        for (int i = 0; i < n; ++i) {
            int temp = in.nextInt();
            array[i] = temp;

            while (temp != 1) {
                if (temp % 2 != 0)
                    temp = temp * 3 + 1;
                temp /= 2;
                if (vis[temp])
                    break;
                vis[temp] = true;
            }
        }
        Arrays.sort(array);
        boolean flag = false;
        for (int i = n - 1; i >= 0; --i) {
            if (array[i] == 0)
                break;
            if (!vis[array[i]]) {
                System.out.printf("%s%d", flag ? " " : "", array[i]);
                flag = true;
            }
        }
    }
}