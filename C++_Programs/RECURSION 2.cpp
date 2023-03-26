#include <iostream>
using namespace std;
int fun(int x, int y)
{
if(x==0)
return y;
 return fun(x-1,x+y);
}

