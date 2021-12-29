package Cogni;

import java.util.*;

class coins
{
	public static void main (String[] args) throws java.lang.Exception
	{
		
		Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int i=0;
        while(i*(i+1)/2<=N){
            i++;
        }
        
        System.out.println(i-1);
        s.close();
	}
}