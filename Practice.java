import java.util.Scanner;
public class Practice {
    public static void main(String[] args){
        double num=4.987;
        System.out.printf("Enter a number:%f\n",num);
        int n=897;
        System.out.printf("Enter the number:%d\n",n);
        Scanner sc =new Scanner(System.in);
        System.out.print("Enter the number:");
        int value =sc.nextInt();
        System.out.println(value);
        sc.close();
    }
}
