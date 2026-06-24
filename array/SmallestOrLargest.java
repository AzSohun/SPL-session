public class SmallestOrLargest {

    public static int GetLargest(int numbers[]) {

        int max = Integer.MIN_VALUE;

        for (int i = 0; i < numbers.length; i++) {
            if (max < numbers[i]) {
                max = numbers[i];
            }
        }
        return max;
    }

    public static int GetSmallest(int numbers[]) {
        int min = Integer.MAX_VALUE;

        for (int i = 0; i < numbers.length; i++) {
            if (min > numbers[i]) {
                min = numbers[i];
            }
        }

        return min;
    }

    public static void main(String[] args) {

        int numbers[] = { 3, 1, 7, 5, 2, 6, 9, 8, 4 };

        int getLargest = GetLargest(numbers);

        System.out.println("Largest = " + getLargest);

        int getSmallest = GetSmallest(numbers);

        System.out.println("Smallest = " + getSmallest);

    }
}