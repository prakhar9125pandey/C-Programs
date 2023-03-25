import java.util.Scanner;
class LogicalOperator
{
public static void main(String[] args)
{
int x=10;
int y=5;
int z=20;
boolean a=true;
boolean b=false;
if(x<y & x<z)
{
System.out.println(true);
}
else
{
System.out.println(false);
}
if(x<y && x<z)
{
System.out.println(true);
}
else 
{
System.out.println(false);
}
System.out.println(a&&b);
System.out.println(a||b);
System.out.println(!(a&&b));
}
}

