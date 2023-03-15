#include "list_interface.h"
#ifndef NODE_H
#define NODE_H

template <class ItemType>
class Node {
    private:
        Node * next_node;
        ItemType item;
    public:
        Node(const ItemType& new_item);
        void set_next_node(Node * new_node);
        Node<ItemType>* get_next_node();
        void set_item(const ItemType& new_item);
        ItemType get_item();
};

#include "node.cpp"
#endif
