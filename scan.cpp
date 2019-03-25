#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tracks,size,i,head,min=0, max=0,sum=0;
    printf("Enter no.of tracks : ");
    scanf("%d",&tracks);
    printf("Enter no.of locations : ");
    scanf("%d",&size);
    vector< int > a(size);
    printf("enter queue elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter head : ");
    scanf("%d",&head);
    min = a[0];
    for(i=0;i<size;i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }
    max = a[0];
     for(i=0;i<size;i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    if(head - 0 < tracks - head - 1)
    {
        sum = (head - 0) + (max - 0);
    }
    else
    {
        sum = (tracks - head - 1) + (tracks - min - 1);
    }
    printf("%d\n",sum);


}