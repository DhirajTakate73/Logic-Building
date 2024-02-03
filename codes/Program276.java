// 11 bit close kara

import java.util.*;
class Program276
{
    public static int offbit(int ino)
    {
        int imask = 0x00000400;  // Hexadecimal of 11th bit
        int iresult = 0;
        
        iresult = ino & imask;      

        if(iresult == imask)        // 11th bit is on
        {
            return (imask ^ ino);    // close 11thbit
        }
        else                        // 11th bit is off
        {
            return ino;
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int ino = 0;
        int iret = 0;
        
        System.out.println("Enter Number : ");
        ino = sobj.nextInt();

        iret = offbit(ino);
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

*/

