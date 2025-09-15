 #include "Employee.h"

Employee::Employee(){} //Constructor default

Employee::Employee(const std::string& name, int id, const std::string& type){ //Constructor con variables especificas
  // TODO: 
    this->name = name;
    this->id = id;
    this->type = type;

}

/* IMPLEMENT GETTERS*/
std::string Employee::getname() const{ //Devuelve name
  return name;
}


std::string Employee::gettype()  const{ //Devuelve type 
  return type;
}

