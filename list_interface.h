#include <iostream>
using namespace std;

#ifndef LIST_INTERFACE
#define LIST_INTERFACE

template <class ItemType>
class ListInterface {
    public:
        virtual bool is_empty() = 0;
        virtual int get_length() = 0;
        virtual bool insert(int, const ItemType&) = 0;
        virtual bool remove(int) = 0;
        // virtual void clear() = 0;
        virtual ItemType get_entry(int) = 0;
        virtual ItemType replace(int, const ItemType&) = 0;
        virtual ~ListInterface() {}
};

#endif