import java.util.*;
class Vararg
{
static void show(int....n)
{
System.out.println("Number of arguements:"+a.length);
for(int i:a)
System.out.print(i+" ");
}
public static void main(String []args)
{
show();
show(10);
show(10,20,30);
show(new int[]{20,30,40});
}
}