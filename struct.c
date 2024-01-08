
#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle r)
{
    r.length = 20;
    printf("length %d \nBreadth %d\n", r.length, r.breadth);
    
    //p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
}
int main()
{
    struct Rectangle r
    {
        10, 5
    };
    fun(r);
    printf("length %d \nBreadth %d\n", r.length, r.breadth);
    return 0;
}
