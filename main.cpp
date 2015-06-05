#include "scoped.h"
#include "a.h" // if #include "a.h" goes before #include "scoped.h" then destructor is invoked

int main() 
{
  A *pA = createA();
  scopedptr holder(pA);
  return 0;
}
