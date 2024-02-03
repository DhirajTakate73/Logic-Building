import java.util.*;
class Program263
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int ino = 0;
        int idigit = 0;
        int icnt = 0;

        System.out.println("Enter Number : ");
        ino = sobj.nextInt();

        while(ino != 0)
        {
            idigit = ino % 2;
            ino = ino / 2;
            if(idigit == 1)
            {
                icnt++;
                
            }
              
        }
        System.out.println("Number of 1 bit are : "+icnt);
    }
    
}