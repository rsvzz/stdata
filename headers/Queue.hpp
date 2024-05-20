#ifndef QUEUE_HPP
#define QUEUE_HPP
#include "ItemsSQ.hpp"
namespace list_g{
/// @brief Queue saves added
/// @tparam Type class
template<class t>
class Queue
{
private:
    ItemsSQ<t> *front;
    ItemsSQ<t> *cend;
public:
    Queue(){front = NULL; cend = NULL;};
    ~Queue(){};
    /// @brief Add item
    /// @param item 
    void add(t item){
        ItemsSQ<t>* aux= new ItemsSQ<t>;
        aux->key = item;
        aux->next = NULL;
        if(front == NULL){ //sincronizacion de variables; 
            front = aux;
            cend = aux;
        }
        else{
            cend->next = aux;
            cend = aux;
        }
    }
    /// @brief Del front
    /// @return true success, false fail
    bool del_front(){
        if(front != NULL){
            ItemsSQ<t> *aux = front;
            front = aux->next;
            delete aux;
            aux = nullptr;
            return true;
        }
        return false;
    };
    ItemsSQ<t>* get_front(){return front;};
    ItemsSQ<t>* get_end(){return cend;}
};
}
#endif