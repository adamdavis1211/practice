template <class ItemType>
List<ItemType>::List() {
    count = 0;
}

template <class ItemType>
bool List<ItemType>::is_empty() {
    return count == 0;
}

template <class ItemType>
int List<ItemType>::get_length() {
    return count;
}

template <class ItemType>
bool List<ItemType>::insert(int position, const ItemType& new_item) {
    if (position == 0) {
        return false;
    }
    else {
        items[position] = new_item;
        count++;
        return true;
    }
}

template <class ItemType>
ItemType List<ItemType>::get_entry(int position) {
    return items[position];
}

template <class ItemType>
void List<ItemType>::clear() {
    count = 0;
}

template <class ItemType>
ItemType List<ItemType>::replace(int position, const ItemType& new_item) {
    ItemType replaced = items[position];
    items[position] = new_item;
    return replaced;
}

template <class ItemType>
bool List<ItemType>::remove(int position) {
    if (position == 0 || position > 100) {
        return false;
    }
    else {
        for (int i = position + 1; i <= count; i++) {
                items[i-1] = items[i];
        }
        count--;
        return true;
    }
}

template <class ItemType>
void List<ItemType>::print_all() {
    for (int i = 1; i <= count; i++) {
        cout << items[i] << endl;
    }
}