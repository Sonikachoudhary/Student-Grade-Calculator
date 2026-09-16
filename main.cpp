#include <iostream>
using namespace std;
int main() {
  string name;
  cout<< "Enter student name:";
  cin>> name;
  int maths, physics, chemistry, computer, english;
  cout<<" Enter marks for Maths:";
  cin>> Maths;
  cout<< "Enter marks for Physics:";
  cin>> Physics;
  cout<< "Enter marks for Chemistry:";
  cin>> Chemistry;
  cout<< " Enter marks for Computer:";
  cin>> Computer;
  cout<< " Enter marks for English:";
  cin>> English;
  int total= maths + physics + chemistry + computer + english;
  cout<< "Total Marks:" << total << endl;
  float percentage = (total/500.0)*100;
  
    cout<< "Percentage:" << percentage <<"%" <<endl;

  char grade;
  if (percentage>=90)
    grade = 'A';
  else if (percentage>=80)
    grade = 'B';
      else if (percentage>=70)
      grade = 'C';
        else if (percentage>=60)
          grade = 'D';
  else
          grade = 'F';
  cout<<"Grade:"<<grade<<endl;
        
  
  return 0;
}
