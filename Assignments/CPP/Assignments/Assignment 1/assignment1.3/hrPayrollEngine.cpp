#include <iostream>
using namespace std;

class Employee{
    private:
    int empId;
    string name;
    string department;
    char grade;
    double basicSalary;
    bool isActive;
    static int employeeCount;

    public:
    void setName(const string& n){
        if(name.empty()){
            cout << "Specify Employee Name Please" << endl;
        }
        name = n;
    }

    void setDepartment(const string& dept){
        //dept[] = {"Engineering", "HR", "Finance", "OPerations"};
        cout << "Choose the Department Engineering, HR, Finance, Operations" << endl;
    
        if (dept == "Engineering"){
            department = "Engineering";
        }else if(dept == "HR"){
            department = "HR";
        }else if(dept == "Finance"){
            department = "Finance";
        }else if(dept == "Operations"){
            department = "Operations";
        }else{
            cout << "Error: " << dept << "is not a Registered Department";
        }
    }

    void setGrade(char g){
        cout << "Enter the Character for grade A B C D";
        switch(g){
            case 'A':
                grade = g;
                break;
            
            case 'B':
                grade = g;
                break;
            
            case 'C':
                grade = g;
                break;

            case 'D':
                grade = g;
                break;

            default:
                cout << "Invalid Grade " << g << ". Accepted values: A, B, C, D." << endl;

        }
    }

    void setBasicSalary(double salary){
        cout << "Enter the Basic Salary of Employee: ";
        if(salary > 10000 && salary < 500000){
            basicSalary = salary;
        }else{
            cout << "ERROR: Salary must be between Rs.10,000 and Rs.5,00,000. Value Rejected." << endl;
        }
    }

    void deactivate(){
        if(isActive){
            isActive = false;
            cout << "This Account gets Deactivate." << endl;
        }else{
            cout << "This Account is alredy deactivated." << endl;

        }
    }

    //Public Getter
    int getEmpId()const{
        return empId;
    }

    string getName() const{
        return name;
    }

    string getDepatment() const{
        return department;
    }

    char getGrade() const{
        return grade;
    }

    double getBasicSalary() const{
        return basicSalary;
    }

    bool getIsActive() const{
        return isActive;
    }

    //Business Logic
    double computeAllowance() const{
        if(grade == 'A'){
            return 0.4 * basicSalary;
        }else if(grade == 'B'){
            return 0.3 * basicSalary;
        }else if(grade == 'C'){
            return 0.2 * basicSalary;
        }else if(grade == 'D'){
            return 0.1 * basicSalary;
        }
        return 0;
    }

    double computeGrossSalary() const{
        return basicSalary + computeAllowance();
    }

    double computeTax() const{
        if(computeGrossSalary() <= 50000){
            return 0.0;
        }else if(computeGrossSalary() > 50000 && computeGrossSalary() <= 100000){
            return 0.1 * computeGrossSalary();
        }else if(computeGrossSalary() > 100000){
            return 5000 + 0.2 * computeGrossSalary();
        }
        return 0;
        
    }
    double computeNetSalary() const{
        return computeGrossSalary() - computeTax();
    }

    void printPaysSlip()const{
        cout << "====================================================" << endl;
        cout << "             EMPLOYEE PAYSLIP - AUG 2026            " << endl;
        cout << "====================================================" << endl;
        cout << "Emp ID     : " << empId << endl;
        cout << "Name       : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "Grade      : " << grade << endl;
        cout << "Status     : " << isActive << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "Basic Salary    : Rs." << getBasicSalary() << endl;
        cout << "Allowance (30%) : Rs." << computeAllowance() << endl;
        cout << "Gross Salary    : Rs." << computeGrossSalary() << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "Tax Deduction : Rs." << computeTax() << endl;
        cout << "Net Salary : Rs." << computeNetSalary() << endl;
        cout << "====================================================" << endl;

    }

    //Constructor
    Employee(){
        employeeCount++;
        isActive = true;
    }
    static int getEmployeeCount(){
        return employeeCount;
    }
    ~Employee(){
        employeeCount--;
    }

    void acceptDetails(){
        cout << "The Employee ID: " << endl;
        cin >> empId;
        cout << "The Name of the Employee is: " << endl;
        cin >> name;
        cout << "The Department of the Employee is: " << endl;
        cin >> department;
        cout << "The Grade of the Employee is: " << endl;
        cin >> grade;
        cout << "Is the Employee Status Active? : " << endl;
        cin >> isActive;
        cout << "What is the Basic Salary: " << endl;
        cin >> basicSalary;

    }
};

int Employee:: employeeCount = 0;

int main(){
    Employee e1;
    Employee* e2 = new Employee();
    Employee* e3 = new Employee();
    

    e1.acceptDetails();
    e2->acceptDetails();
    e3->acceptDetails();

    e1.printPaysSlip();
    e2->printPaysSlip();
    e3->printPaysSlip();

    e3->deactivate();
    if(!e3 -> getIsActive()){
        cout << e3 ->getName() << " is no Longer active. Payroll skipped." << endl;
    }

    cout << "Total Employees: " << Employee::getEmployeeCount() << endl;

    delete e2;
    delete e3;

    return 0;
}
