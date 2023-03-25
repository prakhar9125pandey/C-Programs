import java.util.Scanner;
import java.util.*;
interface Cab
{
void bookCab();
}
class UberX
{
public static void main(String[] args)
{
Cab cab=new Cab()
{
public void bookCab()
{
System.out.println("cab booked!! arriving soon");
}
};
cab.bookCab();
}
}



