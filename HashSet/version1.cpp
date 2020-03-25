#include <bits/stdc++.h>
using namespace std;

class BST
{
private:
    int key;
    BST *left, *right;
    BST(int x)
    {
        key = x;
        left = NULL;
        right = NULL;
    }
    void insert(BST *root, int key)
    {
        if (key >= root->key)
        {
            if (root->right == NULL)
            {
                BST *temp = new BST(key);
                root->right = temp;
            }
            else
                insert(root->right, key);
        }
        else
        {
            if (root->left == NULL)
            {
                BST *temp = new BST(key);
                root->left = temp;
            }
            else
                insert(root->left, key);
        }
    }
    bool search(BST *temp, int key)
    {
        if (temp == NULL)
            return false;
        if (temp->key == key)
        {
            return true;
        }
        else if (temp->key > key)
        {
            return search(temp->left, key);
        }
        else
        {
            return search(temp->right, key);
        }
    }
    friend class MyHashset;
};
class MyHashset
{
public:
    BST *root;
    BST *obj;
    MyHashset()
    {
        root = NULL;
    }
    void put(int key)
    {
        if (root == NULL)
        {
            BST *temp = new BST(key);
            root = temp;
        }
        else
        {
            bool t = obj->search(root, key);
            if (t)
            {
                return;
            }
            else
            {
                obj->insert(root, key);
            }
        }
    }
    bool find(int key)
    {
        return obj->search(root, key);
    }
};
int main()
{
    MyHashset hashset;
    hashset.put(1);
    hashset.put(2);
    if (hashset.find(6))
    {
        cout << "true"
             << "\n";
    }
    else
    {
        cout << "false"
             << "\n";
    }
    return 0;
}