// 7th and 15th bit
import java.util.*;
class Program269
{
    public static boolean chkbit(int ino)
    {
        int imask = 260;
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
            System.out.println("3rd And 9th Bits are ON");
        }
        else
        {
            System.out.println("3rd And 9th Bits are OFF");
        }

    }

}
// 2^2 & 2^8 = 260

// to cheak the bits on or off