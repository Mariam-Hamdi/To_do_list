#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <string>
using namespace std;

// struct لل task ...زي ما كنا بنعمل class لل Node
struct Task {
    string description;
    bool done;
    Task* next;
};

//class لل todolist ...زي ما كنا بنعمل class لل linked list
class TodoList {
private:
    Task* head;

public:
    // بنعمل prototype للفانكشن اللي عندي وال constructor
    TodoList();
int k=0;
    // Function to add a task
    void addTask(const string& description);

    // Function to remove
    void removeTask( const string& description);

    // Function to display
    void displayTodoList();

    // Function to mark a task as done
    void markTaskDone( const string& description);

    // Function to check if a task is done
    bool isTaskDone( const string& description);
    void getTaskDn();
void getcount();
    // Destructor to free memory allocated for tasks
    ~TodoList();
};


#endif // HEADER_H_INCLUDED
