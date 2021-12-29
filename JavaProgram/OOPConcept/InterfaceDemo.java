package JavaProgram.OOPConcept;




interface member{
    void callback();
}


class customer implements member{

    String name;
    customer(String n)
    {
        name = n;
    }

    public void callback(){
        System.out.println("Ok, I will visit " + name);
    }
}

class store{
    member mem[] = new member[100];
    int count = 0;

    void register(member m){
        mem[count++] = m;
    }

    void inviteSale()
    {
        for(int i = 0; i<count; i++)
        {
            mem[i].callback();
        }
    }

}
public class InterfaceDemo {
    
    public static void main(String[] args) {
        
        store s = new store();
        customer c1 = new customer("john");
        customer c2 = new customer("Ravi");

        s.register(c1);
        s.register(c2);

        s.inviteSale();
    }
}

