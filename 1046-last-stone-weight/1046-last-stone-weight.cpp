class Solution {
public:
    int lastStoneWeight(vector<int>& st) {
        	int n=st.size();
			priority_queue<int>q;
			for(auto i: st) q.push(i);
			while(q.size()!=1){
				int x=q.top();
				q.pop();
				int y=q.top();
				q.pop();
				q.push(max(x,y)-min(x,y));
			}
			return q.top();
    }
};