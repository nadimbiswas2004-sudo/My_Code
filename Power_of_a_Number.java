import java.util.Scanner;
public class Power_of_a_Number{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a,powernum=1;
        System.out.print("Enter the Power of a Number:");
        a=sc.nextInt();
        for(int i=1;i<=a;i++){
            powernum+=i*i;
        }
        System.out.printf("Power of a Number %d= %d",a,powernum-1);
        sc.close();
    }
}