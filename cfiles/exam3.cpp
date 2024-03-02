#include <iostream>
#include <map>
#include <queue>
using namespace std;


struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Function to create a new node
Node *createNode(int data)
{
    Node *newNode = new Node();
    if (!newNode)
    {
        cout << "Memory error";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to print the top view of a binary tree
void top(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    // Create an empty queue for level order traversal
    queue<pair<Node *, int>> q;

    // Create a map to store the horizontal distance of each node from the root node
    map<int, int> m;

    // Push the root node and its horizontal distance into the queue
    q.push(make_pair(root, 0));

    // Perform the level order traversal
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        Node *currentNode = p.first;
        int hd = p.second;
        q.pop();

        // If the current horizontal distance is not in the map, insert it
        if (m.find(hd) == m.end())
        {
            m[hd] = currentNode->data;
        }

        // Enqueue the left child with horizontal distance hd-1
        if (currentNode->left != NULL)
        {
            q.push(make_pair(currentNode->left, hd - 1));
        }

        // Enqueue the right child with horizontal distance hd+1
        if (currentNode->right != NULL)
        {
            q.push(make_pair(currentNode->right, hd + 1));
        }
    }

    // Print the top view of the binary tree
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->second << " ";
    }
}

int main()
{
    // Create the binary tree
    Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->right = createNode(4);
    root->left->right->right = createNode(5);
    root->left->right->right->right = createNode(6);

    // Print the top view of the binary tree
    cout << "The top view of the binary tree is: ";
    top(root);

    return 0;
}