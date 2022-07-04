**HASHMAP METHOD**
int majorityElement(vector<int>& nums) {
int len = nums.size();
map<int,int> m;
for(int i=0;i<len;i++){
m[nums[i]]+=1;
}
len = floor(len/2);
for(auto it: m){
if(it.second > len)
return it.first;
}
return 0;
}