// 7th and 15th bit
import java.util.*;
class Program274
{
    public static boolean chkbit(int ino)
    {
        int imask = 0x00000a00;  // 10th and 12th bit
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
            System.out.println("10th And 12th Bit are ON");
        }
        else
        {
            System.out.println("10th And 12th Bit are OFF");
        }

    }

}

// to cheak the bits on or off

/*

    Bit position 10 and 12

    0000    0000    0000    0000    0000    1010    0000    0000
    0       0       0       0       0       a       0       0

    0x00000a00
    
*/