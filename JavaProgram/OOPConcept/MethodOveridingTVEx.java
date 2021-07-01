package JavaProgram.OOPConcept;

class TV{

    public void switchOn() {
        System.out.println("TV is switched On");
    }

    public void channelChanged() {
        System.out.println("TV channel is changed");
    }
}

class smartTV extends TV{

    @Override
    public void switchOn() {
        System.out.println("Smart TV is switched On");
    }

    @Override
    public void channelChanged() {
        System.out.println("Smart TV channel is changed");
    }

    public void Browse(){
        System.out.println("Smart TV Browsing");
    }

} 

public class MethodOveridingTVEx {

    public static void main(String[] args) {
        
        // TV T = new TV();

        // T.switchOn();
        // T.channelChanged();

        TV T = new smartTV();

        T.switchOn();
        T.channelChanged();
    }
    
}
