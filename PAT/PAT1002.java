package Java.PAT;

import java.util.*;
import java.lang.String;

public class PAT1002 {
    public static void main(String[] args) {
        String num[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
        Scanner read = new Scanner(System.in);
        String temp = read.nextLine();
        char[] n = temp.toCharArray();
        int sum = 0;
        for (int i = 0; i < temp.length(); ++i) {
            sum += n[i] - '0';
        }
        temp = String.valueOf(sum);
        char[] ans = temp.toCharArray();
        for (int i = 0; i < temp.length(); ++i) {
            if (i == 0) {
                System.out.print(num[ans[i] - '0']);
            } else {
                System.out.printf(" %s", num[ans[i] - '0']);
            }
        }
    }
}