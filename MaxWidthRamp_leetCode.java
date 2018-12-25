class Solution {
    public int maxWidthRamp(int[] A) {
        int n = A.length;
        int ans = 0;
        int minx = 0;
        // int left =0;
        // int right =1 ;
        int left[] = new int [n];
        int right[] = new int [n];
        left[0] = A[0];
        for(int i=1;i<n;i++){
            left[i] = Math.min(A[i],left[i-1]);
        }
        right[n-1] = A[n-1];
        for(int i=n-2;i>=0;i--) {
            right[i] = Math.max(A[i],right[i+1]);
        }
        int i=0;int j=0;
        while(i<n && j<n) {
            if(left[i] <= right[j]){
                ans = Math.max(ans,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
}