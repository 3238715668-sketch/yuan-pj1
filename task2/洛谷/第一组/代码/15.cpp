#include <iostream>
using namespace std;

int main() {
    int homework, quiz, finalExam; 
    cin >> homework >> quiz >> finalExam;
    cout << (homework * 20 + quiz * 30 + finalExam * 50) / 100 << "\n";
    return 0;
}