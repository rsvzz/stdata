# dt_common
## Use Lib QUEUE, STACK, TREEBIT are struct data.
## First add include and namespace
### Lib use generic type
```
using namespace dt_common; You need this
```
## Use QUEUE
```
#include "headers/Queue.hpp"
```
```
Queue<int> _queue;
_queue.add(1);
_queue.add(2);
_queue.add(3);
_queue.add(4);

while (_queue.get_front() != NULL)
{
    cout<<_queue.get_front()->key<<", ";
    _queue.del_front(); 
}
```
result 1, 2, 3, 4,  
## Use STACK
```
#include "headers/Stack.hpp"
```
```
Stack<int> _sk;
_sk.add(1);
_sk.add(2);
_sk.add(3);
_sk.add(4);

while (_sk.get_top() != NULL)
{
    cout<<_sk.get_top()->key<<", ";
    _sk.del_top(); 
}
```
result 4, 3, 2, 1, 


