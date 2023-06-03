#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int k){
	int s=0,e=n-1,ans=-1;
	int m=s+(e-s)/2;
	while(s<=e){
		if(arr[m]==k){
			ans=m;
			e=m-1;
		}
		else if(k>arr[m]){
			s=m+1;
		}
		else if(k<arr[m]){
			e=m-1;
		}
		int m=s+(e-s)/2;
	}
	return ans;
}

int lastocc(int arr[],int n,int k){
	int s=0,e=n-1,ans=-1;
	int m=s+(e-s)/2;
	while(s<=e){
		if(arr[m]==k){
			ans=m;
			s=m+1;
		}
		else if(k>arr[m]){
			s=m+1;
		}
		else if(k<arr[m]){
			e=m-1;
		}
		int m=s+(e-s)/2;
	}
	return ans;
}
int main(){
	int arr[5]={1,2,3,3,5};
	cout<<"First occuresnce of 3 is at index"<<firstocc(arr,5,3);
	cout<<"Last occuresnce of 3 is at index"<<lastocc(arr,5,3);
	return 0;
}





