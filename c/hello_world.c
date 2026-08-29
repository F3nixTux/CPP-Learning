#include <stdio.h>

void namespace_hello_world()
{
    printf("Hello, World!\n");
}

void std_hello_world()
{
    printf("Hello, World!\n");
}

int main()
{
    namespace_hello_world();
    std_hello_world();
    return 0;
}
