long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long max_sum = 0;
        long long c_sum = 0;
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                c_sum = (c_sum + arr[i]) >0 ? c_sum+arr[i] : 0;
                cnt++;
            }
            else
            {
                c_sum += arr[i];
            }
            max_sum = max_sum < c_sum ? c_sum : max_sum;
        }
        int ret = INT_MIN;
        if(cnt < n)
        {
            return max_sum;
        }
        else
        {
           
            for(int i=0;i<n;i++)
            {
                if(ret < arr[i] )
                {
                    ret= arr[i];
                }
            }
        }
        return ret;
    }
