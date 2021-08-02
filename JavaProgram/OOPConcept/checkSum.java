

import java.util.*;

public class checkSum {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0)
        {
            int a = in.nextInt();
            int b = in.nextInt();
            int c = in.nextInt();

            if((a+b == c)||(b+c == a) ||(a+c == b))
            {
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
        t--;
        in.close();

    }

}

