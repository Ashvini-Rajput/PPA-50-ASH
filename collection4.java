
import java.util.*;
class Collection3
{
    public static void main(String Arg[])
    {
        HashTable<String,Integer>hobj = new HashTable<String,Integer>();
        hobj.put("PPA",19500);
        hobj.put("LB",20000);
        hobj.put("PHYTHON",20500);
        hobj.put("PPA",19500);
        System.out.println(hobj.get("PHYTHON"));
    }
}+