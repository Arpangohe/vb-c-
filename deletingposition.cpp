#include<iostream>
using namespace std;

int main(){
	int n=8;
	int arr[8]={1,2,3,4,5,6,7,8};
	int position=3;
	
	for(int i=position;i<n;i++){
		if(i<n-1)
			arr[i]=arr[i+1];
		else
			arr[i]=0;
	}
	for(int i=0;i<8;i++)
	{
		cout<<arr[i]<<" ";
	}
}
