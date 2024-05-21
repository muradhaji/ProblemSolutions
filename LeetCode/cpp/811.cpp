//Link: https://leetcode.com/problems/subdomain-visit-count/

class Solution {
private:
    vector<pair<string,int>> subdomains;
    void add(string subdomain, int count) {
        for(int i = 0 ; i < subdomains.size() ; i++) {
            if(subdomains[i].first == subdomain) {
                subdomains[i].second += count;
                return ;
            }
        }
        subdomains.push_back(make_pair(subdomain,count));
    }
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string> result;
        int count;
        string subdomain;
        for(auto domain : cpdomains) {
            count = 0;
            subdomain = "";
            for(int i = 0 ; domain[i] != ' ' ; i++)
                count = count*10 + domain[i]-48;
            for(int i = domain.length()-1 ; i >= 0 ; i--) {
                if(domain[i] == '.' || domain[i] == ' ') add(subdomain, count);
                subdomain = domain[i] + subdomain;
            }
        }
        for(auto x : subdomains)
            result.push_back(to_string(x.second)+" "+x.first);
        return result;
    }
};
