import java.util.*;     // for scanner class to accept input

class Program256
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter your name : ");
        str = sobj.nextLine();

        int icnt = 0;

        for(icnt = 0; icnt < str.length(); icnt++)        // string chi jitki length ahe titkya vela loop firnar
        {
            System.out.println(str.charAt(icnt));       // charAt(0,1,2,3,4,5)
        }
        sobj.close();
    }
    
}

// string litral pool
// in java there is '\0' at the end of the string