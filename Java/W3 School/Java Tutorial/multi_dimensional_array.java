public class multi_dimensional_array {
    public static void main(String[] args) {
        int [][] nums = {{1, 2, 3}, {4, 5, 6}};
        System.out.println(nums[1][1]);
        System.out.println(nums.length);
        for (int i = 0; i < nums.length; i++) {
            System.out.println(nums[i][0]);
        }
    }
}
 