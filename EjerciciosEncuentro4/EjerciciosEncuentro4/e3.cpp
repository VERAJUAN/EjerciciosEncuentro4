#include "stdafx.h"
#include <algorithm>  
#include <iostream>

using namespace std;


void swap_1(int *p1, int *p2) {
	cout << "\nANTES:\np1 = " << p1 << "\np2 = " << p2 << "\n";
	swap(p1, p2);
	cout << "\nAHORA:\np1 = " << p1 << "\np2 = " << p2 << "\n";
}

void swap_2(int &p3, int &p4) {
	cout << "\nANTES:\np1 = " << p3 << "\np2 = " << p4 << "\n";
	swap(p3, p4);
	cout << "\nAHORA:\np1 = " << p3 << "\np2 = " << p4 << "\n";
}