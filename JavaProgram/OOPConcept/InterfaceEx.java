

interface Test{

    void meth1();
    void meth2();
}

class my implements Test{
    public void meth1(){
        System.out.println("Meth1 of class my");
    }
    public void meth2(){
        System.out.println("Meth2 of class my");
    }
}

public class InterfaceEx {

    public static void main(String[] args) {
        Test t = new my();

        t.meth1();
        t.meth2();
    }
}
