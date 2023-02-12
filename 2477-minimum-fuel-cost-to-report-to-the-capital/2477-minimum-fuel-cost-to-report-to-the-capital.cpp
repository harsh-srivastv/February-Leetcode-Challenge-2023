class Solution {
public:
    long long ans=0;
    void pre(int v,int p,vector<int>g[],vector<long long>&sub,int seats){
        sub[v]=1;
        for(auto &to:g[v]){
            if(to==p)continue;
            pre(to,v,g,sub,seats);
            sub[v]+=sub[to];
        }
        for(auto &to:g[v]){
            if(to!=p)
        ans+=(sub[to]+seats-1)/seats;
        }
    }
    
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n=roads.size();
        n++;
        vector<long long>sub(n);
        vector<int>g[n];
        for(auto it:roads){
            g[it[0]].push_back(it[1]);
            g[it[1]].push_back(it[0]);
        }
       pre(0,-1,g,sub,seats);
    
        return ans;
    }
};