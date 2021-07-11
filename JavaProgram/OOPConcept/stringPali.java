package JavaProgram.OOPConcept;

// import java.util.*;

class stringPali{
    
    public static void main(String[] args) {
        
        String s1 = new String("GFG");
        // String s2 = s1;

        int n = s1.length();
        int start = 0 ;
        int end = n-1;
        for(int i = 0; i < n; i++) {
            
            while(start < end)
            {
                if(s1.charAt(start) != s1.charAt(end))
                {
                    break;
                }
                start++;
                end--;   
            }

        }

        if(start == end)
        {
            System.out.println("String is palindrome");
        }
        else
        {
            System.out.println("String is not palindrome");
        }
    }
}
