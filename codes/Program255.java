import java.util.*;     // for scanner class to accept input

class Program255
{
    
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter your name : ");
        str = sobj. nextLine();

        System.out.println("your name is : "+str);

        System.out.println("Length of your name is : "+str.length());
        
        sobj.close();
    }
}

// string litral pool