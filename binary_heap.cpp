#include<stdio.h>
#include<stdlib.h>

void Insert(int A[], int n)
{
    int i=n, temp;
    temp=A[i];
    while(i>1 && temp>A[i/2])
    {
        A[i]=A[i/2];
        i=i/2;
    }
    A[i] = temp;
}

int Delete(int A[], int n)
{
    int i,j,x, temp, val;
    x = A[n];
    A[1]=A[n];
    i=1;j=i*2;

    while(j<n-1)
    {
        if(A[j+1]>A[j])
            j=j+1;
        if(A[i]<A[j])
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i=j;
            j=2*j;
        }
        else
            break;
    }
    return val;
}

int main()
{
    int H[]= {0,20,50,70,40,60};
    int i;
    
    for(i=2;i<=7;i++)
        Insert(H,2);

    printf("Deleted value is %\n", Delete(H,7));
    for(i=1;i<=7; i++)
        printf("%d", H[i]);
    printf("\n");
    return 0;
}