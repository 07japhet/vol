#include <iostream>

int main() {
using namespace std;
int counter,comp, marks,math, total;
float Average;
string name1;
cout<<"Enter number of student:"<<endl;
cin>>counter;
for(int x=1;x<=counter;x=x+1);
{cout<<"Enter student name :"<<endl;
cin>>name1;
cout<<"Enter computer marks:"<<endl;
cin>>comp;
cout<<"Enter math mark:"<<endl; 
cin>>math;
total=comp+math;
Average=total/2;
cout<<"student name:"<<name1<<endl;
cout<<"total mark:"<<total<<endl;
cout<<"average mark:"<<Average<<endl;
}

	return 0;
}
