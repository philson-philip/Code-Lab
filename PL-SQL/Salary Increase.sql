DECLARE
sal number(7,2);
newsal number(7,2);
change number(7,2);
BEGIN
sal := &sal;
IF sal>30000 THEN
	newsal := sal + (0.20*sal);
	change := newsal-sal;
	dbms_output.put_line('New salary : '||newsal);
	dbms_output.put_line('Change in salary : '||change);
ELSIF sal>25000 THEN
	newsal := sal + (0.25*sal);
	change := newsal-sal;
	dbms_output.put_line('New salary : '||newsal);
	dbms_output.put_line('Change in salary : '||change);
ELSE
dbms_output.put_line('No change in salary');
END IF;
END;
/