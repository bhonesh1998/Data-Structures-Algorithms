long int sumBT(Node* root)
{
   if(root==NULL) return 0;
   else return root->key+sumBT(root->left)+sumBT(root->right);
}
