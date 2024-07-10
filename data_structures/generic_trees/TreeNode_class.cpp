#include<iostream>
#include<vector>

template<typename var>
class TreeNode
{

public:
    var data;
    std::vector<TreeNode<var>*> children;
    TreeNode(var data);
    ~TreeNode();
};

template<typename var>
TreeNode<var>::TreeNode(var data){
    this->data = data;
}

template<typename var>
TreeNode<var>::~TreeNode(){
    for (int idx = 0; idx < children.size(); idx++){
        delete children[idx];
    }
}





