
class Solution {
    private:
   int helper(int arr[], int n, int k,int s,int e)
    {
        int mid=s+(e-s)/2;
        //Base Case:
        if(s>e)
        {
            return -1;
        }
        if(arr[mid]==k)
        return mid;
        
        if(arr[mid] < k)
           return helper(arr,n,k,mid+1,e);
        else
           return helper(arr,n,k,s,mid-1);
           
          
    }
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
       int ans= helper(arr,n,k,0,n-1);
    }
};
