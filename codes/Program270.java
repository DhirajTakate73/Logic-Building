import java.util.*;
class Program270
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int ino = 0;
        int imask = 0x00000004;     // 4 (3rd bit)
        int iresult = 0;

        
        System.out.println("Enter Number : ");
        ino = sobj.nextInt();

        iresult = ino & imask;

        if(iresult == imask)
        {
            System.out.println("3rd bit is ON");
        }
        else
        {
            System.out.println("3rd bit is OFF");
        }

    }

}

// copy of 264