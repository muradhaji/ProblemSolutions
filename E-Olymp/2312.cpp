//Link: https://www.e-olymp.com/az/problems/2312

#include <bits/stdc++.h>
using namespace std;

class treeNode {
public:
    int data;
    treeNode* left;
    treeNode* right;
    treeNode(int data = int(),treeNode* left = NULL, treeNode* right = NULL)
    : data(data), left(left), right(right) {}
};

treeNode* insert(treeNode* begin, int data) {
    if(begin) {
        if(data < begin->data)
            begin->left = insert(begin->left,data);
        else if(begin->data < data)
            begin->right = insert(begin->right,data);
    }
    else
        return new treeNode(data);
    return begin;
}

int height(treeNode* begin) {
    if(begin) {
        int left = height(begin->left);
        int right = height(begin->right);
        return 1 + max(left,right);
    }
    else return 0;
}

int main(int argc, char** argv) {
    
    int n;
    
    treeNode* bst = NULL;
    
    while(cin >> n) {
        if(n == 0) {
            cout << height(bst);
            return 0;
        }
        bst = insert(bst,n);
    }

    return 0;
}
