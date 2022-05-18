#include <iostream>

template<class T>
class Tabelle{

    //node
    struct node{
        T val;
        node* next;
        node* last;
    };


    public:

//constructor and destructor
        Tabelle(){
            std::cout << "Created new table" << std::endl;
        }
        ~Tabelle(){
            std::cout << "A new table has been created" << std::endl;
        }

//add value

        //insert val ahead of node current
        bool insert(T val){
            if(this->length == 0){  //empty table
                this->append(val);
            }else{
                //create new node
                node* n = new node;
                n->val = val;

                if(this->current != this->tail){
                    this->current.last.next = n;     //point last note to n
                    n->last = this->current.last;

                }else{
                    n->last = nullptr;

                    this->tail = n;
                }
                    

                this->current.last = n;           //point current to n
                n->next = current;
                
                this->current = n;

            }
            
        }
        //add val at head
        bool append(T val){
            //create new node
            node* n = new node;
            n->val = val;


            if(this->length == 0){
                //empty table
                n->last = nullptr;
                n->next = nullptr;

                this->tail = n;
                this->head = n;
                this->current = n;
            }else{
                n->last = this->head;   //set this.last to last
                this->head.next = n;    //set last.next to this

                this->head = n;         //the current node is now the head
                this->current = n;
            }
        }

        //set record
        bool first();
        bool last();
        bool next();
        bool previous();

//delete, get, substitute
        bool delete_node();
        bool get_node(T &r);
        bool set_node(T &r);

    private:
        node* current = nullptr;
        node* tail = nullptr;
        node* head = nullptr;
        int length = 0;
};

