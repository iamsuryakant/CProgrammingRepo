package JavaProgram.OOPConcept;



public class classLoader {

    public static void main(String[] args) {
        
        Class c = ClassLoader.class;

        System.out.println(c.getClassLoader());

        System.out.println(String.class.getClassLoader());
    }
    
}
