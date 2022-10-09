   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
         int l=0;
       int h=n-1;
       int mid=0;
         while(l<h)
         {
             mid=(l+h)/2;
             
             if(arr[mid]<arr[mid+1])l=mid+1;
             else h=mid;
         }
         return l;
        
     
     
    }
};
