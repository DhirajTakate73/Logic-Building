// unpacking activity
import java.util.*;
import java.io.*;

class Program328
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);                                  // object of scanner clss to take input

        {
            System.out.println("Enter the name of file that you want to unpack : ");
            String packedfile = sobj.nextLine();

            File fobj = new File(packedfile);

            FileInputStream fiobj = new FileInputStream(fobj);

            byte Header[] = new byte[100];                          // to read 100 bytes

            fiobj.read(Header,0,100);

            System.out.println(Header);
            
        }
    }

}

// char 2 bytes in java