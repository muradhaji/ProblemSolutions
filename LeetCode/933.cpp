//Link: https://leetcode.com/problems/number-of-recent-calls/

class RecentCounter {
public:
    queue<int> recent;
    
    RecentCounter() {
    }
    
    int ping(int t) {
        while(!recent.empty() && recent.front() + 3000 < t)
            recent.pop();
        recent.push(t);
        return recent.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
 