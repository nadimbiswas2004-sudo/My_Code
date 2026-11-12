import java.util.Scanner;
public class number_pallindrom {
    public static void main(String[] args) {
        Scanner N = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num = N.nextInt();
        int originalNum = num;
        int reversedNum = 0;

        while (num != 0) {
            int digit = num % 10;
            reversedNum = reversedNum * 10 + digit;
            num /= 10;
        }

        if (originalNum == reversedNum) {
            System.out.println(originalNum + " is a palindrome.");
        } else {
            System.out.println(originalNum + " is not a palindrome.");
        }
        N.close();
    }
}
