class Solution {
public:
    string reverseWords(string s) {
        string r="", w="";
        s = s+" ";
        for(int i=0;i<s.length();i++){
        if(s[i]==' '){
      
            int k=0, j=w.length()-1;
        while(k<=j){
            swap(w[k],w[j]);
            j--;
            k++;
        }
            r=r+w;
        if(i!= s.length()-1)
            r = r+" ";
            w = "";
        }
        else
         w = w+s[i];
        }
    return r;
    }
};