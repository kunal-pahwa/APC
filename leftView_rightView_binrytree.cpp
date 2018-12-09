
#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
// A wrapper over leftViewUtil()
void leftView(struct Node *root);
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node* newNode(int data)
{
  struct Node* node = (struct Node*)
                       malloc(sizeof(struct Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
/* Driver program to test size function*/
int main()
{
  int t;
  struct Node *child;
  scanf("%d
", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d
",&n);
     struct Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     leftView(root);
     cout << endl;
  }
  return 0;
}

void leftView(Node *root)
{
   // Your Code here
   queue<Node*> que;
   que.push(root);
   Node* x = NULL;
   que.push(x);
   int last = root->data;
   cout<<last<<" ";
   while(!que.empty()) {
       Node* temp = que.front();
       que.pop();
       if(temp == NULL) {
           if(!que.empty()){
               que.push(x);
               cout<<last<<" ";
           }
       }
       else{
          
           if(temp->right!=NULL) {
               que.push(temp->right);
               last= temp->right->data;
           }
            if(temp->left!=NULL) {
               que.push(temp->left);
               last = temp->left->data;
           }
       }
   }
}
void rightView(Node *root)
{
   // Your Code here
   queue<Node*> que;
   que.push(root);
   Node* x = NULL;
   que.push(x);
   int last = root->data;
   cout<<last<<" ";
   while(!que.empty()) {
       Node* temp = que.front();
       que.pop();
       if(temp == NULL) {
           if(!que.empty()){
               que.push(x);
               cout<<last<<" ";
           }
       }
       else{
            if(temp->left!=NULL) {
               que.push(temp->left);
               last = temp->left->data;
           }
            if(temp->right!=NULL) {
               que.push(temp->right);
               last= temp->right->data;
           }
       }
   }
}