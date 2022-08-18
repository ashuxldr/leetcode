 class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<int> v;
        int n= arr.size();
        // store count of nums         
        unordered_map<int, int> um;
        for(int i=0; i< n; i++)  
          um[arr[i]]++;

        if(um.size()==1) return 1;
        
        // store counts so that we can sort them         
       for (auto x : um)
           v.push_back(x.second);

        // sort the counts         
        sort(v.begin(), v.end());
        int ans=0,n1=0;
        for(int i=v.size()-1; i>=0; i--)
        {
            // check if size of array for n/2             
            if(ans>=n/2)
              return n1;
            // n1 is size of set(unique numbers)           
            n1++;
            // ans stores total no. of elements in the reduced elements            
            ans= ans+ v[i];
        }
        return 0;
    }
};