#include <stack>
#include "minstack.h"
using namespace std;

void MinStack::push(int item)
    {
        if (s.empty())
        {
            s.push(item);
            min = item;
        }
        else if (item > min) {
            s.push(item);
        }
        else {
            s.push(2*item - min);
            min = item;
        }
    }
 
    // Removes the top element from the stack
int MinStack::pop()
    {
        if (s.empty()) {
            cout << "the stack is empty! returning zero!" << endl;
            return 0;
        }
 
        int top = s.top();
        if (top < min) {
            min = 2*min - top;
        }
        s.pop();
	return top;
    }
 
    // Returns the minimum element from the stack in constant time
int MinStack::findMin() {
        return min;
    }


