#include <iostream>
using namespace std;

int main()
{
char vowel [] {'a','b', 'c', 'd', 'e'};

cout<< "\nvowel index 2: "<<vowel [2]<<endl;
cout<<"The last vowel is: "<<vowel [4]<<endl;

// cin >> vowel[5];!!

double temp [] {90.1, 89.8, 77.5, 81.6};
cout<< "\nThe first temp is: "<<temp [0]<<endl;

temp[0] =100.7;

cout<< "The first high temp is now: "<<temp[0]<<endl;


int scores[]{100, 90, 40, 56, 60};

cout<< "\nFirst score at index 0: "<<scores[0]<<endl;
cout<< "second score at index 1: "<<scores[1]<<endl;
cout<< "third score at index 2: "<<scores[2]<<endl;
cout<< "fourth score at index 3: "<<scores[3]<<endl;
cout<< "firth score at index 4: "<<scores[4]<<endl;

cout<<"\nEnter 5 test scores";

cin>>scores[0];
cin>>scores[1];
cin>>scores[2];
cin>>scores[3];
cin>>scores[4];

cout<<"\nThe updated array is: "<<endl;
cout<<"\nFirst score at index 0: "<<scores[0]<<endl;
cout<<"second score at index 1: "<<scores[1]<<endl;
cout<<"Third core at index 2: "<<scores[2]<<endl;
cout<< "fourth score at index 3: "<<scores[3]<<endl;
cout<< "firth score at index 4: "<<scores[4]<<endl;

cout<<"\nNotice what the value of the array name is: "<<scores<<endl;

cout<<endl;


return 0;
}