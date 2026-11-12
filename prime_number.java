import java.util.Scanner;
public class prime_number{
     public static void main(String[] args){
         Scanner sc=new Scanner(System.in);
         System.out.println("Enter the prime number:");
         int num =sc.nextInt();
         if(num%2==0)
         {
             System.out.println(num+" is not Prime number");
         }
         else{
             System.out.println(num+" is  Prime number");
         }
         sc.close();
     }
}