public class Inter_abstr {
    public static void main(String[] args){
        System.out.println("Inter_abstr");
        Man m=new Man();
        m.name1();
        m.display();
        Nadim n=new Man();
        n.name1();
        n.display();
        Nadim w=new wms();
        w.name1();
        w.display();
    }
}
 abstract class Nadim{
    String Name="N";
    int age=20;
    int ID=30;
    abstract void name1();
    void display(){
        System.out.println("Name: "+Name);
        System.out.println("Age: "+age);
        System.out.println("ID: "+ID);
    }
}
class wms extends Nadim{
    void name1(){
        System.out.println("Gongarampur");
    }
}
 class Man extends Nadim{
    void name1(){
        System.out.println("Ahte Shamul Hoque Nadim Biswas");
    }
    void display(){
        System.out.println("Name: ASHNB");
        
    }
}
 