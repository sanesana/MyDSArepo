void solve(Node* root, vector<int> &v){
       if(!root){
           return;
       }
       solve(root->left,v);
       v.push_back(root->data);
       solve(root->right,v);
      
   }
   vector<int> inOrder(Node* root) {
       vector<int> v;
       solve(root,v);
       return v;
   }
