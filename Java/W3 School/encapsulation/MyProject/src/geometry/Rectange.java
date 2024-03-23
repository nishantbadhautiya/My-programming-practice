package MyProject.src.geometry;

public class Rectange {
    private double length;
    private double breadth;

    public Rectange(double length, double breadth){
        this.length = length;
        this.breadth = breadth;
    }

    public double getArea(){
        return length * breadth;
    }
}
