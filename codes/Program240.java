import java.util.*;     //  to create object of Scanner class 

class Program240
{
    public static int Addition(int ivalue1, int ivalue2)
    {
        int isum = 0;
        isum = ivalue1 + ivalue2;
        return isum;
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ino1 = 0, ino2 = 0;
        int ians = 0;

        System.out.println("Enter first number : ");
        ino1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        ino2 = sobj.nextInt();

        ians = Addition(ino1, ino2);
        System.out.println("Addition is : "+ians);

    }
    

}