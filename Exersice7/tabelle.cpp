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
            current = nullptr;
            tail = nullptr;
            head = nullptr;
            length = 0;
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

                this->length++;
                return true;

            }else{
                n->last = this->head;   //set this.last to last
                this->head->next = n;    //set last.next to this

                this->head = n;         //the current node is now the head
                this->current = n;

                this->length++;
                return true;
            }
        }

        //set record
        bool first(){
            if(this->length == 0)
                return false;

            this->current = this->head;
            return true;
        }

        bool last(){
            if(this->length == 0)
                return false;

            this->current = this->tail;
            return true;
        }

        bool next(){
            if(this->length == 0)
                return false;

            if(this->next == nullptr)
                return false;

            this->current = this->current->next;
            return true;
        }

        bool previous(){
            if(this->length == 0)
                return false;

            if(this->last == nullptr)
                return false;

            this->current = this->current->last;
        }

//delete, get, substitute
        bool delete_node(){
            if(this->length == 0)
                return false;
        
            if(this->length == 0){
                delete [] this->current;
                this->current = nullptr;
                this->tail = nullptr;
                this->head = nullptr;
                this->length = 0;
                return true;
            }

            //current is tail
            if(this->current == this->tail){
                this->tail->next->last = nullptr;
                this->tail = this->current->next;

                //delete node
                delete [] this->current;
                this->length--;

                //set current
                this->current = this->tail;

                return true;
            }

            //current is head
            if(this->current == this->head){
                this->head->last->next = nullptr;
                this->head = this->current->last;

                //delete node
                delete [] this->current;
                this->length--;

                //set current
                this->current = this->head;

                return true;
            }

            //wether tail nor head
            this->current->next->last = this->current->last;
            this->current->last->next = this->current->next;


            delete [] this->current;
            this->length--;

            //set current
            this->current = this->head;

            return true;
        }

        bool get_node(T &r){
            if(this->length == 0)
                return false;

            r = this->current->val;
            std::cout << "r= " << r << std::endl;
            return true;
        }

        bool set_node(T &r){
            if(this->length == 0)
                return false;
            
            this->current->val = r;
            return true;
        }

    private:
        node* current;
        node* tail;
        node* head;
        int length;
};

