#include<forward_list>
#include<stack>
#include<queue>
#include<iostream>
#include<iomanip>


const static int LIST_LENGTH = 100;

int main()
{
	std::stack<int> stackOfIntegers;
	std::queue<int> queueOfIntegers;
	std::forward_list<int> forwardListOfIntegers;

	for (int i = 0; i < LIST_LENGTH; ++i)
	{
		stackOfIntegers.push(i);
		queueOfIntegers.push(i);
		forwardListOfIntegers.push_front(i);
	}



	std::cout << "Numbers 0-99 inserted into the following containers:\n";
	std::cout << "         | stack | queue | forward_list\n";


	for (int i = 0; i < LIST_LENGTH; ++i)
	{
		std::cout << "Pop #" << std::left << std::setw(3) << (i + 1) << " |  " << std::setw(3) << stackOfIntegers.top() << "  |  "
			<< std::setw(3) << queueOfIntegers.front() << "  |  "
			<< std::setw(3) << forwardListOfIntegers.front() << std::endl;
	

		stackOfIntegers.pop();
		queueOfIntegers.pop();
		forwardListOfIntegers.pop_front();

	}



	return 0;
}