import java .net.*;
import java .io.*;
class Clint
{
    public static void main(String Arg[])throws Exception
    {
        System.out.println("client application is running");

        Socket sobj = new Socket("localhost",2100);
        System.out.println("client gets succesfully connected");

        PrintStream  ps = new PrintStream(sobj.getOutputStream());
        BufferedReader brl = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
        String str1,str2;
        System.out.println("marvellous message started");
        while(!(str1 = br2.readLine()).equals("end"));
        {
            ps.println(str1);
            str2 = br1.readLine();
            System.out.println("enter message for server");
            System.out.println("sever says :"+str2);
        }
        System.out.println("thank you for using marvellous message");

    }
}

