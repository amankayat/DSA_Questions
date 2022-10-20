

import java.util.*;
import java.io.*;

class HelpClassmates
{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            int n = sc.nextInt();
            int array[] = new int[n];
            for (int i = 0; i < n; ++i)
            {
                array[i] = sc.nextInt();
            }

            Solution4 ob = new Solution4();

            int ans[] = ob.help_classmate(array,n);

            for (int i=0; i<n; i++)
                System.out.print(ans[i]+" ");
            System.out.println();
            t--;
        }
    }
}


// } Driver Code Ends


//User function Template for Java

class Solution4 {
    public static int[] help_classmate(int arr[], int n)
    {
        // Your code goes here
        ArrayList<Integer> ar = new ArrayList<>();
        Stack<Integer> st = new Stack<>() ;
        for(int i = n-1 ; i >= 0 ; i--){
            while(!st.isEmpty() && st.peek() >= arr[i]){
                st.pop();
            }
            if(st.isEmpty()){
                ar.add(-1) ;
            }
            else{
                ar.add(st.peek()) ;
            }
            st.add(arr[i]) ;
        }

        int nar[] = new int[n] ;
        int j = n-1 ;
        for(int i = 0 ; i < n ; i++){
            nar[i] = ar.get(j--) ;
        }
        return nar ;
    }
}
