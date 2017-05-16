/*
 * Tool.h
 *
 *  Created on: 16.05.2017 ã.
 *      Author: ddada
 */

#ifndef TOOL_H_
#define TOOL_H_
#include<string>
#include<iostream>
using namespace std;

class Tool {
public:
	Tool(string,int,int,int);
Tool();
    void Print();
	virtual ~Tool();
	int getCost() const;
	void setCost(int cost);
	int getIdNumber() const;
	void setIdNumber(int idNumber);
	const string& getName() const;
	void setName(const string& name);
	int getAmount() const;
	void setAmount(int amount);

private:
	string name;
	int cost;
	int idNumber;
int amount;
};

#endif /* TOOL_H_ */
