/*
 * Store.h
 *
 *  Created on: 16.05.2017 ã.
 *      Author: ddada
 */

#ifndef STORE_H_
#define STORE_H_
#include"Tool.h"
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include<iostream>
using namespace std;

class Store {//za chetene, za pisane,za delete,za dobavqne
public:
	void addTool(  );
	void ReadTools( );
	void WriteTools();
	void deleteTool();
	void Print( ostream&, const Store & );
void initialize();
	Store();
	virtual ~Store();

private:
	fstream StoreTools;


};

#endif /* STORE_H_ */
