// #include <iostream> 
// using namespace std;
// int main(){
//     int arr[6]= {0,3,6,7,8,11};
//     int value = arr[0]; 
//     for(int i =0 ; i < 6 ;i++){
//         if(value <= arr[i+1]){
//             value = arr[i+1];
//         }
//     }
//     cout << value;
//     return 0 ; 
// }
 
// exercise 1 
#include <iostream> 
using namespace std;
int main (){
cout << "Hello Everyone! My name is Jame"; 
return 0  ;
}

//Exercise 2 
#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    int age;
    double gpa;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your GPA: ";
    cin >> gpa;
    cout << " Name: " << name << endl
         << " Age: " << age << endl 
         << " GPA: " << gpa << endl ;
    return 0;
}


// Exercise 3 
#include <iostream>
using namespace std;
int main() {
    int score1, score2;
    cout << "Enter score 1: ";
    cin >> score1;
    cout << "Enter score 2: ";
    cin >> score2;
    double average = (score1 + score2) / 2.0;
    cout << "Average: " << average  << endl;
    if (average >= 50) {
        cout << "Pass" ;
    } else {
        cout << "Fail" ;
    }
    return 0;
}


// Exercise 4
#include <iostream>
using namespace std;
int main() {
    int score1, score2;
    cout << "Enter score 1: ";
    cin >> score1;
    cout << "Enter score 2: ";
    cin >> score2;
    double average = (score1 + score2) / 2.0;
    cout << "Average: " << average << endl;
    if (average >= 90) {
        cout << "Grade: A" ;
    }
    else if (average >= 80) {
        cout << "Grade: B" ;
    }
    else if (average >= 70) {
        cout << "Grade: C" ;
    }
    else if (average >= 60) {
        cout << "Grade: D" ;
    }
    else {
        cout << "Grade: F" ;
    }
    return 0;
}


// Exercise 5 
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
    return 0;
}


//Exercise 6 
#include <iostream>
using namespace std;
int main() {
    int scores[6] = {75, 90, 65, 88, 95, 70};
    int maxValue = scores[0];
    int maxIndex = 0;
    for (int i = 1; i < 6; i++) {
        if (scores[i] > maxValue) {
            maxValue = scores[i];
            maxIndex = i;
        }
    }
    cout << "Maximum value: " << maxValue <<endl ;
    cout << "Index: " << maxIndex << endl ;
    return 0;
}



//Exercise 7
#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;
    int count = 0;
    cout << "Enter a word: ";
    cin >> word;
    for (int i = 0; i < word.length() ; i++) {
        if (word[i] == 'a' ||
            word[i] == 'e' ||
            word[i] == 'i' ||
            word[i] == 'o' ||
            word[i] == 'u') {
            count++;
        }
    }
    cout << "Number of vowels: " << count ;
    return 0;
}


//Exercise 8 
#include <iostream>
using namespace std;
void doubleByValue(int x) {
    x = x * 2;
}
void doubleByReference(int &x) {
    x = x * 2;
}
int main() {
    int num = 10;
    doubleByValue(num);
    cout << "After doubleByValue: " << num << endl;
    doubleByReference(num);
    cout << "After doubleByReference: " << num << endl;
    return 0;
}


//Exercise 9 
#include <iostream>
using namespace std;
int main() {
    int x = 25;
    int* ptr = &x;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    *ptr = 99;
    cout << "After changing *ptr:" << endl;
    cout << "Value of x: " << x << endl;
    return 0;
}


//Bonus 
#include <iostream>
using namespace std;
double calculateAverage(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return (double)total / size;
}
char calculateGrade(double score) {
    if (score >= 90) {
        return 'A';
    }
    else if (score >= 80) {
        return 'B';
    }
    else if (score >= 70) {
        return 'C';
    }
    else if (score >= 60) {
        return 'D';
    }
    else {
        return 'F';
    }
}
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int scores[n];
    // Read scores
    for (int i = 0; i < n; i++) {
        cout << "Enter score for student "
             << i + 1 << ": ";
        cin >> scores[i];
    }
    // Print each score and grade
    cout << "\nStudent Grades:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1
             << ": " << scores[i]
             << " - Grade: "
             << calculateGrade(scores[i])
             << endl;
    }
    // Calculate and print average
    double average = calculateAverage(scores, n);
    cout << "\nClass Average: "
         << average << endl;
    return 0;
}