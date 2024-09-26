class MyCalendar {
public:
    vector<pair<int,int>> vec;
    MyCalendar() {

    }
    bool book(int start, int end) {
        for(auto &p : vec){
            if(max(start, p.first) < min(end, p.second)){
                return false; // Overlap found
            }
        }
        // No overlap, so add the new interval
        vec.push_back({start,end});
        return true;
    }
};


/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */