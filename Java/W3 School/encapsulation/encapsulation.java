public class encapsulation {
    private String name;

    public String getName () {
        return name;
    }

    public void setName (String newName) {
        System.out.println(this);
        this.name = newName;
    }

}
