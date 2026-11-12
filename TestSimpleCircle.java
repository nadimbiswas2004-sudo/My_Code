
// Source code is decompiled from a .class file using FernFlower decompiler.
public class TestSimpleCircle {
    public TestSimpleCircle() {
    }
 
    public static void main(String[] args) {
       circle var1 = new circle();
       System.out.println("The cicle area is =" + var1.getdata());
    }
 }
 class circle{
   double r;
   circle(){
       r=3;
   }
   double getdata(){
       return r*r;
   }
}