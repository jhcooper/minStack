#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <stack>
#include <cstdlib>

class MinStack {
private:
	stack<int>s;
	int min;
// to be implemented
public:
	void push(int item );
	int pop();
	int findMin();
};
