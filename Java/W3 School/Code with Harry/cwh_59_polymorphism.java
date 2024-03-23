interface Camera {
    public void takePhoto();
    public void recordVideo();
    private void greet () { // can not access in sub classes but its useful for my default methods goes longer like record4Kvideo function can use this method 
        System.out.println("Good Morning");
    }
    default void record4Kvide(){  // default method no need to implement in sub classes and we can also override this method in sub classes
        greet();
        System.out.println("Recording video in 4k ...");
    }
}

interface Wifi {
    public String[] getNetworks();
    public void connect_to_network(String network_name);
}

class cellPhone {
    public void dialNumber(int phone_number){
        System.out.println("Dial to " + phone_number);
    }
    public void connect_phone(){
        System.out.println("Phone is connecting...");
    }
}

class smartPhone extends cellPhone implements Camera, Wifi {
    public void record4Kvide() {
        System.out.println("Recording 4K video for my Smartphone");
    }
    public void takePhoto(){
        System.out.println("Phone captured a photo");
    }
    public void recordVideo(){
        System.out.println("Phone recording a video");
    }
    public String[] getNetworks(){
        System.out.println("Getting the list of all the network");
        String [] networks_list = {"Local wifi", "Library wifi", "Rail Wifi"};
        return networks_list;
    }
    public void connect_to_network(String network_name){
        System.out.println("Connected to " + network_name);
    }
}

public class cwh_59_polymorphism {
    public static void main(String[] args) {
        Camera c = new smartPhone();
        c.record4Kvide();
        c.recordVideo();
        // c.getNetworks();  --> error 

        smartPhone s = new smartPhone();
        s.connect_to_network("Local Wifi");
        s.record4Kvide();
    }
}
