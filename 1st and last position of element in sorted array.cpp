#include<bits/stdc++.h>
using namespace std;


int firstOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid])
		 {
            s = mid + 1;
        }
        else if(key < arr[mid]) 
		{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
           s=mid+1;
        }
        else if(key > arr[mid])
		 {
            s = mid + 1;
        }
        else if(key < arr[mid]) 
		{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
int main()
{
	int arr[5]={0,1,1,1,2};
	
	cout<<"first index is "<<firstOcc(arr,5,1)<<endl;
	cout<<"last index is "<<lastOcc(arr,5,1);
}


