
import java.util.Scanner;

public class TrappingRainwater {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        int heights[] = new int[n];
        for (int i = 0; i < n; i++) {

            int height = input.nextInt();

            heights[i] = height;
        }

        int leftMax[] = new int[n];
        leftMax[0] = heights[0];
        for (int i = 1; i < n; i++) {
            leftMax[i] = Math.max(heights[i], leftMax[i - 1]);
        }

        int rightMax[] = new int[n];
        rightMax[n - 1] = heights[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = Math.max(heights[i], rightMax[i + 1]);
        }

        int waterTrapped = 0;
        for (int i = 0; i < n; i++) {
            int waterLevel = Math.min(leftMax[i], rightMax[i]);

            waterTrapped += waterLevel - heights[i];
        }

        System.out.println(waterTrapped);

    }
}
