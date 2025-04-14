import java.util.*;

class Collections2
{
    public static void main(String A[])
    {
        
        Stack <String> sobj = new Stack<String>();

        sobj.push("C programing ");
        sobj.push("C++  programing ");
        sobj.push("java programing ");
        sobj.push("python programing ");

        System.out.println(sobj);

        String ret  = sobj.pop();

        System.out.println(ret);
        System.out.println(sobj);

    }
}