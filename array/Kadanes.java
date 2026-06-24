public class Kadanes {

    public static void main(String[] args) {

        int numbers[] = { -2, -3, -1, -4 };
        // int numbers[] = { -2, -3, 4, -1, -2, 1, 5, -3 };

        int cs = 0;
        int ms = Integer.MIN_VALUE;

        for (int i = 0; i < numbers.length; i++) {

            cs += numbers[i];

            if (cs < 0) {
                cs = 0;
            }
            ms = Math.max(cs, ms);

            if (ms == 0) {
                int minimum = Integer.MIN_VALUE;
                for (int num : numbers) {
                    if (minimum < num) {
                        minimum = num;
                    }
                }
                ms = minimum;
            }
        }

        System.out.println(ms);

    }

}
