class LRUNode{
    public :
        int key;
        int value;
        LRUNode *next;
        LRUNode *prev;
        LRUNode(int key,int value){
            this->key = key;
            this->value = value;
            next = NULL;
            prev = NULL;
        }
};

class LRUCache {
    LRUNode *front,*back;
    unordered_map<int,LRUNode*> mp;
    int capacity;
    int curr_size;
    public:
    LRUCache(int n){
        capacity = n;
        front = NULL;
        back = NULL;
        curr_size = 0;
    }
        
    int get(int key) {
        if(mp.find(key) != mp.end()){
            cache(key);
            LRUNode *p = mp[key];
            return p->value;
        }//if
        return -1;
    }
    
    void insert(int key,int value){
        LRUNode *p = new LRUNode(key,value);
        mp[key] = p;
        if(front == NULL && back == NULL){
            front = p;
            back = p;
        }//if
        else{
            back->next = p;
            p->prev = back;
            back = p;
        }//else
        curr_size++;
    }//func
    
    void remove(){
        LRUNode *p = front;
        mp.erase(front->key);
        front = front->next;
        if(front != NULL)
        front->prev = NULL;
        else{
            front = NULL;
            back = NULL;
        }//else
        //delete p;
        curr_size--;
    }
    
    void cache(int key){
        if(curr_size == 1 || mp[key] == back)
        return;
        LRUNode *p = mp[key];
        if(p->prev != NULL){
            p->prev->next = p->next;
        }//if
        else{
            front = front->next;
        }//else
        
        if(p->next != NULL){
            p->next->prev = p->prev;
        }//if
        back->next = p;
        p->prev = back;
        p->next = NULL;
        back = p;
    }//func
    
    void put(int key, int value) {
        if(mp.find(key) == mp.end() && curr_size < capacity){
           insert(key,value);
        }//if
        else if(mp.find(key) == mp.end() && curr_size == capacity){
            remove();
            insert(key,value);
        }//elseif
        else if(mp.find(key) != mp.end()){
            LRUNode *p = mp[key];
            p->value = value;
            cache(key);
        }//elseif
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
