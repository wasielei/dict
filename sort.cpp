#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b,c,d,e,n=10,temp;
int arr[]={216,183,185,486,134,856,185,486,798,146};

for(a=0;a<(n-1);n++){
    for(b=0;b<(n-1-a);b++){
        if(arr[b]>arr[b+1]){
            temp=arr[b];
            arr[b]= arr[b+1];
            arr[b+1]= temp;
        }
    }
}
for(a=0;a<n;a++){
    cout<<arr[a]<<"\t";
}
cout<<"\n";


}