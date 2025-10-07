#include <iostream>
using namespace std; 

double findAverage (int* scores, int size);

double findAverage (int* scores, int size){
    int sum = 0;
    
    for (int i = 0; i < size ; i++){
        sum = sum + scores[i];
    }
    double avg = double(sum)/size;
    return avg;
}

int main (){
    int n;
    cout << "How many students are there : ";
    cin >> n;
    int scores[n];

    for (int i = 0; i < n; i++)
    { 
        cout << "enter score" << (i + 1) << ":";
        cin >> scores[i];
        /* code */
    }
    for (int i = 0; i<n; i++ ){
        cout << "score" << (i + 1 ) << " = " << scores[i] << endl;
    }
    double avg = findAverage(scores, n);
    cout << "The average score is : " << avg << endl;
} 