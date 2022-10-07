bool check(Node *root)
   {
       if(root==NULL)
            return {};
        queue<Node*>q;
        q.push(root);
        bool flag=false;
        while(q.empty()==false)
        {
            Node *curr=q.front();
            q.pop();
            if(curr->left!=NULL && flag==false)
                    q.push(curr->left);
            else if(curr->left==NULL && flag==false)
            {   
                flag=true;
            }
            else if(curr->left!=NULL && flag==true)
                return false;
                
            if(curr->right!=NULL && flag==false)
                    q.push(curr->right);
            else if(curr->right==NULL && flag==false)
            {   
                flag=true;
            }
            else if(curr->right!=NULL && flag==true)
                return false;
            
        }
        return true;
   }