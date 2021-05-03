/*plateform-> GeeksforGeeks

    Topic->Tree (Easy)
    
    language used->cpp.
    
    Problem Statement->
    
    
Given a Binary Tree, find maximum and minimum elements in it.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the number of edges. The following line contains the edges as shown in the example.

Output:
Print two space-separated integers maximum and minimum element in the binary tree.

Constraints:
1<=T<=10^5
1<=n<=10^5
1<=data of the node<=10^5

Example:
Input:
1
7
2 7 L 2 5 R 7 6 R 6 1 L 6 11 R 5 9 R 9 4 L

Output:
11 1

Explanation:

                                                       

The above tree is constructed through the example in the input. The maximum and minimum element in this binary tree is 11 and 1 respectively.

Approach-> Traverse through the tree and keep updating the max and min element .*/


int findMax(struct node* root)
{
// Your code goes here
int max=root->data;
stack<node*>s;
            while(root || !s.empty())
            {
                if(root)
                {
                    if(root->data>max){max=root->data;}
                    s.push(root);
                    root=root->left;
                }else
                {
                    root=s.top();
                    s.pop();
                    root=root->right;
                }
            }return max;
}

int findMin(struct node* root)
{
// Your code goes here
int min=root->data;
stack<node*>s;
            while(root || !s.empty())
            {
                if(root)
                {
                    if(root->data<min){min=root->data;}
                    s.push(root);
                    root=root->left;
                }else
                {
                    root=s.top();
                    s.pop();
                    root=root->right;
                }
            }return min;
}

//Time Complexity: O(N).