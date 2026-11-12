public class interf_code {
    public static void main(String[] args){
        System.out.println("Inter_abstr");
        Man m=new Man();
        m.name1();
        m.display();
        wms w=new wms();
        w.name1();
        w.display();
    }
}
interface Nadim {
    void name1();
    void display();
}
class wms implements Nadim{
    public void name1(){
        System.out.println("Gongarampur");
    }
    public void display(){
        System.out.println("Khulna");
    }
}
 class Man implements Nadim{
    public void name1(){
        System.out.println("Ahte Shamul Hoque Nadim Biswas");
    }
    public void display(){
        System.out.println("Name: ASHNB");
        
    }
}
 