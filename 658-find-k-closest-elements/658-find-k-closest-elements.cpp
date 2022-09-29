class Solution {
public:
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    priority_queue<pair<int,int>> pq;         
    for(int i=0;i<k;i++){                                      
        pq.push({abs(arr[i]-x),i});
    }
    
    for(int i=k;i<arr.size();i++){             
        int diff=abs(arr[i]-x);               
        if(diff<pq.top().first){               
            pq.pop();
            pq.push({diff,i});
        }
    }
    vector<int> v;
    while(!pq.empty()){                        
        v.push_back(arr[pq.top().second]);
        pq.pop();
    }
    sort(v.begin(),v.end());
    return v;
}
};