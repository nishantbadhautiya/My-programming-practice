abstract class Shape {

    abstract public double getArea();
    abstract public double getParameter();
    public void getInfo(){
        System.out.println("This is a shape");
    }
}

class Circle extends Shape {
    public int radius;
    public Circle (int r) {
        this.radius = r;
    }

    @Override
    public double getArea(){
        return Math.PI * this.radius * this.radius;
    }

    @Override

    public double getParameter () {
        return 2 * Math.PI * radius;
    }
    
}


class Rectange extends Shape {
    public int length, breath;
    public Rectange (int l, int b) {
        this.length = l;
        this.breath = b;
    }

    @Override
    public double getArea(){
        return this.length * this.breath;
    }

    @Override
    public double getParameter () {
        return 2 * (this.length + this.breath);
    }

}


public class cwh_53_2abstract {
    public static void main(String[] args) {
        Rectange r = new Rectange(10, 20);
        System.out.println(r.getArea());
        System.out.println(r.getParameter());
        r.getInfo();

        Circle c = new Circle(14);
        System.out.println(c.getArea());
        System.out.println(c.getParameter());
        c.getInfo();
    }
}
