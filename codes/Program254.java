import java.util.*;     // for scanner class to accept input

class Program254
{
    
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter your name : ");
        str = sobj. nextLine();                                     // to accept string

        System.out.println("your name is : "+str);

        sobj.close();
    }
}

// string litral pool