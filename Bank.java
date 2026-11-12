public class Bank{
    public static void main(String[] args){
        Bank_account b1=new Bank_account(123345, 5000);
        System.out.println(b1.get_data());
        System.out.println(b1.get_data1());


    }
    
}
class Bank_account{
    int accountNumber;
    int Blanch;
    Bank_account(int a, int b){
        accountNumber=a;
        Blanch=b;
    }
    public int get_data(){
        return accountNumber;
        
    }
    public int get_data1(){
        return Blanch;
        
    }
    
    
}