//Link: https://leetcode.com/problems/design-an-ordered-stream/

class OrderedStream {
public:
    vector <string> arr;
    int last_index = 0, n;
    
    OrderedStream(int n) {
        this->n = n;
        this->arr.resize(n);
    }
    
    vector<string> insert(int idKey, string value) {
        this->arr[idKey-1] = value;
        vector<string> result;
        for(int i = last_index ; i < n ; i++) {
            if(this->arr[i] != "") {
                result.push_back(this->arr[i]);
                this->last_index = i+1;
            }
            else break;
        }
        return result;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
 