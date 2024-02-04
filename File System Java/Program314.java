import java.util.*;
import java.io.*;

class Program314
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of file : ");
        String FileName = sobj.nextLine();

        try
        {
            FileInputStream fobj = new FileInputStream(FileName);

            int b = fobj.read();                                                    // read method read single byte 

            System.out.println((char)b);                                            // typecasting into character

            fobj.close();
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}
