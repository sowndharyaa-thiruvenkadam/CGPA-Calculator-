#include <iostream>
#include <iomanip>
using namespace std;

class StudentGPA
{
private:
  int totalSubjects;
  int totalCredits = 0;
  double totalGradePoints = 0.0;

public:
  void inputDetails()
  {
    cout << "Enter the total number of subjects: ";
    cin >> totalSubjects;

    for (int i = 1; i <= totalSubjects; ++i)
    {
      double marks, credits;

      cout << "\nEnter the marks for subject " << i << " out of 100: ";
      cin >> marks;
      cout << "Enter credits for subject " << i << ": ";
      cin >> credits;

      totalCredits += credits;

      double gradePoints;
      if (marks >= 90 && marks <= 100)
      {
        gradePoints = 10;
      }
      else if (marks >= 80 && marks < 90)
      {
        gradePoints = 9;
      }
      else if (marks >= 70 && marks < 80)
      {
        gradePoints = 8;
      }
      else if (marks >= 60 && marks < 70)
      {
        gradePoints = 7;
      }
      else if (marks >= 50 && marks < 60)
      {
        gradePoints = 6;
      }
      else if (marks >= 40 && marks < 50)
      {
        gradePoints = 5;
      }
      else
      {
        gradePoints = 0;
      }
      totalGradePoints += gradePoints * credits;
    }
  }

  void calculateCGPA()
  {
    double CGPA = totalGradePoints / totalCredits;
    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Accumulated CGPA out of 10: " << fixed << setprecision(2) << CGPA << endl;
  }
};

int main()
{
  StudentGPA student;
  student.inputDetails();
  student.calculateCGPA();

  return 0;
}
