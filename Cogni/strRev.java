package Cogni;

// import java.util.*;

class strRev{

    public static void main(String[] args) {

        String s = "Suryakant";

       // Scanner sc = new Scanner(System.in);

       StringBuilder input = new StringBuilder();

       // s = sc.nextLine();

       input.append(s);

       input.reverse();

       for(int i = 0; i<s.length(); i++) {
           System.out.print(input.charAt(i));
       }
    }
}