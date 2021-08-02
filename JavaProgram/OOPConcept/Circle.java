

class circle1{
    
    public double radius;
    
    public double area(){
        return Math.PI*radius*radius;
    }

    public double circumference(){
        return 2*(Math.PI)*radius;
    }
}


public class Circle {
    public static void main(String[] args) {
        
        circle1 c = new circle1();
        c.radius = 10.5;

        System.out.printf("%.2f", c.area());
        System.out.println();
        System.out.printf("%.2f", c.circumference());
    }
}
