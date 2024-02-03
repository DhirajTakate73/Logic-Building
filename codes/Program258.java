import java.util.*;     // for scanner class to accept input

class Program258
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter your name : ");
        str = sobj. nextLine();

        char arr[] = str.toCharArray();                 // string la character array madhye convert karnyasathi
        int icnt = 0;
        
        for(icnt = 0; icnt < arr.length; icnt++)
        {
            System.out.println(arr[icnt]);
        }
        
        sobj.close();
    }
}

// string litral pool
// copy of 256
// in java there is '\0' at the end of the string