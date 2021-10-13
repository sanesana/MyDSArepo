class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
     
        int i = 0;
        int j = a.size() - 1;
        
        
        int m;
        
        int ans;
        
        while(i<=j){
            
            m = (i+j)/2;
            // if(m==0) cout<<"jj\n",cout<<a[m-1];
            if(a[m]>a[m+1] && a[m]>a[m-1]){
         // if(m==0) cout<<"jj\n",cout<<a[m-1];
                ans = m;
                break;
            }else if(a[m]>a[m+1])
                j = m - 1;
            else
                i = m + 1;
            
        }
        ans = m;
        
        return ans;
    }
};
