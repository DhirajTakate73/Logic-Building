// bit chalu asel tar band kara band asel tar chalu kara(toggle)

// 15th bit toggle kara

import java.util.*;
class Program279
{
    public static int togglebit(int ino)
    {
        int imask = 0x00004000;                 // Hexadecimal of 15th bit
        int iresult = 0;
        
        iresult = ino ^ imask;

        return iresult;       // XOR
       
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int ino = 0;
        int iret = 0;
        
        System.out.println("Enter Number : ");
        ino = sobj.nextInt();

        iret = togglebit(ino);
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

