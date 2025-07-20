#include <iostream>

using namespace std;

int print_oneTo_n(int n)
{
    if (n==0)
        return 0;
    print_oneTo_n(n-1);
    cout<<n<<" ";
}

int main() {
    
    print_oneTo_n(5);
    return 0;
}