//Giram O. Elias Nieves
//801227631

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
//Clase Employee
class Employee {
protected:
    std::string name; //Variable name
    int id; //id
    std::string type; //type

public:
    Employee(); //Constructor default
    Employee(const std::string& name, int id, const std::string& type); //Constructor con name, id, type especificos

    virtual double calculatePay() const = 0; // Pure virtual

    std::string getname() const ; //funcion para obtener el nombre empleado
    std::string gettype() const ; //funcion para obtener el tipo de empleado
  
  
};

#endif












/*
// Parent Class Employee
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
// Attributes
protected:
    std::string name;
      int id;
    std::string type; // "Hourly" or "Salaried"

// Methods
public:
	// TODO: Constructor
    
    Employee();
    Employee(const std::string& name, int id, const std::string& type);

       // Virtual function to calculate payment
    virtual double calculatePay() const = 0;
 //Getters
    std::string getname() const ;
    std::string gettype() const ;
   
    
};

#endif
*/
