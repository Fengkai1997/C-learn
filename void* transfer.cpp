#include <iostream>
using namespace std;
void
fun (void *para)
{
  int *pointer_to_int = (int *)para; //(int*）加括号！！
  cout << (*pointer_to_int);
}

int
main ()
{
  int x = 42;
  int *p = &x;
  fun (p);
  return 0;
}
