#pragma once
#include<iostream>
#include"User.h"
using namespace std;

class Service:public User {
public:
	void meniu() {
		int opt;
		do {
			cout << "1->testare lista" << endl;
			cout << "2->testare Coada" << endl;
			cout << "3->testare Deque" << endl;
			cout << "4->testare Set " << endl;
			cout << "5->testare Stiva" << endl;
			cin >> opt;
		
			switch (opt) {
			case 1:
				User::testareLista();
				break;
			case 2:
				User::testareCoada();
				break;
			case 3:
				User::testareDeque();
				break;
			case 4:
				User::testareSet();
				break;
			case 5:
				User::testareStiva();
				break;
			
			
			
			
			}
		
		
		
		
		
		} while (opt != 0);
	
	
	
	
	
	}





};