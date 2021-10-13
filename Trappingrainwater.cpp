class Solution {
public:
    int trap(vector<int>& h) {
       if(h.size()<=2) return 0;
        int i,j,s=0,fs=0,n=h.size();
        int lmax=h[0],rmax=h[n-1],l=1,r=n-2;
        while(l<=r)
        {
            if(lmax<=rmax)
            {
                if(h[l]<=lmax)
                    s+=lmax-h[l];
                else
                    lmax=h[l];
                l++;
            }
            else{
                if(h[r]<=rmax)
                    s+=rmax-h[r];
                else
                    rmax=h[r];
                r--;
            }
        }
        
        return s;
        
    }
};
