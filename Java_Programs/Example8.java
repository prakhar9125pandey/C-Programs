class Example8
{
public static void main(String[] arg)
{
for(int i=1;i<=4;i++)
{
for(int j=0;j<4-i;j++)
{
System.out.print(" ");
}
for(int j=1;j<=i;j++)
{
System.out.print((char)(i+64));
}
System.out.println();
}

}
}