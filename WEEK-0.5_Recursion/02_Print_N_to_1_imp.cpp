#include <iostream>

using namespace std;

void print_nTo_one(int n)
{
    if (n==0)
        return ;
    cout<<n<<" ";
    print_nTo_one(n-1);
}

int main() {
    
    print_nTo_one(5);
    return 0;
}