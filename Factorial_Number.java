import java.util.Scanner;
public class Factorial_Number{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a,factorial=1;
        System.out.print("Enter the factorial:");
        a=sc.nextInt();
        for(int i=1;i<=a;i++){
            factorial*=i;
        }
        System.out.printf("Factorial of %d= %d",a,factorial);
        sc.close();
    }
}