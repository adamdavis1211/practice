#include "list_interface.h"
#include "node.h"
#ifndef LINKED_LIST
#define LINKED_LIST

template <class ItemType>
class LinkedList: public ListInterface<ItemType> {
    private:
        Node<ItemType> * head;
        Node<ItemType> * temporary_pointer;
        int count;
    public:
        LinkedList();
        bool is_empty();
        int get_length();
        bool insert(int position, const ItemType& new_item);
        bool remove(int position);
        ItemType get_entry(int position);
        ItemType replace(int position, const ItemType& new_item);
};

#include "linked_list.cpp"
#endif