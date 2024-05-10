class OOP
{
    public static void main(String Arg[])
    {
        Arithematic obj1 = new Arithematic();
        Arithematic obj2 = new Arithematic(21,11);

        int Ret = 0;
        Ret = obj2.Addition();     //31
        System .out .println(Ret);

        Ret = obj2.Subtraction();
        System.out. println(Ret);   //10
      } 
 }
    class Arithematic
    { 
        
        public int No1;
        public int No2;

        public Arithematic ()
        {
            System.out.println("inside default constructor");
            this.No1 = 0;
            this.No2 = 0;
        }
        public Arithematic (int A,int B)
        {
            System.out.println("inside paramertrised constructor");
            this.No1 = A;
            this.No2 = B;
        }
        public int Addition ()
            { 
                int Ans = 0;
                Ans = No1+No2;
                return Ans;
            }
        public int Subtraction ()
            { 
                int Ans = 0;
                Ans = No1-No2;
                return Ans;
            }
        
        
    }
