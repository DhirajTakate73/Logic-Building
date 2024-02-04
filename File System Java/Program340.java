// unpacking activity
import java.util.*;
import java.io.*;

class Program340
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");

        String str = sobj.nextLine();

        str = str.trim();

        System.out.println("After trim : "+str);

        str = str.replaceAll("\\s", "");    // s   : spaces multiple    it is called regular expression  remove all white spaces

        System.out.println("After repalceall : "+str);
        

        
    }

}