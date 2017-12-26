/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int isEmployee(vector<int> subordinates, int id)
    {
        vector<int>::iterator it;
        for (it=subordinates.begin(); it!=subordinates.end(); it++)
        {
            if ((*it) == id)
            {
                subordinates.erase(it);
                return 1;
            }
        }
        return 0;
    }

    int getImportance(vector<Employee*> employees, int id) 
    {
        vector<Employee*>::iterator it, employer_index;
        vector<int> employee_list;
        int flag = 0;
        int importance = 0;
        for (it=employees.begin(); it!=employees.end(); it++)
        {
            if (!flag)
            {
                if ((*it)->id == id)
                {
                    employer_index = it;
                    employee_list = (*it)->subordinates;
                    importance += (*it)->importance;
                    flag = 1;
                }
            }
            else
            {
                if (isEmployee(employee_list, (*it)->id))
                {
                    importance += (*it)->importance;
                }
            }
        }
        for (it=employees.begin(); it!=employer_index; it++)
        {
            if (isEmployee(employee_list, (*it)->id))
            {
                importance += (*it)->importance;
            }
        }

        return importance;
    }
};