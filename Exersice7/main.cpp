#include <iostream>
#include "tabelle.cpp"

int main(){
    int store;
    Tabelle<int>* t = new Tabelle<int>();

    t->append(3);
    t->append(2);
    t->get_node(store);
    t->last();
    t->get_node(store);

}