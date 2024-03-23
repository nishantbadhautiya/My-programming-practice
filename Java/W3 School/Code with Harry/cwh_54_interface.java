interface BiCycle {
    int a = 34; // it's by default final 
    public void speedUp();
    public void applyBreak();
}

interface HornCycle {
    public void hollywood_cycle();
    public void bollywood_cycle();
}

class MainClass {
    public MainClass(){
        System.out.println("Constructor called of mainClass");
    }
    public void mainMethod () {
        System.out.println("Main method called");
    }
}

class NishantCycle implements BiCycle, HornCycle{
    @Override
    public void speedUp () {
        System.out.println("Speed applied by Nishant");
    }
    @Override
    public void applyBreak () {
        System.out.println("Break applied by Nishant");
    }
    @Override
    public void hollywood_cycle () {
        System.out.println("Hollywood cycle horn of Nishant");
    }
    @Override
    public void bollywood_cycle () {
        System.out.println("Bollywood cycle horn of Nishant");
    }
}

class MohitCycle extends MainClass implements BiCycle {
    @Override
    public void speedUp () {
        System.out.println("Mohit applied speed");
    }
    @Override
    public void applyBreak () {
        System.out.println("Mohit applied break");
    } 
}

public class cwh_54_interface {
    public static void main(String[] args) {
        NishantCycle n = new NishantCycle();
        n.applyBreak();
        n.speedUp();
        n.hollywood_cycle();
        // NishantCycle.a = 34; --> cannot assign a value to final variable a
        System.out.println(NishantCycle.a);

        MohitCycle m = new MohitCycle();
        m.speedUp();
        m.applyBreak();
        m.mainMethod();
        System.out.println(MohitCycle.a);
    }
}
