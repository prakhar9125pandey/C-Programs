14
import java.util.Scanner;
class Welcome
{
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
System.out.println("Welcome to java");
System.out.println("Enter your roll=");
int a=sc.nextInt();

System.out.println("Enter Your Registration Number=");
int reg=sc.nextInt();
sc.nextLine();
System.out.println("Enter Your Name=");
String name=sc.nextLine();

System.out.println("The roll no.is=" +a);
System.out.println("The Registration Number is="+ reg);
System.out.println("The Name is="+ name);
}
}

