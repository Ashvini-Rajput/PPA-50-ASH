import marvellous.arithematic;
import infosystems.mathematic;

class ppa
{
    public static void main(String Arg[])
    {
        arithematic aobj = new arithematic();
        arithematic mobj = new mathematic();

        System.out.pritln(aobj.addition(11,10));
        System.out.pritln(aobj.substraction(11,10));

        System.out.pritln(mobj.multiplication(11,10));
        System.out.pritln(mobj.divition(110,10));
    }
}