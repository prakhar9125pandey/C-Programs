import java.util.Scanner;
class Armstrong
{
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int m=n;
int r,sum=0;
while(n>0)
{
r=n%10;
n=n/10;
sum=sum +n*n*n;
}
if(sum==m)
System.out.println("It is a Armstrong Number");
else
System.out.println("It is not an Armstrong Number");
}
}

