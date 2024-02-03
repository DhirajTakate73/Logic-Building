import java.util.*;

class Program245
{
    public static int Factorial(int ino)
    {
        int ifact = 1;
        int icnt = 0;

        icnt = 1;
        while(icnt <= ino) 
        {
            ifact = ifact * icnt;
            icnt++;
        }
        return ifact;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ivalue = 0, ians = 0;

        System.out.println("Enter the number : ");
        ivalue = sobj.nextInt();

        ians = Factorial(ivalue);

        System.out.println("Factorial is : "+ians);
        sobj.close();
    }
}