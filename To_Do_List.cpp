#include <bits/stdc++.h>
using namespace std;
#define fast_io()                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define pb push_back
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define all(vec) vec.begin(), vec.end()
#define ins insert
#define ld long double
#define ll long long
#define ull unsigned long long

class ToDoList
{
private:
    struct Task
    {
        string description;
        bool completed;

        Task(const string &desc) : description(desc), completed(false) {}
    };

    vector<Task> tasks;

public:
    void addTask(const string &taskDescription)
    {
        tasks.push_back(Task(taskDescription));
        cout << "Task added successfully." << endl;
    }

    void viewTasks() const
    {
        if (tasks.empty())
        {
            cout << "No tasks available." << endl;
        }
        else
        {
            cout << "Tasks:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i)
            {
                cout << "[" << i + 1 << "] ";
                cout << (tasks[i].completed ? "[X] " : "[ ] ");
                cout << tasks[i].description << endl;
            }
        }
    }

    void markTaskAsCompleted(int taskIndex)
    {
        if (isValidIndex(taskIndex))
        {
            tasks[taskIndex - 1].completed = true;
            cout << "Task marked as completed." << endl;
        }
        else
        {
            cout << "Invalid task index." << endl;
        }
    }

    void removeTask(int taskIndex)
    {
        if (isValidIndex(taskIndex))
        {
            tasks.erase(tasks.begin() + taskIndex - 1);
            cout << "Task removed successfully." << endl;
        }
        else
        {
            cout << "Invalid task index." << endl;
        }
    }

private:
    bool isValidIndex(int taskIndex) const
    {
        return taskIndex >= 1 && taskIndex <= static_cast<int>(tasks.size());
    }
};

int main()
{
    ToDoList toDoList;
    int choice;

    do
    {
        cout << "\n===== To-Do List Manager =====\n";
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string taskDescription;
            cout << "Enter task description: ";
            cin.ignore();
            getline(cin, taskDescription); // Read the entire line
            toDoList.addTask(taskDescription);
            break;
        }
        case 2:
            toDoList.viewTasks();
            break;
        case 3:
        {
            int taskIndex;
            cout << "Enter task index to mark as completed: ";
            cin >> taskIndex;
            toDoList.markTaskAsCompleted(taskIndex);
            break;
        }
        case 4:
        {
            int taskIndex;
            cout << "Enter task index to remove: ";
            cin >> taskIndex;
            toDoList.removeTask(taskIndex);
            break;
        }
        case 0:
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 0);

    return 0;
}
