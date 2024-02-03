// 7th and 15th bit
import java.util.*;
class Program268
{
    public static boolean chkbit(int ino)
    {
        int imask = 16448;
        int iresult = 0;

        iresult = ino & imask;

        if(iresult == imask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int ino = 0;
        boolean bret = false;
        
        System.out.println("Enter Number : ");
        ino = sobj.nextInt();

        bret = chkbit(ino);

        if(bret == true)
        {
            System.out.println("7th And 15th Bits are ON");
        }
        else
        {
            System.out.println("7th And 15th Bits are OFF");
        }

    }

}
// 2^6 & 2^14

// to cheak the bits on or off