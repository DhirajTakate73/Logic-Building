// user ji sangel tya position chi bit cheak kara chalu band 
// dynamic mask creation
import java.util.*;
class Program282
{
    public static boolean chkbit(int ino, int ipos)
    {
        int imask = 0x00000001;  
        int iresult = 0;
        imask = imask << (ipos - 1);// already 1 bit occupied ahe mahnun - 1 kel

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
        int ino = 0, ipos = 0;
        boolean bret = false;
        
        System.out.println("Enter Number : ");
        ino = sobj.nextInt();

        System.out.println("Enter the position : ");
        ipos = sobj.nextInt();

        bret = chkbit(ino, ipos);
        if(bret == true)
        {
            System.out.println("Bit is ON at given position");
        }
        else
        {
            System.out.println("Bit is OFF at given position");           
        }
    }

}


/*

    No  = 889

    Input :      1   1   0   1   1   1   1   0   0   1   
    Mask         0   0   0   0   0   0   1   0   0   0      ^
    ------------------------------------------------------------
    Result       1   1   0   1   1   1   0   0   0   1




    No = 98

    Input :     1   1   0   0   0   1   0 
    Mask        0   0   0   1   0   0   0                   ^
    ------------------------------------------------------------
    Result      1   1   0   1   0   1   0



iMask : 0000    0000    0000    0000    0000    0000    0000    0001

iPos : 6

iMask = iMask << (iPos-1);
iMask = iMask << 5;


iMask : 0000    0000    0000    0000    0000    0000    0000    0001

iMask : 0000    0000    0000    0000    0000    0000    0010    0000
*/
