import java.io.*;
import java.util.*;


public class TestClass {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter wr = new PrintWriter(System.out);
        int T = Integer.parseInt(br.readLine().trim());
        for(int t_i = 0; t_i < T; t_i++)
        {
            int N = Integer.parseInt(br.readLine().trim());
            String[] arr_A = br.readLine().split(" ");
            int[] A = new int[N];
            for(int i_A = 0; i_A < arr_A.length; i_A++)
            {
            	A[i_A] = Integer.parseInt(arr_A[i_A]);
            }
            int Q = Integer.parseInt(br.readLine().trim());
            int[][] P = new int[Q][3];
            for(int i_P = 0; i_P < Q; i_P++)
            {
            	String[] arr_P = br.readLine().split(" ");
            	for(int j_P = 0; j_P < arr_P.length; j_P++)
            	{
            		P[i_P][j_P] = Integer.parseInt(arr_P[j_P]);
            	}
            }

            int[] out_ = query_game(N, A, Q, P);
            System.out.print(out_[0]);
            for(int i_out_ = 1; i_out_ < out_.length; i_out_++)
            {
            	System.out.print(" " + out_[i_out_]);
            }
            
            System.out.println();
            
         }

         wr.close();
         br.close();
    }

    static void swap(int arr[], int l, int r)
    {
        int i1 = 0, i2 = 0;
        for(int i = 0; i<arr.length; i++)
        {
            if(arr[i] == l){
                i1 = i;
                break;
            }

        }

        for(int i = 0; i<arr.length; i++)
        {
            if(arr[i] == r){
                i2 = i;
                break;
            }

        }

        int t = arr[i1];
        arr[i1] = arr[i2];
        arr[i2] = t;
    }

    static int print(int arr[], int value)
    {
        for(int i = 0; i<arr.length; i++)
        {
            if(arr[i] == value)
                return i+1;
        }
        return 0;
    }

    static void reverse(int arr[])
    {
        int l = 0;
        int r = arr.length-1;

        while(l<r)
        {
            int t = arr[l];
            arr[l] = arr[r];
            arr[r] = t;
            
            l++;
            r--;
        }
    }

    static int[] query_game(int N, int[] A, int Q, int[][] p){
       // Write your code here

        ArrayList<Integer> al = new ArrayList<>();

        for(int i = 0; i<Q; i++)
        {
            for(int j = 0; j<3; j++)
            {
                if(p[i][0] == 1){
                    reverse(A);
                    break;
                }

                if(p[i][0] == 2){
                    swap(A, p[i][1], p[i][2]);
                    break;
                }

                if(p[i][0] == 3)
                {
                    al.add(print(A, p[i][1]));
                    break;
                }
            }
        }
        int res[] = new int[al.size()];

        for(int i = 0; i<res.length; i++)
            res[i] = al.get(i);
        return res; 
    
    }
}