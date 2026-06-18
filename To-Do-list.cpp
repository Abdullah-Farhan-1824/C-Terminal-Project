#include <iostream>
#include <string>
using namespace std;

string tasks[10];
int taskcount = 0;

void addtask(){
    if(taskcount >= 10){
    cout << "Task limit reached! You can only add up to 10 tasks." << endl;
    return;                 // using only return ,exits the function
}
string task;
cout << "Enter task: ";
cin.ignore();               //ignore enter(\n) to use properly getline
getline(cin,task);          //reads input with spaces
tasks[taskcount] = task;    //adding task by number ex: 1,2,3....
taskcount++;
cout << "Task added!" << endl;
}

void showtasks(){
    if (taskcount == 0) { 
       cout << "No tasks found! " << endl;
       return ;
    }
  cout << "\n---- Your Tasks ----" << endl;
  for (int i = 0 ; i < taskcount ; i++)
        cout << i+1 << "." << tasks[i] << endl ;    // printing the tasks
   cout << "---------------------" << endl;       
}

void delete_task(){
  if( taskcount == 0 ){  
  cout << "No tasks here! " << endl;
  return ;
  }
    showtasks ();
    int num;
    cout << "Enter task number to delete: " ;
    cin >> num ;
    if (num < 1 || num > taskcount ) {
        cout << "Invalid task number! " << endl ;
        return ; 
    }
    for (int i = num - 1 ; i < taskcount - 1 ; i++ ) {
        tasks[i] = tasks[ i + 1 ];          // replaces the task,ex: if no.4 is deleted,no.5 will replace no.4
    }
    taskcount--;                //to lower the task count
    cout << "Task deleted successfully! " << endl ;
}

void exitprogram() {                //to exit the program
    cout << "Thank You!!" << endl;
    exit(0);
    exit(0); // exits the program successfully
}

int main() {
    while (1) {
    cout << "********* To Do List: **********" << endl;
    cout << "1.Enter a task: " << endl;
    cout << "2.Show tasks: " << endl;
    cout << "3.Delete a task: " << endl;
    cout << "4.Exit " << endl;
    cout << "***********************" << endl;
    int n; cin >> n;
    if (n == 1)
    addtask();
    if (n == 2)
    showtasks();
    if (n == 3)
    delete_task();
    if (n == 4)
    exitprogram();
    if (n < 0 || n > 4  )
    cout << "please, Enter a number between 1-4 !" << endl;
    }
    return 0;
}
