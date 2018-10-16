#include "Lab7MyStack.h"

string stringReversal1(string input)
{
	string newString;
	stack<char> data;
	if (data.empty())
	{
		for (int i(0);  i < input.size(); i++)
		{
			data.push(input.at(i));
		}
		while(!data.empty())
		{
			newString.push_back(data.top());
			data.pop();
		}
	}
	return newString;
}

string stringReversal2(string input)
{
	string newString;
	vector<char> data;
	if (data.empty())
	{
		for (int i(0); i < input.size(); i++)
		{
			data.push_back(input.at(i));
		}
		while (!data.empty())
		{
			newString.push_back(data.back());
			data.pop_back();
		}
	}
	return newString;
}

string stringReversal3(string input)
{
	string newString;
	list<char> data;
	if (data.empty())
	{
		for (int i(0); i < input.size(); i++)
		{
			data.push_back(input.at(i));
		}
		while (!data.empty())
		{
			newString.push_back(data.back());
			data.pop_back();
		}
	}
	return newString;
}