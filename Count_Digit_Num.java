import java.util.Scanner;
public class Count_Digit_Num {
public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number:");
    int num=sc.nextInt();
    int count=0;
    while(num!=0){
        num/=10;
        count++;
    }
    System.out.println("Number of Digit: "+count);
    sc.close();
}
    
}
