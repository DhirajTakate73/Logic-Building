import java.util.*;     // for scanner class to accept input

class Program259
{
    public static void Display(String str)
    {
        int icnt = 0;
        char arr[] = str.toCharArray();

        for(icnt = 0; icnt < arr.length; icnt++)    // string chi jevdhi length tevdha lopp firnar
        {
            System.out.println(arr[icnt]);       // charAt(0,1,2,3,4,5)
        }

    }
    
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter your name : ");
        str = sobj. nextLine();

        Display(str);
        
        sobj.close();
    }
}

// string litral pool