import java.util.Scanner;
class Test1
{
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
int age=sc.nextInt();
if(age>=0 && age<=30)
{
System.out.println("young");
}
else
{
System.out.println("Old");
}
}
}

