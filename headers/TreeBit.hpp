#ifndef TREE_BIT_HPP
#define TREE_BIT_HPP
#include "ItemsTreeBit.hpp"
using namespace list_g;
namespace list_g{
    /// @brief type data
    /// @tparam k typename key 
    /// @tparam t class type items
    template<class k, class t>
    class TreeBit
    {
    private:
        ItemsTreeBit<k, t> *tree;
        /// @brief Run all tree
        /// @param _tree 
        /// @param _aux 
        void add_item(ItemsTreeBit<k, t> *_tree,ItemsTreeBit<k,t> *_aux){
            if( _aux->key > _tree->key){
                if(_tree->right == NULL){
                    _tree->right = _aux;
                    return;
                }
                else
                    add_item(_tree->right, _aux);
            }
            else{
                    if(_tree->left == NULL){
                        _tree->left = _aux;
                        return;
                    }
                    else
                         add_item(_tree->left, _aux);
                }
                
        };
        t* search_tree_key(ItemsTreeBit<k,t> *_tree, k key){
            if(_tree == NULL)
                return NULL;
            if(key == _tree->key)
                return _tree->item;
            
            if(key > _tree->key)
               return search_tree_key(_tree->right, key);
            else
                return search_tree_key(_tree->left, key);
        };
    public:
        TreeBit(){tree = NULL;};
        ~TreeBit(){};
        /// @brief Add item to tree
        /// @param key key id
        /// @param item obj 
        void add(k key, t* item){
            ItemsTreeBit<k, t> *aux = new ItemsTreeBit<k, t>;
            aux->item = item;
            aux->key = key;
            aux->right = NULL;
            aux->left = NULL;
            if(tree == NULL)
                tree = aux;
            else
                add_item(tree, aux);
        };

        t* find_by_key(k key){
            if(tree != NULL){
                if(tree->key == key)
                    return tree->item;

                if(key > tree->key)
                    return search_tree_key(tree->right, key);
                else
                    return search_tree_key(tree->left, key);
            }
            return NULL;
        };
    };

}
#endif