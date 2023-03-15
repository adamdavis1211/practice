template <class ItemType>
LinkedList<ItemType>::LinkedList() {
    head = nullptr;
    count = 0;
}

template <class ItemType>
bool LinkedList<ItemType>::is_empty() {
    return head == nullptr;
}

template <class ItemType>
int LinkedList<ItemType>::get_length() {
    return count;
}

template <class ItemType>
bool LinkedList<ItemType>::insert(int position, const ItemType& new_item) {
    if (position > count+1 || position == 0) {
        return false;
    }
    else {
        Node<ItemType> * new_node = new Node<ItemType>(new_item);
        if (position == 1) {
            if (head == nullptr) {
                head = new_node;
                count++;
                return true;
            }
            else {
                new_node->set_next_node(head);
                head = new_node;
                count++;
                return true;
            }
        }

        else {
            temporary_pointer = head;
            for (int i = 1; i < position-1; i++) {
                temporary_pointer = temporary_pointer->get_next_node();
            }
            new_node->set_next_node(temporary_pointer->get_next_node());
            temporary_pointer->set_next_node(new_node);
            count++;
            return true;
        }
    }
}

template <class ItemType>
ItemType LinkedList<ItemType>::get_entry(int position) {
    temporary_pointer = head;
    if (position == 0 || position > count) {
        return "NO SPOT";
    }

    for (int i = 1; i < position; i++) {
        temporary_pointer = temporary_pointer->get_next_node();
    }
    return temporary_pointer->get_item();
}

template <class ItemType>
ItemType LinkedList<ItemType>::replace(int position, const ItemType& new_item) {
    temporary_pointer = head;
    for (int i = 1; i < position; i++) {
        temporary_pointer = temporary_pointer->get_next_node();
    }
    ItemType replaced = temporary_pointer->get_item();
    temporary_pointer->set_item(new_item);
    return replaced;
}

template <class ItemType>
bool LinkedList<ItemType>::remove(int position) {
    Node<ItemType> * temporary_temporary_pointer;
    temporary_pointer = head;
    if (position == 0 || position > count) {
        return false;
    }
    else if (position == 1) {
        temporary_pointer = head;
        head = head->get_next_node();
        delete temporary_pointer;
        count--;
        return true;
    }
    else {
        for (int i = 1; i < position-1; i++) {
            temporary_pointer = temporary_pointer->get_next_node();
        }
        temporary_temporary_pointer = temporary_pointer->get_next_node();
        temporary_pointer->set_next_node(temporary_temporary_pointer->get_next_node());
        delete temporary_temporary_pointer;
        count--;
        return true;
    }
}