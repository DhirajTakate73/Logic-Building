import java.util.*;
class Program246
{
    public static void EvenOddFactors(int ino)
    {
        int ifact = 1;
        int icnt = 0;

        for(icnt = 1; icnt <= ino; icnt++)
        {
            if((ino % icnt) == 0)
            {
                if((icnt % 2) == 0)
                {
                    System.out.println("Even factors is : "+icnt);
                }
                else
                {
                    System.out.println("Odd factors is : "+icnt);
                }
            }
            
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ivalue = 0;

        System.out.println("Enter the number : ");
        ivalue = sobj.nextInt();

        EvenOddFactors(ivalue);

        sobj.close();
    }
}