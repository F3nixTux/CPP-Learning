#include <iostream>

using namespace std;

void namespace_hello_world()
{
    cout << "Hello, World!" << endl;
}

void std_hello_world()
{
    std::cout << "Hello, World!" << endl;
}

int main()
{
    namespace_hello_world();
    std_hello_world();
    return 0;
}