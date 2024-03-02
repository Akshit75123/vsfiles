public class pattern1 {
    public static void main(String[] args) {
        for (int i = 1; i <= 4; i ++) {
            // loop for printing spaces
            for (int j = 1; j <= 4 - i; j ++) {
                System.out.print(" ");
            }
            // loop for printing stars
            for (int j = 1; j <= i; j ++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
