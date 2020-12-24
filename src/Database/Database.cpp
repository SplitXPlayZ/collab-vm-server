#include <iostream> 
#include <sqlite3.h>

#include "Database.h"
#include "Config-odb.hxx"
#include "VMSettings-odb.hxx"
	
int main() 
{ 
    sqlite3* db; 
    
    int exit = 0;
    exit = sqlite3_open("collab-vm.db", &db); 
  
    if (exit) { 
        
        cout << "DB Open Error: " << sqlite3_errmsg(db) << endl; 
        
    } else {

        cout << "Opened Database Successfully!" << endl; 
    }
    
    sqlite3_close(db); 
    
    return (0); 
} 
