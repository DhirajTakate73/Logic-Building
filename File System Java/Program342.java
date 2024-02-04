// unpacking activity
import java.util.*;
import java.io.*;

class Program342
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

        String words[] = str.split(" ");

        System.out.println("Number of words in the sentence are : "+words.length);
    
    }

}

// where to stop and from where to split the string is called delimitor