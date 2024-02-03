import java.util.*;
class Program247
{
    public static void EvenOddFactors(int ino)
    {
        int ifact = 1;
        int icnt = 0;

        int isumeven = 0;
        int isumodd = 0;

        for(icnt = 1; icnt <= ino; icnt++)
        {
            if((ino % icnt) == 0)
            {
                if((icnt % 2) == 0)
                {
                    isumeven = isumeven + icnt;
                }
                else
                {
                    isumodd = isumodd + icnt;
                }
            }
            
        }
        System.out.println("Addition of Even factors is : "+isumeven);
        System.out.println("Addition of odd factors is : "+isumodd);

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