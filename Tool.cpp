/*
 * Tool.cpp
 *
 *  Created on: 16.05.2017 ã.
 *      Author: ddada
 */

#include "Tool.h"



Tool::Tool(string name, int cost, int idNumber,int amount) {
	setName(name);
	setCost(cost);
	setIdNumber(idNumber);
	setAmount(amount);
}

Tool::~Tool() {
	// TODO Auto-generated destructor stub
}

int Tool::getCost() const {
	return cost;
}

void Tool::setCost(int cost) {
	this->cost = cost;
}

int Tool::getIdNumber() const {
	return idNumber;
}

void Tool::setIdNumber(int idNumber) {
	this->idNumber = idNumber;
}

const string& Tool::getName() const {
	return name;
}

void Tool::setName(const string& name) {
	this->name = name;
}

int Tool::getAmount() const {
	return amount;
}

void Tool::setAmount(int amount) {
	this->amount = amount;
}

Tool::Tool() {
	setName("");
	setCost(0);
	setIdNumber(0);
	setAmount(0);
}

void Tool::Print() {
	cout<<"Name is "<<getName()<<"Cost is "<<getCost()<<"Amount is "<<getAmount()<<"Id number is "<<getIdNumber()<<endl;
}
