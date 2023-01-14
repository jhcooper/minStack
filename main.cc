#include "minstack.h"
#include <stack>
using namespace std;



int main()
{
    int choice;
    int num;
    MinStack x;

    while(true){
	    cout << "Here are your choices: " << endl << "1 -> push | 2 -> pop | 3 -> Get Min | 4 -> Exit" << endl;
	    cout << "enter num of the choice you want to do" << endl;
	    cin >> choice;
	    switch(choice){
		    case 1:
			    cout << "enter num to push: "<< endl;
			    cin >> num;
			    x.push(num);
			    break;
		   case 2:
			    x.pop();
			    break;
		   case 3:
			    cout << "min: " << x.findMin()<<endl;
			    break;
		   case 4:
			    return 0;
		   default:
			    cout << "invalid choice" << endl;
			    return 0;
		}
    }
			    
}

