class MyCircularDeque {
public:
    vector<int> vec;
    int size = 0;
    int ss = 0; 
    MyCircularDeque(int k) {
        size = k;
    }
    bool insertFront(int value) {
        if(ss < size){
            vec.insert(vec.begin(),value); 
            ss++;
            return true;
        }
        return false;
    }
    bool insertLast(int value) {
        if(ss < size){
            vec.push_back(value);
            ss++;
            return true;
        }
        return false;
  
    }
    
    bool deleteFront() {
        if(vec.size() == 0){
            return false;
        }
        ss--;
        vec.erase(vec.begin());
        return true;
        
    }
    
    bool deleteLast() {
        if(vec.size() == 0){
            return false;
        }
        ss--;
        vec.pop_back();
        return true;
    }
    
    int getFront() {
        if(vec.size() == 0){
            return -1;
        }
        return vec[0];
    }
    
    int getRear() {
        if(vec.size() == 0){
            return -1;
        }
        return vec[vec.size() - 1];
    }
    
    bool isEmpty() {
        return vec.size() == 0;
    }
    
    bool isFull() {
        return vec.size() == size;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */