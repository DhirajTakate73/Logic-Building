import java.util.*;
import java.io.*;

class Program312
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of file : ");
        String FileName = sobj.nextLine();

        try
        {
            System.out.println("Enter the data that you want to write in the file");
            String Data = sobj.nextLine();

            FileOutputStream fobj = new FileOutputStream(FileName);                     // obj of FileoutputStream class to write data into file

            byte arr[] = Data.getBytes();                                               // string gets converted into bytes array

            fobj.write(arr);
            fobj.close();
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}
