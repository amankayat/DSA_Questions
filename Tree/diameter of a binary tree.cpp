
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; 

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    
    int height(Node* root)
    {
        if(root==NULL)
        return 0;
        else
        {
            return(max(height(root->left),height(root->right))+1);
        }
    }
    
    int diameter(Node* root) {
        // Your code here
        
        if(root==NULL)
        return 0;
        else
        {   
            int a=(diameter(root->left));
            int b=diameter(root->right);
            int c=height(root->left)+height(root->right)+1;
            int k=max(a,b);
            return max(k,c);
        }
       
    }
};