#include <iostream>
#include <iomanip>

using namespace std;

struct Grade {
    int id;
    int *grades;
    int size;
};


Grade *newGrade(int id, int size) {
    Grade *g = new Grade;
    g->id = id;
    g->size = size;
    g->grades = new int[size];
    return g;
}


double avgGrade(Grade &grade) {
    if (!grade.size)
        return 0.0;

    double avg = 0.0;
    for (int i = 0; i < grade.size; ++i)
        avg += grade.grades[i];

    return avg / grade.size;
}


int main(void) {

    int n_courses;

    cout << "Enter number of courses: ";
    cin >> n_courses;

    Grade **grades = new Grade *[n_courses];

    for (int i = 0; i < n_courses; ++i) {
        cout << "course " << i + 1 << endl;
        cout << "Enter number of grades -> ";
        int size;
        cin >> size;
        grades[i] = newGrade(i + 1, size);
        for (int j = 0; j < size; ++j) {
            cout << "Enter grade " << j + 1 << " -> ";
            cin >> grades[i]->grades[j];
        }
        
    }


    double overall_final = 0.0;
    for (int i = 0; i < n_courses; ++i) {
        double avg_grade = avgGrade(*grades[i]); 

        cout << "Course " << grades[i]->id << ": ";
        cout << "final ";
        cout << fixed << setprecision(2) << avg_grade << ", ";
        cout << "grades: ";

        for (int j = 0; j < grades[i]->size; ++j) {
            cout << grades[i]->grades[j] << " ";
        }

        cout << endl;
        overall_final += avg_grade / n_courses;       
    }
    cout << "Overall final " << overall_final << endl;


    for (int i = 0; i < n_courses; ++i){
        delete[] grades[i]->grades;
        delete grades[i];
    }

    delete[] grades;

    return 0;
}