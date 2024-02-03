import java.util.*;
class Program264
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int ino = 0;
        int imask = 4;
        int iresult = 0;

        
        System.out.println("Enter Number : ");
        ino = sobj.nextInt();

        iresult = ino & imask;                          // & operation karaycha ahe aani yenara result madhye store karaycha 

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

// to cheak the bits on or off