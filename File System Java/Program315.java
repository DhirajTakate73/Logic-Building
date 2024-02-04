import java.util.*;
import java.io.*;

class Program315
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of file : ");
        String FileName = sobj.nextLine();

        try
        {
            FileInputStream fobj = new FileInputStream(FileName);
            byte Arr[] = new byte[100];                                     // if we paas array to read method it will read whole array (we read 100 bytes)

            fobj.read(Arr);
            String str = new String(Arr);                                  //  converted byte array into string

            System.out.println(str);

            fobj.close();
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}
