// user ji sangel tya position chi bit toggle kara
import java.util.*;
class Program280
{
    public static int togglebit(int ino, int ipos)
    {
        int imask = 0x00000001;  // mask
        int iresult = 0;

        imask = imask << (ipos - 1);            // already 1 bit occupied ahe mahnun - 1 kel -1  nahi kel tar position 1 ney pudhe set hoil

        iresult = ino ^ imask;

        return iresult;       // XOR
       
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int ino = 0, ipos = 0;
        int iret = 0;
        
        System.out.println("Enter Number : ");
        ino = sobj.nextInt();

        System.out.println("Enter the position : ");
        ipos = sobj.nextInt();

        iret = togglebit(ino, ipos);
        System.out.println("Updated number is : "+iret);

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
