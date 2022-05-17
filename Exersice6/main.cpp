#include "stack.cpp"

#include <string>
#include <ctype.h>


//convert and infix expresion to postix
std::string infix_to_postix(std::string infix_expr){
    std::string postfix_expr = "";
    Stack<char>* st = new Stack<char>(false);

    for(int i=0; i<infix_expr.length(); i++){
        //iterate through all characters
        char c = infix_expr.at(i);
        
        if(c == '('){                                               //char is '('
            st->push(c);

        }else if(isdigit(c)){                                       //char is a number
            postfix_expr.push_back(c);

        }else if(c == '+'|| c == '-'){                              //char is '+' or '-'
            for(int x=st->length(); x>0; x--){
                //iterate through stack
                if(st->top()=='+' || st->top()=='-' || st->top()=='*' || st->top()=='/')
                    postfix_expr.push_back( st->pop() );
                else
                    break;
            }
            st->push(c);

        }else if(c == '*' || c == '/'){                             //char is '*' or '/'
            for(int x=st->length(); x>0; x--){
                //iterate through stack
                if(st->top() == '*' || st->top() == '/')
                    postfix_expr.push_back( st->pop() );
                else
                    break;
            }
            st->push(c);

        }else if(c == ')'){                                         //char is ')'
            for(int x=st->length(); x>0; x--){
                //iterate through stack
                if(st->top() == '('){
                    st->pop();
                    break;
                }else{
                    postfix_expr.push_back( st->pop() );
                }
            }
        }else{                                                      //char is anything else
            std::cout << "You INFIX isn't valid" << std::endl;
            return "Couldn't convert";
        }
    }

    //check stack for any left characters
    if(!st->empty()){
        for(int x=st->length(); x>0; x--){
            postfix_expr.push_back( st->pop() );
        }
    }

    return postfix_expr;
}

//calculate the value of a postfix expression
int val_postfix(std::string postfix_expr){
    int res;
    Stack<int>* st = new Stack<int>(false);

    for(int i=0; i<postfix_expr.length(); i++){
        //iterate through all characters
        char c = postfix_expr.at(i);


        if(isdigit(c)){  
            c -= '0';                                    //TODO: instead of 5, 53 is pushed to st
            st->push(c);

        }else if(c == '+' || c == '-' || c == '*' || c == '/'){
            if(st->length() >= 2){
                int num = st->pop(), num2 = st->pop();
                switch (c){
                    case '+': st->push(num + num2); break;
                    case '-': st->push(num - num2); break;
                    case '*': st->push(num * num2); break;
                    case '/': st->push(num / num2); break;}

            }else{
                std::cout << "POSTFIX expression isn't valid" << std::endl;
                return 0;
            }

        }else{
            std::cout << "POSTFIX expression isn't valid" << std::endl;
            return 0;
        }
    }
    //return res
    return st->pop();

}


int main(){

//infix to postfix
std::cout << infix_to_postix("5+(4-2)*2") << std::endl;

//calculate postfix
std::cout << "Result is: " << val_postfix( "542-2*+" ) << std::endl;


return 0;
}

