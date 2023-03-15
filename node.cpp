template <class ItemType>
Node<ItemType>::Node(const ItemType& new_item) {
    next_node = nullptr;
    item = new_item;
}

template <class ItemType>
Node<ItemType>* Node<ItemType>::get_next_node() {
    return next_node;
}

template <class ItemType>
void Node<ItemType>::set_next_node(Node<ItemType> * new_node) {
    next_node = new_node;
}

template <class ItemType>
ItemType Node<ItemType>::get_item() {
    return item;
}

template <class ItemType>
void Node<ItemType>::set_item(const ItemType& new_item) {
    item = new_item;
}
