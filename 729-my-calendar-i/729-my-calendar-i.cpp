// Time: O(n)
// Space: O(1)
class MyCalendar {
public:
    // array of pair to store {start,end} dates     
    vector<pair<int,int>> date;
    MyCalendar() {
    }
    
    bool book(int start, int end) {
        // loop through all booked dates         
        for(int i=0;i<date.size();i++){
            
        // check if start is in b/w any booked date or not             
        if(start>=date[i].first and start<date[i].second)
            return false;
        
        // check if end is in b/w any booked date or not
        if(end>date[i].first and end<date[i].second)
            return false;
        
        // check if date overlaps any existing date or not         
        if(start<=date[i].first and end>=date[i].second)
            return false;
        }
        
        // date can booked, push to array         
        date.push_back({start,end});     
        
        //return true         
        return true;
    }
};
