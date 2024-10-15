#include "header.h"
#include <iostream>



// Constructor to initialize an empty to-do list
TodoList::TodoList() : head(nullptr) {}

/* احنا هنا عملنا newtask واللي هي بتمثل في الlist الnewnode
و ال data بتاعتها هنا هي ال string
ولما بنضيف بنضيف من اول الlist
*/


// Function to add a task to the to-do list
void TodoList::addTask(const string& description) {
    Task* newTask = new Task;
    newTask->description = description;
    newTask->done = false;
    newTask->next = head;
    head = newTask;
    k++;
    cout << "Task added successfully.\n==========\n";
}

// Function to remove a task from the to-do list
void TodoList::removeTask(const string& description) {
    Task* current = head;
    Task* prev = nullptr;
    while (current != nullptr) {
        if (current->description == description) {
            if (prev == nullptr) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            delete current;
            cout << "Task removed successfully.\n==========\n" << endl;
            return;
        }
        prev = current;
        current = current->next;
    }
    cout << "Task not found.\n==========\n" << endl;
}

// Function to display the to-do list
void TodoList::displayTodoList() {
    Task* current = head;
    if (current == nullptr) {
        cout << "Todo list is empty.\n==========\n" << endl;
        return;
    }
    cout << "To-Do List:" << endl;
    while (current != nullptr) {
        cout << "- " << current->description;
        if (current->done) {
            cout << " (DONE)";
        }
        cout << endl;
        current = current->next;
    }
}

// Function to mark a task as done
void TodoList::markTaskDone(const string& description) {
    Task* current = head;
    while (current != nullptr) {
        if (current->description == description) {
            current->done = true;
            cout << "Task marked as done.\n==========\n" << endl;
            return;
        }
        current = current->next;
    }
    cout << "Task not found.\n==========\n" << endl;
}

// Function to check if a task is done
bool TodoList::isTaskDone(const string& description) {
    Task* current = head;
    while (current != nullptr) {
        if (current->description == description) {
            return current->done;
        }
        current = current->next;
    }
    return false;
}
void TodoList::getTaskDn(){
Task*current=head;
int c=0;
if(current==nullptr)
    cout<<"there is not any task is done.\n==========\n";
while(current!=nullptr)
{  if(current->done){
cout<< current->description<<"  ";
c++;
}

     current = current->next;
} if(c==0)
    cout<<"there is not any task is done.\n==========\n";


} void TodoList::getcount()
{ cout<<k<<" ";

}

// Destructor to free memory allocated for tasks
TodoList::~TodoList() {
    while (head != nullptr) {
        Task* temp = head;
        head = head->next;
        delete temp;
    }
}

