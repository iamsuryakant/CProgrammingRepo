


class Rectangle1{

    private int length;
    private int breadth;

    // constructors Introduced...
    public Rectangle1()
    {
        length = 1;
        breadth = 1;
    }

    public Rectangle1(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int getLength(){
        return length;
    }

    void setLength(int l){
        if(l>0){
            length = l;
        }
        else{
            length = 0;
        }
    }
    
    int getBreadth(){
        return breadth;
    }

    void setBreadth(int b){
        if(b>0)
        {
            breadth = b;
        }
        else{
            length = 0;
        }
    }
    public int area(){
        return length *breadth;
    }

    public int breadth(){
        return 2*(length+breadth);
    }
}


public class DatahidingEx {

    public static void main(String[] args) {
        Rectangle1 r1 = new Rectangle1(10,20);
        // r1.setLength(-10);
        // r1.setBreadth(50);

        System.out.println(r1.area());
    }
    
}
