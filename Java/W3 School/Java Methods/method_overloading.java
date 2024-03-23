public class method_overloading {
    static int twoSum(int a , int b){
        return a + b;
    }
    static double twoSum(double a, double b){
        return a + b;
    }
    public static void main(String[] args) {
        int ans = twoSum(2, 7);
        System.out.println(ans);

        double ans2 = twoSum(12, 45);
        System.out.println(ans2);
    }
}
