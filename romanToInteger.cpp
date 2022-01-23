const roman = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
var romanToInt = function(s) {
    let prev = roman[s[0]];
    let sum=0;
    for(let i=0;i<s.length;i++){
        let curr = roman[s[i]];   
        if(prev<curr){
            sum = sum +curr -(2*prev);
        }
        else{
            sum = sum +curr;
        }
        prev = curr;
   }
    return sum;
};