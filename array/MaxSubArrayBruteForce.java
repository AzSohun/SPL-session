
public class MaxSubArrayBruteForce {
    public static void main(String[] args) {
        int numbers[] = { 1, -2, 6, -1, 3 };

        int max = Integer.MIN_VALUE;
        int currentSum = 0;

        for (int i = 0; i < numbers.length; i++) {
            for (int j = i; j < numbers.length; j++) {
                for (int k = i; k <= j; k++) {
                    currentSum += numbers[k];

                    if (max < currentSum) {
                        max = currentSum;
                    }

                }
                System.out.println(currentSum);

                currentSum = 0;
            }
        }

        System.out.println("Maximum Sum = " + max);
    }
}
