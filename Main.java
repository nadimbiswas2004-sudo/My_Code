// Online Java Compiler
// Use this editor to write, compile and run your Java code online
class Main {
    public static void main(String[] args) {
        System.out.println("Try programiz.pro");
        Vehicle v1=new Vehicle();
         Vehicle v2=new Vehicle("28323-2323-21323","34453434");
         v1.set_registration_number("234234324");
     System.out.println(v1.get_registration_number());
    v1.set_numer_plate("234-234-324");
     System.out.println(v1.get_numer_plate());
     
      System.out.println(v2.get_registration_number());
      System.out.println(v2.get_numer_plate());
      v2.display();
      Car c1=new Car("red","23254256","5256-2626");
      c1.display();
         
    }
}
class Vehicle
{
    public  String registration_number;
     public String numer_plate;
     
     Vehicle()
     {
         registration_number=" ";
         numer_plate=" ";
     }
     
     Vehicle(String s1, String s2)
     {
         registration_number=s1;
         numer_plate=s2;
     }
     public String get_registration_number()
     {
         return registration_number;
     }
     
     public void set_registration_number(String s1)
     {
          registration_number=s1;
     }
     
     public String get_numer_plate()
     {
         return numer_plate;
     }
     
     public void set_numer_plate(String s1)
     {
          numer_plate=s1;
     }
     
     public void display()
     {
         System.out.println("Vehicle registraction number:  "+registration_number);
          System.out.println("Vehicle numer_plate number:  "+numer_plate);
     }
     
     
}
 class Car extends Vehicle
 {
     int number_wheel=4;
     String color;
     
     Car(String s)
     {
         color=s;
           registration_number=" ";
         numer_plate=" ";
     }
     
     Car(String s,String s1,String s2)
     {
         super(s1,s2);
         color=s;
          
     }
     
      public void display()
     {
          System.out.println("car color :  "+color);
         System.out.println("car has "+number_wheel+ "wheel\n"+"car registraction number:  "+registration_number);
          System.out.println("car numer_plate number:  "+numer_plate);
     }
 }