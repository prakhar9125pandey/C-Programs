import java.util.Scanner;
class phone
{
interface Money
{
void operation();
}
class credit implements Money
{
public void operation()
{
System.out.println("Money is credited");
}
}
class Debit implements Money
{
public void operation()
{
System.out.println("Debt meoney refunded");
public static void main(String args[])
{
Debit d=new Debit();
d.operation();
}
}
}

