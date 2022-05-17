#include <iostream>

template <class A>
class Stack{

    struct node {
        A item;
        node *next;
    };

    public:
    //constructor and destructor
        Stack(bool show_cout=true){
            this->tail = nullptr;
            this->anz_items = 0;

            if(show_cout)
                std::cout << "A new stack has been created" << std::endl;
        }
        ~Stack(){
            std::cout << "A stack has been deleted" << std::endl;
        }

    //push
        void push(A r){         //might use &r as well
            //create new node
            node* n = new node;
            n->item = r;
            n->next = nullptr;

            if(this->empty()){
                //stack is empty
                this->tail = n;
            }else{
                //get top node
                node* next_node = tail;

                while (true)
                {
                    if(next_node->next == nullptr){
                        //set next of top node
                        next_node->next = n;
                        break;
                    }else{
                        next_node = next_node->next;
                    }
                }
            }

            this->anz_items++;
            
        }

    //pop
        A pop(){
            if(this->empty()){
                //stack is empty
                std::cout << "Your stack doesn't conatin any elements to pop" << std::endl;
                return A(-1);
            }else{
                this->anz_items--;

                node* last_node = tail;
                node* next_node = tail;
                while (true)
                {
                    if(next_node->next == nullptr){
                        A val = next_node->item;

                        //delete last note
                        last_node->next = nullptr;
                        delete next_node;

                        return val;
                    }else{
                        last_node = next_node;
                        next_node = next_node->next;
                    }
                }

            }

        }

    //top
        A top(){
            if(this->empty()){
                //stack is empty
                std::cout << "Your stack is empty" << std::endl;
                return A(-1);
            }else{
                node* next_node = tail;
                while (true)
                {
                    if(next_node->next == nullptr){
                        return next_node->item;
                    }
                    next_node = next_node->next;
                }
            }
        }

    //getter
        int length(){
            return anz_items;
        }

        bool empty(){
            if(anz_items == 0){
                return true;
            }
            return false;
        }

    private:
        node* tail;
        int anz_items;

    };
