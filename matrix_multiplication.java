import java.util.Scanner;
public class matrix_multiplication{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int[][] a=new int[3][3];
        System.out.println("Enter matrix1:");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                a[i][j]=sc.nextInt();
            }
        }
          Scanner s=new Scanner(System.in);
        int[][] b=new int[3][3];
        System.out.println("Enter matrix2:");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                b[i][j]=s.nextInt();
            }
        }
    
        int[][] c=new int[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                c[i][j]=a[i][j]*b[i][j];
            }
        }
        System.out.println("Multiplecation:");
         for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                System.out.print(" "+c[i][j]);
            }
             System.out.print("\n");
        }
        sc.close();
        s.close();
    }
}