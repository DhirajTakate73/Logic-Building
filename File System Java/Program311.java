import java.util.*;
import java.io.*;                           // no need to import FileWriter package  beacause it is already present in this package

class Program311
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

            FileWriter fwobj = new FileWriter(FileName);            // to write data into file we have to create obj of Filewriter class 
            fwobj.write(Data);                                      // write method
            System.out.println("Entered data gets successfully writtened into the file...");
            fwobj.close();

        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}
