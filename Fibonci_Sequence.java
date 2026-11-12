public class Fibonci_Sequence {
    public static void main(String[] args){
        int n=10,fn=0,sn=1;
        for(int i=0;i<n;i++){
            System.out.print(fn+",");
        
        int rev=fn+sn;
        fn=sn;
        sn=rev;
        }
    }
}
