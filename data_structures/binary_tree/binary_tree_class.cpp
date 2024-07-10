#include<iostream>

template<typename var>
class BTNode
{
public:
    var data;
    BTNode* left;
    BTNode* right;
    BTNode(var data);
    ~BTNode();
};

template<typename var>
BTNode<var>::BTNode(var data){
    this -> data = data;
    left = NULL;
    right = NULL;
}

template<typename var>
BTNode<var>::~BTNode(){
    delete left;
    delete right;
}

