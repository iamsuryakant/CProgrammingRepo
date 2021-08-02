

class circle2{

    public double radius;

    public double area(){
        return Math.PI*radius*radius;
    }

    public double perimeter(){
        return 2*Math.PI*radius;
    }
}

class Cylinder2 extends circle2{

    public double height;

    public double volume(){
        return area()*height;
    }

}

public class CircleCyInheritenceEx {
    
    public static void main(String[] args) {
        
        Cylinder2 c = new Cylinder2();
        c.radius = 7;
        c.height = 10;
        System.out.println(c.volume());
    }
}
