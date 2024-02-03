import java.util.*;     //  to create object of Scanner class 

class Arithematic
{
    public int ivalue1;     // characteristics
    public int ivalue2;

    public Arithematic(int A, int B)    // parameterised constructor which will accept input from main method
    {
        this.ivalue1 = A;               
        this.ivalue2 = B;
    }
    public int Addition()       // method
    {
        int isum = 0;
        isum = this.ivalue1 + this.ivalue2;                     // characteristics access karnyasathi this vapraycha but its optional
        return isum;
    }
    
}
class Program242
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);              // to accept the input from keyboard

        int ino1 = 0, ino2 = 0;                            // local variables
        int ians = 0;

        System.out.println("Enter first number : ");
        ino1 = sobj.nextInt();                             // method to accept integer input from user 

        System.out.println("Enter second number : ");
        ino2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(ino1, ino2);             // parameterises constructor la parameters pathavle 

        ians = aobj.Addition();
        System.out.println("Addition is : "+ians);

    }
    

}