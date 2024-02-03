import java.util.*;
class Program262
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int ino = 0;
        int idigit = 0;

        System.out.println("Enter Number : ");
        ino = sobj.nextInt();

        while(ino != 0)
        {
            idigit = ino % 2;
            ino = ino / 2;
            System.out.print(idigit);
        }
        System.out.println();
    }
}