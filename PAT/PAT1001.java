package Java.PAT;

import java.util.Scanner;

public class PAT1001 {
    public static void main(String[] args) {
        Scanner temp = new Scanner(System.in);
        int n = temp.nextInt(), cnt = 0;
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            }
            else {
                n = (3 * n + 1) / 2;
            }
            cnt++;
        }
        System.out.println(cnt);
    }
}