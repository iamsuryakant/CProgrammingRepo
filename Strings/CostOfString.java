package Strings;

import java.util.*;

public class CostOfString {

    public static void main(String[] args) {
        
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        while(t>0){
            String s = sc.next();
            int n = s.length();
            int cost = 0;
            for(int i=0;i<n;i++){
                if(s.charAt(i)=='a' || s.charAt(i)=='e' || s.charAt(i)=='i' || s.charAt(i)=='o' || s.charAt(i)=='u'){
                    cost++;
                }
                else if(s.charAt(i)== 'b' || s.charAt(i) == 'c' || s.charAt(i)== 'd'|| s.charAt(i)== 'f' || s.charAt(i)== 'g' || s.charAt(i)== 'h' || s.charAt(i)== 'j' || s.charAt(i)== 'k' || s.charAt(i)== 'l' || s.charAt(i)== 'm' || s.charAt(i)== 'n' || s.charAt(i)== 'p' || s.charAt(i)== 'q' || s.charAt(i)== 'r' || s.charAt(i)== 's' || s.charAt(i)== 't' || s.charAt(i)== 'v' || s.charAt(i)== 'w' || s.charAt(i)== 'x' || s.charAt(i)== 'y' || s.charAt(i)== 'z'){
                    cost+=2;
                }
                else{
                    cost+=3;
                }
            }
            System.out.println(cost);
            t--;
        }
        sc.close();
    }
}
