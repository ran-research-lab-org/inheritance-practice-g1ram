#include "Employee.h"

Employee::Employee(const std::string& name, int id, const std::string& type)
{
  // TODO: 
    this->name = name;
    this->id = id;
    this->type = type;

}

/* IMPLEMENT GETTERS*/
 std::string Employee::getname() const{
  return name;
}


std::string Employee::gettype()  const{
  return type;
}


