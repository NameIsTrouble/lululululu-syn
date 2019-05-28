package Java.PAT;

import java.util.*;
import java.lang.String;

public class PAT1003 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int n = read.nextInt();
        String t = read.nextLine();

        while (n-- != 0) {
            String str = read.nextLine();
            boolean flag = false;
            int indexP = 1010, indexT = 1010;

            for (int i = 0; i < str.length(); ++i) {
                char temp = str.charAt(i);
                if (temp == 'P') {
                    indexP = i;
                } else if (temp == 'T') {
                    indexT = i;
                } else if (temp != 'A') {
                    flag = true;
                    break;
                }
            }

            if (!flag && indexT - indexP != 1 && (indexT - indexP - 1) * indexP == str.length() - 1 - indexT)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}