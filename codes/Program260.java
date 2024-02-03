import java.util.*;     // for scanner class to accept input

class Program260
{
    public static int CountCapital(String str)
    {
        int icnt = 0;
        int icount = 0;

        char arr[] = str.toCharArray();

        for(icnt = 0; icnt < arr.length; icnt++)
        {
            if((arr[icnt] >= 'A') && (arr[icnt] <= 'Z'))
            {
                icount++;
            }
            System.out.print(arr[icnt]+"\t");

        }
        return icount;

    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iret = 0;

        String str = null;

        System.out.println("Enter string : ");
        str = sobj. nextLine();

        iret = CountCapital(str);

        System.out.println("\nNumber of capital characters in the string are : "+iret);

        sobj.close();
    }
}

// string litral pool
