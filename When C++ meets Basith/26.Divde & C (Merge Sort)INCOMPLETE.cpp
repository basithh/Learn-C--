
#include <bits/stdc++.h>
using namespace std;
int mergesort(int &arr, int s,int e){
	if(s>=e){
		return;
	}
	int mid = (s+e)/2;
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	int i = 0;
	int j = 0;
	int mid1 = (s+e)/2;
	while(i<mid1 || mid1<){

	}

}
int main()
{
	int arr1[] = {4,9,2,1,3,7,5};
	int n = sizeof(arr1) / sizeof(arr1[0]);
	mergesort(arr1,0,n);
	return 0;
}
