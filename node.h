#ifndef NODE_H
#define NODE_H

#include <vector>

using namespace std;

template <typename T>
class Node {
    unsigned int size;
    vector<T> keys;
    vector<Node<T>*> childs;
    bool isLeaf;

    public: 
        Node(unsigned int size, bool isLeaf = true) : size(size), isLeaf(isLeaf) {
            keys.resize(size - 1);
            childs.resize(size,nullptr);
        }
        bool operator!=(Node<T> &other){
            
            return false;
        };
        bool operator<(Node<T> &other){


        };
        bool operator>(Node<T> &other){

        };
        bool operator==(Node<T> &other){

        };

        /**
         * An alternative is to create two different nodes (Internal and Leaf) that inherite from Node 
         * an implement this function
         */
        //virtual bool isLeaf() = 0;

    friend class BTree; 
};

#endif