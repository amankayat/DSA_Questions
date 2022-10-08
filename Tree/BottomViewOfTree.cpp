#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int>ans;
        if(root==NULL) return ans;
        map<int,int>mp;
        queue<pair<int,Node*>>q;
        q.push({0, root});
        while(!q.empty()) {
            auto vertical_node = q.front();
            q.pop();
            Node *node = vertical_node.second;
            int vertical = vertical_node.first;
            mp[vertical] = node->data;
            if(node->left)q.push({vertical-1, node->left});
            if(node->right)q.push({vertical+1, node->right});
        }
        for(auto &n:mp) {
            ans.push_back(n.second);
        }
        return ans;
    }
};
