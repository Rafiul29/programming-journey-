from menu import Menu
class Restaurent:
  def __init__(self,name) -> None:
    self.name=name
    self.employees=[]
    self.menu=Menu()

  def add_employee(self,employee):
    self.employees.append(employee)
    print(f"{employee.name} is added!!")

  def view_employee(self):
    print("Employee List!!!")
    for emp in self.employees:
      print(emp.name,emp.email,emp.phone,emp.address,emp.age,emp.salary)
