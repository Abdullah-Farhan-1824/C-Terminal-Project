#include <iostream>
#include <string>
using namespace std;

string tasks[10];
int taskCount = 0;

void addTask() {
    if (taskCount >= 10) {
        cout << "Task limit reached! You can only add up to 10 tasks." << endl;
        return ;    // using only return ,exits the function
    }
    string task;
    cout << "Enter task: ";
    cin.ignore();       //ignore enter(\n) to use properly getline
    getline(cin, task);     //reads input with spaces
    tasks[taskCount] = task;
    taskCount++;
    cout << "Task added!" << endl;
}

void showTasks() {
    if (taskCount == 0) {
        cout << "No tasks found!" << endl;
        return;
    }
    cout << "\n--- Your Tasks ---" << endl;
    for (int i = 0; i < taskCount; i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
    cout << "------------------" << endl;
}

void deleteTask() {
    if (taskCount == 0) {
        cout << "No tasks to delete!" << endl;
        return;
    }
    showTasks();
    int num;
    cout << "Enter task number to delete: ";
    cin >> num;
    if (num < 1 || num > taskCount) {
        cout << "Invalid task number!" << endl;
        return;
    }
    for (int i = num - 1; i < taskCount - 1; i++) {
        tasks[i] = tasks[i + 1];
    }
    taskCount--;
    cout << "Task deleted successfully!" << endl;
}

void exitProgram() {                //to exit the program
    cout << "Thank You!!" << endl;
    exit(0);
}

int main() {
    addTask();
    showTasks();
    deleteTask();
    exitProgram();
    return 0;
}
