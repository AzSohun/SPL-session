public class PrintSubArrays {
    public static void main(String[] args) {

        int numbers[] = { 2, 4, 6, 8, 10 };
        int n = numbers.length;
        int sum = 0;
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        int totalSubArrays = (n * (n - 1)) / 2;

        for (int i = 0; i < numbers.length; i++) {

            for (int j = i; j < numbers.length; j++) {
                for (int k = i; k <= j; k++) {

                    // print
                    System.out.print(numbers[k] + " ");

                    // sum
                    sum += numbers[k];

                    // min
                    if (min > numbers[k]) {
                        min = numbers[k];
                    }

                    // max
                    if (max < numbers[k]) {
                        max = numbers[k];
                    }

                }
                System.out.print(" Sum=" + sum + " Min=" + min + " Max=" + max);
                System.out.println();

                // Reset
                sum = 0;
                min = Integer.MAX_VALUE;
                max = Integer.MIN_VALUE;
            }

            System.out.println();
        }

        System.out.println("Total Sub Arrays: " + totalSubArrays);
    }
}