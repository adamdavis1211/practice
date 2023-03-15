#include "list_interface.h"

#ifndef LIST_H
#define LIST_H

template <class ItemType>
class List: public ListInterface<ItemType> {
    private:
        ItemType items[100];
        int count = 0;
    public:
        List();
        bool is_empty();
        int get_length();
        bool insert(int position, const ItemType& new_item);
        bool remove(int position);
        void clear();
        ItemType get_entry(int position);
        ItemType replace (int position, const ItemType& new_item);
        void print_all();
};

#include "list.cpp"
#endif