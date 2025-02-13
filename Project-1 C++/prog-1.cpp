#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;
    
    char grade = (score >= 90) ? 'A' :
                 (score >= 80) ? 'B' :
                 (score >= 70) ? 'C' :
                 (score >= 60) ? 'D' :
                 (score >= 50) ? 'E' : 'F';
    
    cout << "Your grade is " << grade << endl;

    switch (grade) {
        case 'A':
            cout << "Excellent work";
            break;
        case 'B':
            cout << "Well Done";
            break;
        case 'C':
            cout << "Good job";
            break;
        case 'D':
            cout << "You Passed but you could do better";
            break;
        case 'F':
            cout << "Sorry you failed";
            break;
        default:
            cout << "Invalid grade";
    }

    if(grade == 'A' || grade == 'B'  || grade == 'C' || grade == 'D')
    {
        cout<<" You are elligible for next the level!";
    }else{
        cout<<" You aren't elligible for the next level!";
    }
    

    return 0;
}
