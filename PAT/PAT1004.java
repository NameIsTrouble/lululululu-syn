package  Java.PAT;

import java.lang.reflect.Array;
import java.util.*;
import java.lang.String;

class stu {
    String name, ID;
    int score;

    stu(String nameT, String IDT, int scoreT) {
        name = nameT;
        ID = IDT;
        score = scoreT;
    }
}

class cmp implements Comparator<stu> {
    public int compare(stu a, stu b) {
        if (a.score > b.score) {
            return -1;
        } else {
            return 1;
        }
    }
}

public class PAT1004 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        stu temp[] = new stu[10005];
        for (int i = 0; i < n; ++i) {
            String nameT = in.next(), IDT = in.next();
            int scoreT = in.nextInt();
            temp[i] = new stu(nameT, IDT, scoreT);
        }
        Arrays.sort(temp, 0, n, new cmp());
        System.out.println(temp[0].name + " " + temp[0].ID);
        System.out.println(temp[n - 1].name + " " + temp[n - 1].ID);
    }
}