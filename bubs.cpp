#include<iostream>
using namespace std;

void bubblesort(int *a, int n)
{
bool sorted=false;
while(!sorted)
{sorted=true;
for(int i=0; i<n-1; i++)
{
if(a[i]>a[i+1])
{
int tmp=a[i];
a[i]=a[i+1];
a[i+1]=tmp;
sorted=false;
}
}
}
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
{
cin>>a[i];
}
bubblesort(a, n);
for(int j=0; j<n; j++)
{
cout<<a[j];
}
return 0;
}
