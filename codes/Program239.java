import java.io.*;     //  to create object of Buffered reader class 

class Program239
{
    public static void main(String arg[])throws Exception
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        int ino1 = 0, ino2 = 0;
        int ians = 0;
        try
        {
            System.out.println("Enter first number : ");
            ino1 = Integer.parseInt(bobj.readLine());

            System.out.println("Enter second number : ");
            ino2 = Integer.parseInt(bobj.readLine());

            ians = ino1 + ino2;
            System.out.println("Addition is : "+ians);

            bobj.close();
        }
        catch(Exception eobj)
        {
             System.out.println("Exception occured");
        }

        

    }
    

}