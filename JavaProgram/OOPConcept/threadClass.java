package JavaProgram.OOPConcept;



class Test1 extends Thread{
    public void run() {
        System.out.println("Inside Thread Class");
    }
}
public class threadClass {

    public static void main(String[] args) {
        
        Test1 t = new Test1();
        t.start();
        System.out.println("Main Thread");
    }
    
}
