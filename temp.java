public class temp {
    public static void main(String[] args){
        Tempture t =new Tempture(8.9,4.5);
        System.out.println(t.increse());  
        System.out.println(t.decrese());
        Tempture t2 =new Tempture(100.2,80.5);
        System.out.println(t2.increse());  
        System.out.println(t2.decrese());
    }
}
class Tempture{
    double x,y;
    Tempture(){    }
    Tempture(double a, double b){
        x=a;y=b;
    }
    double increse(){
        return x+y;
    }
    double decrese(){
        return x-y;
    }
}