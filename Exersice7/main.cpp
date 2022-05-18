#include <iostream>
#include "tabelle.cpp"

int main(){
    int store;
    Tabelle<int>* t = new Tabelle<int>();

    //set values
    t->append(3);
    t->append(2);
    t->append(4);

    //move iterator
    t->last();
    t->last();


    t->insert(42);

    t->next();
    t->get_node(store);


    t->next();

    std::cout << "Node before delete: ";
    t->get_node(store);
    t->delete_node();

    std::cout << "Node after delete: ";
    t->get_node(store);

}