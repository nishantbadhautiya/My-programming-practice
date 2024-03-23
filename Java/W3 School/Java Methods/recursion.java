public class recursion {
    public static void main(String[] args) {
        int result = sum(10);
        System.out.println(result);

        result = between_two_num_sum(5, 10);
        System.out.println(result);
    }

    public static int sum(int num){
        if(num > 0){
            return num + sum(num - 1);
        }
        else{  // Halting Condition
            return 0; 
        }
    }

    public static int between_two_num_sum(int s, int e){
        // Halting Condition
        if(s > e){
            return 0;
        }
        s = s + between_two_num_sum(s + 1, e);
        return s;
    }

}
