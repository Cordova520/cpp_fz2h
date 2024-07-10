#include<iostream>
#define NULL __null

class Node
{
public:
    int data;
    Node *next;
    Node(int data);
    ~Node
();
};

Node::Node(int data)
{
    this -> data = data;
    next = NULL;
}

Node::~Node()
{
}

class Doubly
{
public:
    int data;
    Doubly *next;
    Doubly *prev;
    Doubly(int data);
};

Doubly::Doubly(int data)
{
    this -> data = data;
    next = NULL;
    prev = NULL;
}


