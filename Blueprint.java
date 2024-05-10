// interface Circle
// {
//     public float radius = 10.5f;
//     public float pi = 3.14f;

//     public float Area();
//     public float Cicumfarance();
// }
//    class Marvellous implements Circle
//    {
//      public float Area ()
//      {
//         return pi * radius * radius;
//      }
//       public float Circumfarance()
//      {
//         return 2*pi*radius;
//      }
//    }
// class blueprint
// {
//     public static void main (String Arg[])
//     {
//           Marvellous mobj = new Marvellous();

//           System.out.println("Area is:"+mobj.Area());
//           System.out.println("Circumfarance is :"+mobj.Circumfarance());

//           System.out.println("Value of radiusis :"+Circle.radius);
//           System.out.println("value of pi is :"+Circle.pi);

//           //Circle = 7.12;

//     }
// }
interface Circle
{
    float Radius = 10.5f;
    float PI = 3.14f;

    float Area();
    float Circumfarance();    
}

class Marvellous implements Circle
{
    public float Area()
    {
        return PI * Radius * Radius; 
    }
    public float Circumfarance()
    {
        return 2 * PI * Radius;
    }
}

class Blueprint
{
    public static void main(String Arg[])
    {
        Marvellous mobj = new Marvellous();

        System.out.println("Area is : "+mobj.Area());
        System.out.println("Circumfarance is : "+mobj.Circumfarance());

        System.out.println("Value of Radius is : "+Circle.Radius);
        System.out.println("Value of PI is : "+Circle.PI);

        //Circle.PI = 7.12;
    }
}