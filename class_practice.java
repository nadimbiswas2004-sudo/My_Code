public class class_practice {
    public static void main(String[] args) {
        System.out.println("Try programize pro");
        Vahicle v1=new Vahicle();
        Vahicle v2=new Vahicle("2337744","45667899");
        System.out.println(v1.set_get());
        System.out.println(v1.get_data());
        System.out.println(v2.set_get());
        System.out.println(v2.get_data());

    }
}
class Vahicle
{
    private String reg_num;
    private String number_plate;
    public Vahicle()
    {
        reg_num="11230";
        number_plate="464687";
    }
    public Vahicle(String s1, String s2)
    {
        reg_num=s1;
        number_plate=s2;
    }
    public String set_get()
    {
        return reg_num;
    }
    public String get_data()
    {
        return number_plate;
    }
    
}