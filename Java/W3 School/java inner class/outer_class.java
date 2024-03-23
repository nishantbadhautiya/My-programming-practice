public class outer_class {
    int x = 5;
    public class medium_class {
        int y = 10;
        public class inner_class {
            int z = 15;
            static int getSum () {
                outer_class outer_obj = new outer_class();
                outer_class.medium_class medium_obj = outer_obj.new medium_class();
                medium_class.inner_class inner_obj = medium_obj.new inner_class();
                return inner_obj.z + outer_obj.x + medium_obj.y;
            }
        }
    }
}
