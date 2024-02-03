import java.util.*;     // for scanner class to accept input

class Program253
{
    public static int Addition(int brr[])
    {
        int icnt = 0, isum = 0;

        for(icnt = 0; icnt < brr.length; icnt++)
        {
            isum = isum + brr[icnt];
        }
        return isum;

    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int isize = 0, icnt = 0, iret = 0;

        System.out.println("Enter the number of elements : ");
        isize = sobj.nextInt();

        int arr[] = new int[isize];

        System.out.println("Enter the elements : ");
        for(icnt = 0; icnt < isize; icnt++)
        {
            arr[icnt] = sobj.nextInt();
        }

        iret = Addition(arr);

        System.out.println("Addition of all elements is : "+iret);
        
        sobj.close();
    }
}