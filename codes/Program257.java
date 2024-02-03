import java.util.*;     // for scanner class to accept input

class Program257
{
    public static void Display(String str)
    {
        int icnt = 0;

        for(icnt = 0; icnt < str.length(); icnt++)
        {
            System.out.println(str.charAt(icnt));       // charAt(0,1,2,3,4,5)
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