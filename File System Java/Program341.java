// unpacking activity
import java.util.*;
import java.io.*;

class Program341
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");

        String str = sobj.nextLine();

        str = str.trim();

        System.out.println("After trim : "+str);

        str = str.replaceAll("\\s+", " ");

        System.out.println("After repalceall : "+str);
        

        
    }

}
//    \\s+ : replace multiple white spaces with 1