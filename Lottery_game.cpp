#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{ int L, La, L1, L2, L3, G, Ga, G1, G2, G3, X1, X2, X3;
 srand(time(NULL));
 L = rand() % 1000;
 cout<< "input a 3 digit number"<<endl;
 cin>>G;
 L1= L /100;
 La=L % 100;
 L2=La / 10;
 L3=La % 10;
 G1=G / 100;
 Ga=G % 100;
 G2=Ga / 10;
 G3=Ga % 10;
 cout<<"the Machine displays"<<L<<endl;
 if (L1 != G1) X1=0;
 else if (L1 == G1) X1=1;
 if (L2!= G2) X2=0;
 else if (L2 == G2 ) X2 = 1;
 if (L3!=G3) X3=0;
 else if (G2 ==G3 ) X3 =1;
 if (X1+X2+X3 ==3)
    cout<<"you win $10,000"<<endl;
 else if (X1+X2+X3==2)
    cout<<"you win $5,000"<< endl;
 else if (X1+X2+X3==1)
    cout<<"you win $1,000"<< endl;
 else if (X1+X2+X3==0)
    cout<<" you lose!"<<endl;

    return 0;
}
