import Marvellous.Arithematic;     //  to create object of Scanner class 
import java.util.*;

class Program243
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ino1 = 0, ino2 = 0;
        int ians = 0;

        System.out.println("Enter first number : ");
        ino1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        ino2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(ino1, ino2);


        ians = aobj.Addition();
        System.out.println("Addition is : "+ians);

    }
    
}

// 1 : javac -d . Arithematic.java
// 2 : javac Program243.java
// 3 : java Program243