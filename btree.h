#ifndef BTREE_H
#define BTREE_H

#include "node.h"

template <typename T>
class BTree {
    private:
        Node<T>* root;
        unsigned int degree;
    public:
        BTree(unsigned int degree) : degree(degree), root(nullptr) {};

        bool search(T data) { 
            if(!root)
                return false;
            Node<T>* temp=root;
            while(true){
                for (int i =0 ; i < temp->keys.size() ; i++){
                    if(temp->keys[i]==data)
                        return true;
                    else
                        if(data<temp->keys[i]
                            break;
                }
                if(!temp->isLeaf)
                    temp=temp->childs[i];
                else break;
            }
        }

        bool insert(T data) {
            
        }

        bool remove(T data) {
            // TODO
        }

        void print() {
            // TODO
        }

        ~BTree();
};

#endif
