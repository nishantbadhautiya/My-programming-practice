public class main {
    public static void main(String[] args) {
        // Example array
        int[] originalArray = {1, 2, 3, 4, 5};

        // Print original array
        System.out.println("Original Array:");
        printArray(originalArray);

        // Reverse the array
        reverseArray(originalArray);

        // Print reversed array
        System.out.println("\nReversed Array:");
        printArray(originalArray);
    }

    // Method to reverse an array
    private static void reverseArray(int[] arr) {
        int start = 0;
        int end = arr.length - 1;

        while (start < end) {
            // Swap elements at start and end indices
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            // Move indices towards the center
            start++;
            end--;
        }
    }

    // Method to print an array
    private static void printArray(int[] arr) {
        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
}
