// 7th and 15th bit
import java.util.*;
class Program273
{
    public static boolean chkbit(int ino)
    {
        int imask = 0x00004040;             // 7th And 15th Bit
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
            System.out.println("7th And 15th Bit are ON");
        }
        else
        {
            System.out.println("7th And 15th Bit are OFF");
        }

    }

}
// 2^6 & 2^14
// copy of 268
// to cheak the bits on or off

/*
Bit position 7 and 15

    0000    0000    0000    0000    0100    0000    0100    0000
    0       0       0       0       4       0       4       0

    0x00004040

*/    