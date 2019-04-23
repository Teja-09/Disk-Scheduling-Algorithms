#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,i,head,j,diff=4000,sum=0,index=0;
    printf("Enter the size of the queue : ");
    scanf("%d",&s);
    vector< int > a(s);
    int flag[8] = {0,0,0,0,0,0,0,0};
    printf("Enter the queue elements : ");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the initial head position : ");
    scanf("%d",&head);
    for(i=0;i<s;i++)
    {
        diff = 4000;
        for(j=0;j<s;j++)
        {
            if(abs(head - a[j]) < diff && flag[j] == 0)
            {
                diff = abs(head - a[j]);
                index = j;
            }
        }
        sum = sum + abs(head - a[index]);
        head = a[index];
        flag[index] = 1;
    }
    printf("sum = %d\n",sum); 
}