import java.util.*;
class Program271
{
    public static boolean chkbit(int ino)
    {
        int imask = 0x00000100; // 9th bit
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
            System.out.println("9th Bit is ON");
        }
        else
        {
            System.out.println("9th Bit is OFF");
        }

    }

}
// copy of 266
// to cheak the bits on or off