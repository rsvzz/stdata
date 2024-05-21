#ifndef STACK_HPP
#define STACK_HPP
#include "ItemsSQ.hpp"
using namespace dt_common;
namespace dt_common{
    /// @brief Stack 
    /// @tparam t Type Class
    template<class t>
class Stack{
    private:
        ItemsSQ<t>* top;
    public:
        Stack(){top = NULL;};
        ~Stack(){};
        /// @brief Add item
        /// @param item saves Stack
        void add(t item){
            ItemsSQ<t>* aux = new ItemsSQ<t>;
            aux->key = item;
            if(top == NULL){
                aux->next = NULL;
                top = aux;
            }
            else{
                aux->next = top;
                top = aux;
            }
        };
        /// @brief Delete top of Stack
        /// @return true success, false fail.
        bool del_top(){
            if(top != NULL){
                ItemsSQ<t> *aux = top;
                top = aux->next;
                delete aux;
                aux = nullptr;
                return true;
            }
            else{
                return false;
            }
        };
        /// @brief Top Stack 
        /// @return Max Stack
        ItemsSQ<t>* get_top(){return top;};
};    
}
#endif