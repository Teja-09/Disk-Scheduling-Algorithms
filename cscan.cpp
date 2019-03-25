#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, size,i,min=0,max=0,head,val=1000,sum = 0;
    printf("Enter tasks : ");
    scanf("%d",&t);
    printf("Enter size : ");
    scanf("%d",&size);
    vector < int > a(size);
    printf("Enter elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter  head : ");
    scanf("%d",&head);
    sort(a.begin(),a.end());
    cout << "The sequence is : \n";
    if(head - 0 > t - head - 1)
    {
        int start = head;
        int max = head;
        for(i=0;i<size;i++)
        {
            if(a[i] > max)
            {
                max = a[i];
                break;
            }
        }
        sum = (head - 0) + (t - 1 - max) + (199-0);
        printf("Sum = %d",sum);
    }
    else
    {   
        int start = head;
       int max = head;
       int index = 0;
        for(i=0;i<size;i++)
        {
            if(a[i] > max)
            {
                max = a[i];
                index = i;
                break;
            }
        }
        min = a[index-1];
        cout << start << "-->" << a[index] << "-->" ;
        for(i=index;i<size-1;i++)
        {
            cout << a[i] << "-- >" << a[i+1] << "-->";
        }
        cout << a[size-1] << "-->" << t-1 << "-->";
        cout <<  t-1 << "--> 0 -->";
        for(i=0;i<index-1;i++)
        {
            cout << a[i] << "-->" << a[i+1] << "-->";
        }
        cout << "\n";
        sum = (t - 1 - head) + 199 + (min - 0);
        printf("Sum = %d",sum);
        cout << "\n";
    }

}
