class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> ps(n);
        vector<int> ns(n);
        stack<int> s;
        // find next smaller of each element
        for(int i = 0; i < n; i++){
            while(!s.empty() and heights[i] < heights[s.top()]){
                ns[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while(s.size()){
            ns[s.top()] = n;
            s.pop();
        }

        // find previous smaller of each element
        for(int i = 0; i < n; i++){
            while(!s.empty() and heights[i] <= heights[s.top()]){
                s.pop();
            }
            if(!s.empty() and heights[i] > heights[s.top()]){
                ps[i] = s.top();
            }else{
                ps[i] = -1;
            }
            s.push(i);
        }

        int max_area = INT_MIN;
        // find max area
        for(int i = 0; i < n; i++){
            int curr_area = heights[i] * (ns[i] - ps[i] - 1);
            max_area = max(max_area, curr_area);
        }
        return max_area;
    }
};