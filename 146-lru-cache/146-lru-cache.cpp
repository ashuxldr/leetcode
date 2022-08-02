class node{
    public:
    int key;
    int val;
    node* next;
    node* prev;
    node(int x, int y){
        key = x;
        val = y;
        next = NULL;
        prev = NULL;
    }
};

class LRUCache {
public:
    int cap;
    map<int,node*> m;
    node* head = new node(0,0);
    node* tail = new node(0,0);

    LRUCache(int capacity) {
        cap=capacity;
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if(m.find(key)!=m.end()){
        node * resnode = m[key];
        int res = resnode -> val;
        m.erase(key);
        deletenode(resnode);
        node * resn = new node(key,res);
        insert(resn);
        m[key] = resn;
        return res;
    }
    return -1;
}
  
    void deletenode(node * delnode) {
    node * delprev = delnode -> prev;
    node * delnext = delnode -> next;
    delprev -> next = delnext;
    delnext -> prev = delprev;
    delete delnode;
  }

    
    void insert(node* x){
        x->prev = tail->prev;
        x->next = tail;
        x->prev->next = x;
        tail->prev = x;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            node*  del = m[key];
            m.erase(key);
            deletenode(del);
        }
      
        if(m.size()==cap)
        {
            m.erase(head->next->key);
            deletenode(head->next);
        }
        
        node* newNode = new node(key,value);
        insert(newNode);
        m[key] = newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */