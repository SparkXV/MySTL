#include <bits/stdc++.h>
using namespace std;

class BST
{
private:
    int key;
    int val;
    BST *left, *right;
    BST(int x, int y)
    {
        key = x;
        val = y;
        left = NULL;
        right = NULL;
    }
    void insert(BST *root, int key, int val)
    {
        if (val >= root->val)
        {
            if (root->right == NULL)
            {
                BST *temp = new BST(key, val);
                root->right = temp;
            }
            else
                insert(root->right, key, val);
        }
        else
        {
            if (root->left == NULL)
            {
                BST *temp = new BST(key, val);
                root->left = temp;
            }
            else
                insert(root->left, key, val);
        }
    }
    int search(BST *temp, int key)
    {
        if (temp == NULL)
            return -1;
        if (temp->key == key)
        {
            return temp->val;
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
    void update(BST *temp, int key, int val)
    {
        if (temp->key == key)
        {
            temp->val = val;
        }
        else if (temp->key > key)
        {
            update(temp->left, key, val);
        }
        else
        {
            update(temp->right, key, val);
        }
        return;
    }
    void inorder(BST *temp)
    {
        if (!temp)
            return;
        inorder(temp->left);
        cout << temp->val << " ";
        inorder(temp->right);
    }
    friend class MyHashMap;
};

class MyHashMap
{
public:
    BST *root;
    BST *obj;
    MyHashMap()
    {
        root = NULL;
    }
    void put(int key, int val)
    {
        if (root == NULL)
        {
            BST *temp = new BST(key, val);
            root = temp;
        }
        else
        {
            int t = obj->search(root, key);
            if (t == -1)
            {
                obj->insert(root, key, val);
            }
            else
            {
                obj->update(root, key, val);
            }
        }
    }
    int get(int key)
    {
        if (root == NULL)
            return -1;
        return obj->search(root, key);
    }
};
int main()
{
    MyHashMap hashMap;
    hashMap.put(1, 8);
    hashMap.put(2, 9);
    cout << hashMap.get(4) << " ";
    hashMap.put(4, 334);
    cout << hashMap.get(2) << " ";
    cout << hashMap.get(3) << " ";
    hashMap.put(2, 567);
    cout << hashMap.get(2) << " ";
    //hashMap.remove(2);
    cout << hashMap.get(1) << " ";
    cout << hashMap.get(4) << " ";
    return 0;
}