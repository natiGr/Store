/*
 * Store.cpp
 *
 *  Created on: 16.05.2017 ã.
 *      Author: ddada
 */

#include "Store.h"
#include"Tool.h"

Store::Store():StoreTools( "store.dat", ios::in | ios::binary ) {

	  if ( !StoreTools )
	   {
	      cerr << "File could not be opened." << endl;
	      StoreTools.open("store.dat", ios::out);
	      StoreTools.open( "store.dat", ios::in | ios::binary );
	      initialize();
	   }


}

void Store::addTool() {
	int recordNumber;
	cout<<"Enter new id number"<<endl;
	cin>>recordNumber;

	 StoreTools.seekg( ( recordNumber - 1 ) * sizeof( Tool ) );
	 Tool tool;
	StoreTools.read( reinterpret_cast< char * >( &tool ),
	       sizeof( Tool) );
	 if ( tool.getIdNumber() == 0 ) {

		 string name;
		 int cost;
		 int amount;
		  cout << "Enter name of tool, Cost,Amount\n? ";
		      cin >> setw( 10 ) >> name;
		      cin >> cost;
		      cin >> amount;

		      tool.setName(name);
		      tool.setCost(cost);
		      tool.setAmount(amount);
		      tool.setIdNumber(recordNumber);

		      StoreTools.seekp( ( recordNumber - 1 ) * sizeof( Tool ) );
		      StoreTools.write( reinterpret_cast< const char * >( &tool ),
		               sizeof( Tool ) );
	 }
	   else // display error if account already exists
	      cerr << "Tool #" << recordNumber
	         << " already contains information." << endl;
	}




void Store::ReadTools() {
Tool t1;
while(!StoreTools.eof()){
	StoreTools.read( reinterpret_cast< char * >( &t1 ),
		       sizeof( Tool) );
	t1.Print();
}
}

void Store::WriteTools() {
}

void Store::deleteTool() {
}

void Store::Print(ostream& char_traits, const Store&) {
}

void Store::initialize() {
	Tool blanktool;
	for(int i=0;i<10;i++){
		StoreTools.write( reinterpret_cast< const char * >( &blanktool ),
		 sizeof( Tool ) );
	}
}

Store::~Store() {
	// TODO Auto-generated destructor stub
}

