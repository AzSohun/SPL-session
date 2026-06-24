public class PairsInArray {
    public static void main(String[] args) {

        int numbers[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
        int totalPairs = (numbers.length * (numbers.length - 1)) / 2;

        for (int i = 0; i < numbers.length - 1; i++) {
            for (int j = i + 1; j < numbers.length; j++) {
                System.out.print("( " + numbers[i] + ", " + numbers[j] + " ) ");
            }
            System.out.println();
        }

        System.out.println("Total Pairs: " + totalPairs);
    }
}
