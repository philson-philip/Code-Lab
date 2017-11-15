DECLARE
sal number(7,2);
BEGIN
SELECT salary INTO sal FROM income WHERE ename = 'Sindhu';
IF sal>10000 THEN
	update income set salary = sal +0.3*sal WHERE ename = 'Sindhu';
ELSIF sal>8000 THEN
	update income set salary = sal +0.2*sal WHERE ename = 'Sindhu';
ELSE
	update income set salary = sal +0.1*sal WHERE ename = 'Sindhu';
END IF;
end;
/
