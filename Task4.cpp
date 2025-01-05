#include<bits/stdc++.h>
using namespace std;

class toDoList {
public:
    vector<string> tasks;

    void addTask(string task) {
        cout << "Task added: " << task << endl;
        tasks.push_back(task);
    }

    void removeTask(int taskIndex) {
        if (taskIndex < 1 || taskIndex > tasks.size()) {
            cout << "Invalid task number!" << endl;
            return;
        }
        cout << "Task removed: " << tasks[taskIndex - 1] << endl;
        tasks.erase(tasks.begin() + taskIndex - 1);
        displayTasks();
    }

    void displayTasks() {
        if (tasks.empty()) {
            cout << "No tasks to display!" << endl;
            return;
        }
        cout << "Tasks: " << endl;
        for (int i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }

    void markTaskAsDone(int taskIndex) {
        if (taskIndex < 1 || taskIndex > tasks.size()) {
            cout << "Invalid task number!" << endl;
            return;
        }
        tasks[taskIndex - 1] += " (Done)";
        cout << "Task marked as done: " << tasks[taskIndex - 1] << endl;
        displayTasks();
    }
};

int main() {
    cout << "===========\n"
         << "To Do List\n"
         << "===========\n";

    toDoList todo;
    int operation;

    while (true) {
        cout << "\nEnter which operation you want to perform: " << endl;
        cout << "1. Add Task" << endl;
        cout << "2. Remove Task" << endl;
        cout << "3. Mark Task as Done" << endl;
        cout << "4. View Tasks" << endl;
        cout << "5. Exit" << endl;

        cin >> operation;
        cin.ignore(); // To handle newline character after integer input

        if (operation == 5) {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }

        switch (operation) {
        case 1: {
            string task;
            cout << "Enter the task you want to add: ";
            getline(cin, task);
            todo.addTask(task);
            break;
        }
        case 2: {
            int taskNumber;
            cout << "Enter the task number you want to remove: ";
            cin >> taskNumber;
            todo.removeTask(taskNumber);
            break;
        }
        case 3: {
            int taskNumber;
            cout << "Enter the task number you want to mark as done: ";
            cin >> taskNumber;
            todo.markTaskAsDone(taskNumber);
            break;
        }
        case 4:
            todo.displayTasks();
            break;
        default:
            cout << "Invalid operation! Please try again." << endl;
        }
    }

    return 0;
}
