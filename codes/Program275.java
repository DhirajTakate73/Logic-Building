// 4th bit close kara

import java.util.*;
class Program275
{
    public static int offbit(int ino)
    {
        int imask = 0x0000008;  // Hexadecimal of 4th bit
        int iresult = 0;
        
        iresult = ino & imask;       // to check whether bit is on or off

        if(iresult == imask)        // 4th bit is on 
        {
            return (imask ^ ino);   // if it is on then off it
        }
        else                        // 4th bit is off
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

