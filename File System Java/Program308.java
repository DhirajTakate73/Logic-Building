import java.util.*;
import java.io.*;

class Program308
{
    public static void main(String arg[])throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        {
            System.out.println("Enter the name of file : ");
            String filename = sobj.nextLine();
            try
            {
                    
                File fobj = new File(filename);

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

            catch(IOException obj)      // Specific Exception 
            {
                System.out.println("exception occured...");
            }
            catch(Exception obj)        // Generic Exception(Extra safe) it can handle any Exception
            {
                System.out.println("exception occured...");
            }

        }

        
    }
}

