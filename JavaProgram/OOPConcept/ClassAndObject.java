

class rectangle{
    
    public int length;
    public int breadth;

    public int area(){
        return length*breadth;
    }

    public int perimeter(){
        return 2*(length+breadth);
    }

}

public class ClassAndObject{

    public static void main(String[] args) {

        rectangle r = new rectangle();

        r.length = 10;
        r.breadth = 20;

        System.out.println(r.area());
        System.out.println(r.perimeter());
        
    }
}