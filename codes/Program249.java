import java.util.*;

class Program249
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int isize = 0, icnt = 0;

        System.out.println("Enter the number of elements : ");
        isize = sobj.nextInt();

        int arr[] = new int[isize];                                         // dynamic memory allocation(for int array)

        System.out.println("Enter the elements : ");                      
        for(icnt = 0; icnt < isize; icnt++)                                 // to store accepted numbers from user into array
        {
            arr[icnt] = sobj.nextInt();
        }

        sobj.close();
    }
}