import java.util.*;     // for scanner class to accept input

class Program251
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int isize = 0, icnt = 0;

        System.out.println("Enter the number of elements : ");
        isize = sobj.nextInt();

        int arr[] = new int[isize];
 
        System.out.println("Enter the elements : ");
        for(icnt = 0; icnt < isize; icnt++)
        {
            arr[icnt] = sobj.nextInt();
        }

        System.out.println("Elements of the array are : ");
        for(icnt = 0; icnt < isize; icnt++)
        {
            System.out.print(arr[icnt]+"\t");
        }
        System.out.println();

        sobj.close();

    }
    
}