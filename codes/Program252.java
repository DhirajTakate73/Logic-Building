import java.util.*;     // for scanner class to accept input

class Program252
{
    public static void display(int brr[])
    {
        System.out.print("Elemets of the array are : ");
        int icnt = 0;

        for(icnt = 0; icnt < brr.length; icnt++)
        {
            System.out.print(brr[icnt]+"\t");
        }
        System.out.println();

    }
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

        display(arr);                                           // array cha base address jatoy ithun

        sobj.close();
    }
}