#include <iostream>
#include "header.h"
using namespace std;

int main() {
    TodoList todoList;

    int choice;
    do {
        cout << "\nTo-Do List Menu\n";
        cout << "1. Add Task\n";
        cout << "2. Remove Task\n";
        cout << "3. Display To-Do List\n";
        cout << "4. Mark Task as Done\n";
        cout << "5. Check if Task is Done\n";
        cout<<"6. Return the Tasks that are done\n";
        cout<<"7.return count of tasks\n";
        cout << "8. Exit\n";
        cout << "Enter your choice::: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string description;
                cout << "Enter task description::: ";
                cin.ignore();
                getline(cin, description);
                todoList.addTask(description);
                break;
            }
            case 2: {
                string description;
                cout << "Enter task description to remove::: ";
                cin.ignore();
                getline(cin, description);
                todoList.removeTask(description);
                break;
            }
            case 3:
                todoList.displayTodoList();
                break;
            case 4: {
                string description;
                cout << "Enter task description to mark as done::: ";
                cin.ignore();
                getline(cin, description);
                todoList.markTaskDone(description);
                break;
            }
            case 5: {
                string description;
                cout << "Enter task description to check if done::: ";
                cin.ignore();
                getline(cin, description);
                if (todoList.isTaskDone(description)) {
                    cout << "Task is done." << endl;
                } else {
                    cout << "Task is not done." << endl;
                }
                break;
            }

          case 6:
            todoList.getTaskDn();

             break;
             case 7:
                 { cout<<"the number of tasks in my project = ";
            todoList.getcount();

             break;
                 }
            case 8:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}


