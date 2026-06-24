public class BinarySeach {

    public static int binarySeach(int numbers[], int key) {
        int start = 0;
        int end = numbers.length - 1;

        while (start <= end) {

            int mid = (start + end) / 2;

            if (numbers[mid] == key) {
                return mid;
            }
            if (numbers[mid] < key) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }

        }

        return -1;
    }

    public static void main(String[] args) {

        int numbers[] = { 1, 2, 4, 5, 6, 8, 9, 10, 11, 13, 14, 15 };
        int key = 10;

        int ans = binarySeach(numbers, key);

        System.out.println("Key = " + ans);

    }

}
