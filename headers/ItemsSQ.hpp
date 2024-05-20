#ifndef ITEMS_SQ_HPP
#define ITEMS_SQ_HPP
namespace list_g{
/// @brief ItemQueue is item of Queue and Stack.
/// @tparam t_cl 
template<class t_cl>
struct ItemsSQ
{
    t_cl key;
    ItemsSQ<t_cl> *next;
};
}
#endif