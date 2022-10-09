int equilibriumPoint(long long a[], int n) {
    
         long long sumLower=0;
         long long sumUpper;
         long long totalSum=0;
         
         if(n==1)
            return 1;
        
        for(int i=0;i<n;i++){
            totalSum+=a[i];
        }
        
        sumUpper=totalSum-sumLower;
        
        for(int i=0;i<n-1;i++){
            
            if(sumLower==sumUpper){
               return i+1;
           }
           
           sumLower+=a[i];
           sumUpper=totalSum-sumLower-a[i+1];
        }
        return -1;
    }
