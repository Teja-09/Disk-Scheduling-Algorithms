#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s, qs,head,i,tseekt = 0, avg = 0;
    int d;
	printf("Enter max range of disc:  ");
	scanf("%d",&s);	
	printf("Enter the size of queue req : ");
	scanf("%d",&qs);
	vector< int > arr(qs);
	printf("Enter the inital head position :");
	scanf("%d",&head);
	printf("Enter the queue values: ");
	for(i=0; i<qs; i++)
	{
    //  cin >> d;
    //  arr.push_back(d);   
		scanf("%d",&arr[i]);
	}
	int diff[qs];
	diff[0] = abs(head-arr[0]);
	printf("move is from %d to %d with seek = %d\n",head,arr[0],diff[0]);
	tseekt = diff[0];
	for(i=1;i<qs;i++)
	{
		diff[i] = abs(arr[i] - arr[i-1]);
	}
	for(i=1;i<qs;i++)
	{
	printf("move is from %d to %d with seek = %d\n",arr[i-1],arr[i],diff[i]);
	tseekt += diff[i];
	}
	printf("total sek time : %d\n",tseekt);
	printf("Avg total sek time : %d\n",tseekt/qs);
}
