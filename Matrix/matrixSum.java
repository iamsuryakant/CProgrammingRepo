package Matrix;

import java.util.*;

public class matrixSum {

    public static void main(String[] args) {
        int n, m;
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        m = in.nextInt();
        int[][] matrix = new int[n][m];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = in.nextInt();
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                sum += matrix[i][j];
            }
        }
        if (sum % 2 == 0) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        in.close();
    }
}    

