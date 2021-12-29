package JavaProgram.OOPConcept;


class Super{
    
    public void display(){
        System.out.println("Super Class Display");
    }
}

class sub extends Super{

    public void display(){
        System.out.println("sub Class display");
    }
}
public class MehodOveriding {
    
    public static void main(String[] args) {
        Super sc = new sub();

        sc.display();

        sub s = new sub();
        s.display();
        
    }
}
