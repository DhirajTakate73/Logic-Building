// input : 5
/*
    output : 1 * 2 * 3 * 4 * 5 *
*/

import java.util.*;
class Program248
{
    public static void display(int ino)
    {
        int icnt = 0;

        for(icnt = 1; icnt <= ino; icnt++)
        {
            System.out.print(icnt+"\t"+"*\t");
        }
        System.out.println();
            
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ivalue = 0;

        System.out.println("Enter the number : ");
        ivalue = sobj.nextInt();

        display(ivalue);

        sobj.close();
    }
}