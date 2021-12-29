package JavaProgram.OOPConcept;



abstract class Super1{

    public Super1(){
        System.out.println("Super Constructor");
    }

    public void meth1(){
        System.out.println("Meth1 of super");
    }

    abstract public void meth2();
}


class sub1 extends Super1
{
    @Override
    public void meth2(){
        System.out.println("Sub meth2");
    }
}
public class AbstractClassEx {
    
    public static void main(String[] args) {
        
        Super1 s = new sub1();
        s.meth1();
        s.meth2();
    }
}
