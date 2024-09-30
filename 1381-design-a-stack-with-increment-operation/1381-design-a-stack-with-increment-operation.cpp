class CustomStack {
public:
    int a;
    int c = 0;
    stack<int> st;
    CustomStack(int maxSize) {
        a = maxSize;
    }
    void push(int x) {
        if(c < a){
            st.push(x);
            c++;
        }
    }
    int pop() {
        if(st.empty()){
            return -1;
        }
        int top = st.top();
        st.pop();
        c--;
        return top;
    }
    void increment(int k, int val) {
        vector<int> temp;
        int si = min(k,c);
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        for(int i = 0; i < si; i++){
            temp[temp.size() - 1 - i] += val;
        }
        for(int i = temp.size() - 1; i >= 0; i--){
            st.push(temp[i]);
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */