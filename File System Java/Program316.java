import java.util.*;                                         // for scanner class
import java.io.*;                                           // for all file handling functions

class Program316
{
    public static void main(String arg[]) throws Exception                              // main method prototype
    {
        Scanner sobj = new Scanner(System.in);                                          // object creation of scanner class (to take input) from keyboard

        System.out.println("Enter the name of source file which is existing : ");
        String SourceFile = sobj.nextLine();

        System.out.println("Enter the name of destination file that you want to create : ");
        String DestFile = sobj.nextLine();

        File fobj = new File(SourceFile);                // object creation of File class (to create new file)
        if(! fobj.exists())                             // to check whether file is present or not
        {
            System.out.println("Source file is not existing...");
            return;
        }

        File fobj1 = new File(DestFile);
        fobj1.createNewFile();                        // to craete new file

        FileInputStream fiobj = new FileInputStream(SourceFile);                  // to read
        FileOutputStream foobj = new FileOutputStream(DestFile);                  // to write

        byte Buffer[] = new byte[1024];                                         // to read 1024 bytes at a time from source file and write the same into destfile also these 2 functions works on byte array 
        int iRet = 0;

        while((iRet = fiobj.read(Buffer)) != -1)                               
        {
            foobj.write(Buffer,0,iRet);                                     // system call      write (array, start, length)  Buffer jevdha read karel tevdha write karel destfile madhye 
        } 

        System.out.println("Data Gets successfully writtened into the Destination file...");

        fiobj.close();
        foobj.close();
    }
}

// transfer one file data into another file
