class Animal
{  
void eat()
{
System.out.println("eating...");
}  
}  
class Dog1 extends Animal
{  
void bark()
{
System.out.println("barking...");
}  
 
public static void main(String args[])
{  
Dog1 d=new Dog1();  
d.bark();  
d.eat();  
}
}  