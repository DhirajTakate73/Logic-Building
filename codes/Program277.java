// 18th bit close kara

import java.util.*;
class Program277
{
    public static int offbit(int ino)
    {
        int imask = 0x00020000;         // Hexadecimal of 18th bit
        int iresult = 0;
       
        iresult = ino & imask;

        if(iresult == imask)        // 18th bit is on
        {
            return (imask ^ ino);       // ^(XOR)
        }
        else                        // 18th bit is off
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

