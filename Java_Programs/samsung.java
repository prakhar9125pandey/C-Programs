import java.util.Scanner;
abstract class Mobile
{
Mobile()
{
System.out.println("Mobile is created");
}
abstract void run();
void declaration()
{
System.out.println("mobile is good");
}

Class samsung extends Mobile
{
void run()
{
System.out.println("Xoimi is very good");
}
}
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
Mobile obj=new Mobile();
obj.run();
obj.declaration();
}
}



