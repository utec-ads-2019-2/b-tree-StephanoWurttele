#ifndef BTREE_H
#define BTREE_H

#include "node.h"

template <typename T>
class BTree {
    private:
        Node<T>* root;
        unsigned int degree;
        Node<T> find(T data){ 
            if(!root)
                return false;
            Node<T>* temp=root;
            vector<T> tempvec=temp->keys;
            while(temp!=nullptr){
                for (int i =0 ; i < temp->size ; i++){
                    if(tempvec[i]==data)
                        return temp;
                    else{
                        if(data>tempvec[i]{
                            if(i==degree-1)
                                temp=temp->childs[i+1];
                                break;
                        }
                        else{
                            temp=temp->childs[i];
                            break;
                        }
                    }
                }
            }
        }

    public:
        BTree(unsigned int degree) : degree(degree), root(nullptr) {};

        bool search(T data) { 
            if(!root)
                return false;
            Node<T>* temp=root;
            vector<T> tempvec=temp->keys;
            while(temp!=nullptr){
                for (int i =0 ; i < temp->size ; i++){
                    if(tempvec[i]==data)
                        return true;
                    else{
                        if(data>tempvec[i]{
                            if(i==degree-1)
                                temp=temp->childs[i+1];
                                break;
                            
                        }
                        else{
                            temp=temp->childs[i];
                            break;
                        }
                    }
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
