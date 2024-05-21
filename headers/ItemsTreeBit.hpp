#ifndef ITEMS_TREE_BIT_HPP
#define ITEMS_TREE_BIT_HPP
namespace dt_common{
/// @brief Items TreeBit
/// @tparam k type key
/// @tparam t_cl type class item
template<typename k, class t_cl>
struct ItemsTreeBit
{
    k key;
    t_cl *item;
    ItemsTreeBit<k, t_cl> *right;
    ItemsTreeBit<k, t_cl> *left;
};
}
#endif