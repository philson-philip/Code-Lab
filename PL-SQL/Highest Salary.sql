DECLARE
i employee%rowtype;
CURSOR c is select * from employee where salary = (select max(salary) from employee);
BEGIN
open c;
LOOP
FETCH c into i;
EXIT when c%notfound;
dbms_output.put_line('Empno : '||i.empno);
dbms_output.put_line('Empname : '||i.empname);
dbms_output.put_line('Place : '||i.place);
dbms_output.put_line('Designation : '||i.designation);
dbms_output.put_line('Salary : '||i.salary);
END LOOP;
close c;
END;
/ 