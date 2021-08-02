import java.util.*;
import java.util.function.*;
// Using Array List
/*
class GFG {
    static void printCond(Collection<Integer> C, Predicate<Integer> p)
    {
        for(Integer x: C)
        {
            if(p.test(x))
                System.out.print(x+" ");
        }
    }
	public static void main (String[] args) {
		
		class MyPredicateEven implements Predicate<Integer> {
		    
		    public boolean test(Integer x)
		    {
		        return x%2==0;
		    }
		}
		List<Integer> al= new ArrayList<>(Arrays.asList(10,5,20,7,30));
		
		printCond(al,new MyPredicateEven());
	}
}*/


/*package whatever //do not write package name here */
// Using Lambda Expression


class GFG {
    static void printCond(Collection<Integer> C, Predicate<Integer> p)
    {
        for(Integer x: C)
        {
            if(p.test(x))
                System.out.print(x+" ");
        }
    }
	public static void main (String[] args) {
	
		List<Integer> al= new ArrayList<>(Arrays.asList(10,5,20,7,30));
		
		printCond(al, x -> x % 2 == 0 );
	}
}


