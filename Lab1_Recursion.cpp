
#include <iostream>
using namespace std;


int sumTo(int n)
{
  
    if (n == 0)
    {
        return 0;
    }

   
    return n + sumTo(n - 1);
}

int main()
{
 
    cout << "sumTo(3) = " << sumTo(3) << endl;

   
    cout << "sumTo(5) = " << sumTo(5) << endl;

    return 0;
}
