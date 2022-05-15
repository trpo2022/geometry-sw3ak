#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	int sk_1, sk_2, zap, toch;
	int a = 0, a1 = 0, a2 = 0, a3 = 0;
	char x, y, r, r1, r2, r3, c[6];
	cout « "Vvedite stroku. Primer: circle(0 0, 1.5)" « endl;
	getline (cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(' ) {
			sk_1 = i+1;
			break;
		}
		else {
			a++;
			if (a<=6){
				c[i] = s[i];
			}
		}
	}
	for (int i = 0; i < s.length(); i++){
		if (s[i] == ' ' ) {
			sk_2 = i+1;
			break;
		}
		else {
			a1++;
		}
	}
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ',' ) {
			zap = i+1;
			break;
		}
		else {
			a2++;
		}
	}
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '.') {
			toch = i+1;
			break;
		}
		else {
			a3++;
		}
	}
	if (strcmp(c, "circle") == 0){
		if ((a<a1) && (a1<a2) && (a2<a3)) {
			if ((a==s.length()) || ((a1==s.length()))) {
				cout « "Error" « endl;
			}
			else {
				x = s[sk_1];
				y = s[sk_2];
				cout « "x = " « x « endl;
				cout « "y = " « y « endl;
			}
			if (a3 == s.length()) {
				r= s[zap + 1];
				cout « "r = " « r « endl;
			}
			else {
				if (a2==s.length()){
					cout « "Error" « endl;
				}
				else {
					r1= s[zap + 1];
					r2 = s[zap + 2];
					r3 = s[toch];
					cout « "r = " « r1 « r2 « r3 « endl;
				}
			}
		}
		else {
			cout « "Error. Posmotrite vnimatelno primer" « endl;
		}
		cout « c « endl;
	}
	else {
		cout « "Error. Figura napisana nepravilno" « endl;
	}

	system("pause");
	return 0;
	}
