import java.util.*;                 // for scanner class
import java.io.*;                   // file handling sathi all yath ahe

class Program307
{
    public static void main(String arg[])throws Exception           // to handle checked exceptions
    {
        Scanner sobj = new Scanner(System.in);
        {
            System.out.println("Enter the name of file : ");
            String filename = sobj.nextLine();

            File fobj = new File(filename);         // object created for file class to create file

            boolean bret = false;

            bret = fobj.createNewFile();

            if(bret == true)
            {
                System.out.println("File gets created successfully...");
            }
            else
            {
                System.out.println("unable to create file...");
            }
        }

        
    }
}

