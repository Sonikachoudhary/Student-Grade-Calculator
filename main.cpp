#include <iostream>
#include <string>
using namespace std;
int main() {

int numberOfStudents;
int choice;
cout << "\n====Student Grade calculator====\n";
cout << "1. Calculate Student Result\n";
cout<< "2. Exit\n";
cout << "Enter your choice:";
cin >> choice;

cout << "Enter number of students:";
cin >> numberOfStudents;
if (choice ==2){
cout << "Thank you for using student Grade Calculator!" <<endl;
return 0;
}
if (choice !=1){
cout<<"Invalid choice!"<<endl;
return 0;
}

for (int i = 1;i <= numberOfStudents;i++){
  string name;
  cout<< "Enter student name:";
  cin>> name;
  int Maths, Physics, Chemistry, Computer, English;
  bool valid = true;
  
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

  if (Maths < 0 || Maths > 100 ||
    Physics < 0 || Physics > 100 ||
    Chemistry < 0 || Chemistry > 100 ||
    Computer < 0 || Computer > 100 ||
    English < 0 || English > 100) {

    cout << "Invalid marks! Marks should be between 0 and 100." <<endl;
    valid = false;
    }

    if (!valid)
    return 0;
    
  int total= Maths + Physics + Chemistry + Computer + English;
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
  if (percentage>=40)
    cout<< "Result: Pass"<<endl;
  else
    cout<< "Result: Fail" <<endl;       
    }
  return 0;
}
