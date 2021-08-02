

import java.util.Arrays;
import java.util.*;


public class javaStream {

    public static void main(String[] args) {
        
        List<Integer> l = Arrays.asList(5,10,15,20,25,30);
        l.stream()
            .filter(x->x%2 == 0)
            .filter(x->x>10)
            .forEach(System.out::println);

    }
    
}
