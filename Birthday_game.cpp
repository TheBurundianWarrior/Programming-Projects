#include <iostream>

using namespace std;

int main()

{

int set1, set2, set3, set4, set5,set2a,set3a,set4a,set5a;

cout<< "This program will guess your birthday. \n Please reply by  1 (true) or 0(false) \n when the computer asks for hints."<< endl;

cout <<"is your birthday in set 1? : "<<endl<< "set1 = { 1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31 }"<< endl;

cin >> set1;

cout << " is your birthday in set 2? : " << endl << "set2 = { 2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31 }" << endl;

cin >> set2;

set2a = set2 * 2;

cout << "Is your birthday in set 3? :" << endl << "set3 = { 4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31 }" << endl;

cin >> set3;

set3a = set3 * 4;

cout << "is your birthday in set 4? " << endl << "set4= { 8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31 }" << endl;

cin >> set4;

set4a = set4 * 8;

cout << "is your birthday in set5? " << endl << "set5= { 16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31 }" << endl;

cin>>set5;

set5a = set5 * 16;

cout << " your birthday is on the " << set1 + set2a + set3a + set4a + set5a << " of the month" << endl;

return 0;

}



