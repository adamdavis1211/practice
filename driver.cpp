#include "list.h"
#include "linked_list.h"

int main() {
    List<string> monkey_nigger;
    monkey_nigger.insert(1, "1");
    monkey_nigger.insert(2, "2");
    monkey_nigger.insert(3, "3");
    monkey_nigger.insert(4, "4");
    monkey_nigger.insert(5, "5");

    monkey_nigger.remove(5);
    monkey_nigger.print_all();   

    cout << endl;

    monkey_nigger.remove(3);
    monkey_nigger.print_all();

    cout << endl;

    monkey_nigger.remove(2);
    monkey_nigger.print_all();


    LinkedList<string> linked;
    linked.insert(1, "one");
    linked.insert(2, "two");
    linked.insert(3, "three");
    linked.insert(4, "fo ");

    cout << linked.get_entry(1) << endl;
    cout << linked.get_entry(2) << endl;
    cout << linked.get_entry(3) << endl << endl;

    linked.insert(2, "one poin fi");

    cout << linked.get_entry(1) << endl;
    cout << linked.get_entry(2) << endl;
    cout << linked.get_entry(3) << endl << endl;

    linked.replace(1, "one or two maybe tree fiddy");
    linked.replace(2, "two, yea two");
    linked.replace(3, "tree fiddy");

    cout << linked.get_entry(1) << endl;
    cout << linked.get_entry(2) << endl;
    cout << linked.get_entry(3) << endl;
    cout << linked.get_entry(4) << endl;
    cout << linked.get_entry(5) << endl << endl;    

    linked.remove(3);

    cout << linked.get_entry(1) << endl;
    cout << linked.get_entry(2) << endl;
    cout << linked.get_entry(3) << endl;
    cout << linked.get_entry(4) << endl;
    cout << linked.get_entry(5) << endl << endl;   

    linked.remove(4);

    cout << linked.get_entry(1) << endl;
    cout << linked.get_entry(2) << endl;
    cout << linked.get_entry(3) << endl;
    cout << linked.get_entry(4) << endl;
    cout << linked.get_entry(5) << endl;   

}   