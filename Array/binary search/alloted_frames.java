
import java.io.*;
import java.util.*;
class alloted_frames {
    public static void main (String[] args) {
        Scanner sc=new Scanner(System.in);

        int t=sc.nextInt();

        while(t-->0)
        {
            int n=sc.nextInt();
            int a[]=new int[n];

            for(int i=0;i<n;i++)
            {
                a[i]=sc.nextInt();
            }
            int m=sc.nextInt();
            Solution2 ob = new Solution2();
            System.out.println(ob.findPages(a,n,m));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution2
{
    //Function to find minimum number of pages.
    public static int findPages(int[]A,int N,int M)
    {
        //Your code here
        int sum = 0 ;
        for(int i = 0 ; i < N ; i++){
            sum = sum + A[i] ;
        }
        int maxValue ;
        maxValue = sum;
        if(N < M){
            return -1 ;
        }
        int st = 1 ;
        boolean pos = false ;
        int mid , currSum = 0 , ansCount = 0 , ans = -1 ;
        while(st <= maxValue){
            mid = (maxValue-st)/2 + st ;
            pos = false ;
            ansCount = 1 ;
            currSum = 0 ;
            for(int i = 0 ; i < N ; i++){
                currSum = currSum + A[i] ;
                if(currSum > mid){
                    ansCount++ ;
                    currSum = A[i] ;
                    if(A[i] > mid){
                        pos = true ;
                        break ;
                    }
                }
            }

            if(pos){
                st = mid +1 ;
                continue ;
            }


            //   System.out.println(st + " " +mid+ " " + maxValue + " " + ansCount) ;

            if(ansCount == M){
                maxValue = mid-1 ;
                ans = mid ;
            }
            else if(ansCount > M){
                st = mid + 1;


            }
            else{
                ans = mid ;
                maxValue = mid -1 ;
            }

        }

        return ans ;
    }
}