import java.util.*;     //  to create object of Scanner class 

class Arithematic                                   // separate class for method
{
    public int Addition(int ivalue1, int ivalue2)
    {
        int isum = 0;
        isum = ivalue1 + ivalue2;
        return isum;
    }
    
}
class Program241
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();               // obj creation of Arithematic class

        int ino1 = 0, ino2 = 0;
        int ians = 0;

        System.out.println("Enter first number : ");
        ino1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        ino2 = sobj.nextInt();

        ians = aobj.Addition(ino1, ino2);                           // to access the class (object_name.method_name(parameters) )
        System.out.println("Addition is : "+ians);

    }
    

}