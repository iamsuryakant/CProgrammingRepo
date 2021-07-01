package JavaProgram.OOPConcept;

class Cylinder1{

    private double radius;
    private double height;

    double getRadius(){
        return radius;
    }

    double getHeight(){
        return height; 
    }

    void setRadius(double r){

        if(r>0)
        {
            radius = r;
        }
        else{
            radius = 0;
        }
    }

    void setHeight(double h){
        if(h>0)
        {
            height = h;
        }
        else{
            height = 0;
        }
    }

    public double volume(){
        return Math.PI*radius*radius*height;
    }

    public double totalSurfaceA()
    {
        return (2*Math.PI*radius)*(radius+height);
    }

    public Cylinder1()
    {
        radius = 1;
        height = 1;
    }

    public Cylinder1(double radius, double height)
    {
        this.radius = radius;
        this.height = height;
    }

}

public class Cylinder {

    public static void main(String[] args) {
        
        Cylinder1 c1 = new Cylinder1(10,20);

        System.out.println(c1.volume());
        System.out.println(c1.totalSurfaceA());
    }
    
}
