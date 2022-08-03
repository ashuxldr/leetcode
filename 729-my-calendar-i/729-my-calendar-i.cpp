class MyCalendar {
public:
    vector<int> start;
    vector<int> end;
    MyCalendar() {
    }
    
    bool book(int s, int e) {
        for(int i=0;i<start.size();i++){
        if(s>=start[i] and s<end[i])
            return false;
        if(e>start[i] and e<end[i])
            return false;
        if(s<=start[i] and e>=end[i])
            return false;
        }
        start.push_back(s);
        end.push_back(e);        
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */