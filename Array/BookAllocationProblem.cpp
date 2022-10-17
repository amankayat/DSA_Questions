// Given an array 'arr' of integer number. Where 'arr[i]' represets the number of pages in the 'ith' book. There are 'm' number of students and the task is to allocate all the books to their student. Allocate books in such a way that:
// 1. Each Student gets at least one book.
// 2. Each book should be allocate to a student 
// 3. Book allocation should be in a contiguous manner.

// You have to allocate the book to 'm' students such that the maximum number of pages assigned to a student is minimum. 


#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){

    int studentCount = 1;
    int pageSum =0 ;

    for(int i=0; i<n;i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int allocateBook(int arr[], int n, int m){
    int start=0;
    int sum=0;

    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    int end =sum;
    int ans =-1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int main(){
    // int arr[4]={10,20,30,40};
    // cout << " Maximum no of pages assigned : "<<allocateBook(arr, 4, 2)<<endl; 

    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of an array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int m;
    cout<<"Number of student you want to allocate book : ";
    cin>>m;

    cout << " Maximum no of pages assigned : "<<allocateBook(arr, n, m)<<endl;

    return 0;
}



