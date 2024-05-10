class command
{
    public static void main(String Arg[])
    {
        System.out.println("number of command line Argument :"+Arg.length);
        int i = 0;
        for(i = 0;i<Arg.length;i++);
        {
            System.out.println(Arg[i]);
        }
    }
}