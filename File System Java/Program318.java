import java.util.*;
import java.io.*;

class Program318
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of Directory : ");
        String DirectoryName = sobj.nextLine();

        boolean bret = false;
        File fobj = new File(DirectoryName);                                // everything is treated as file so craeted its object

        bret = fobj.isDirectory();
        if(bret == true)
        {
            System.out.println("Directory is present");

            File Arr[] = fobj.listFiles();     // File class chya object cha array                         // directory madhlya saglya file chi list aanun dete listFiles()
            System.out.println("Number of files in the directory are : "+Arr.length);

        }
        else 
        {
            System.out.println("There is no such directory");
        }
    }
}
