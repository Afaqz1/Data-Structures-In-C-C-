#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Node{
    int coeff;
    int exp;
    struct Node *next;
}*poly=NULL;

void create()
{
    struct Node *t, *last;
    int num, i;
    printf("Enter number of terms");
    scanf("%d", &num);
    t->next=NULL;
    if(poly==NULL)
    {
        poly=last=t;
    }
    else{
        last->next=t;
        last=t;

    }
}
void Display(struct Node *p)
{
    while(p)
    {
        printf("%dx%d+", p->coeff, p->exp);
        p=p->next;
    }
    printf("\n");
}
long Eval(struct Node *p, int x)
{
    long val;

    while(p)
    {
        val+=p->coeff*pow(x,p->exp);
        p=p->next;
    }
}

int main()
{
    return 0;
}