package JavaProgram.OOPConcept;

class parent{
    parent(){
        System.out.println("No-Param of Parents");
    }

    parent(int x){
        System.out.println("param of parent  " +x);
    }
}

class child extends parent{
    child(){
        System.out.println("Non-param of child");
    }
    child(int y){
        System.out.println("param of child");
    }

    child(int x, int y){
         super(x);
        System.out.println("2 param of child " + y);
       
    }
}
public class PrameteriszedConstructors {

    public static void main(String[] args) {
        
        new child(10,20);
    }
    
}
