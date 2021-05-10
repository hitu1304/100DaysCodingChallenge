/*plateform-> GeeksForGeeks (practice Easy)

Topic ->  Tree

language used->cpp.
    
Problem Statement->

Given a binary tree, find its level order traversal.
Level order traversal of a tree is breadth-first traversal for the tree.


Example 1:

Input:
    1
  /   \ 
 3     2
Output:1 3 2
Example 2:

Input:
        10
     /      \
    20       30
  /   \
 40   60
Output:10 20 30 40 60 N N

Your Task:
You don't have to take any input. Complete the function levelOrder() that takes the root node as input parameter and returns a list of integers containing the level order traversal of the given Binary Tree.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


Constraints:
1 ≤ Number of nodes ≤ 105
1 ≤ Data of a node ≤ 105

Apprpach-> traverse with th help of queue level by level.*/

vector<int> levelOrder(Node* node)
    {
      //Your code 
      Node *p=node;
      vector<int>v={};
      queue<Node*>q;
      v.push_back(p->data);
      q.emplace(p);
      
      while (! q.empty()){
        p = q.front();
        q.pop();
 
        if (p->left){
            v.push_back(p->left->data);
            q.emplace(p->left);
        }
 
        if (p->right){
            v.push_back(p->right->data);
            q.emplace(p->right);
        }
    }return v;
      
    }

//Time Complexity: O(N)