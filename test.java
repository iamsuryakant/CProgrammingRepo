//package JavaProgram.OOPConcept;

//Program for writing the prime number upto a range with github copilot.

public class test {

    public static int prime_range(int start, int end) {
        int count = 0;
        for (int i = start; i <= end; i++) {
            if (isPrime(i))
                count++;
        }
        return count;
    }

    public static boolean isPrime(int num) {
        if (num <= 1)
            return false;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    public static void main(String[] args) {
        
        System.out.println("Prime numbers between 1 to 10 are: " + prime_range(0,10));
    }
   
}
