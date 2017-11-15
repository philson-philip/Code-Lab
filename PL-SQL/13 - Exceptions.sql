DECLARE
ses float;
mark float;
r int;
exc exception;
BEGIN
r := &r;
SELECT sessionals, univ_mark INTO ses, mark FROM stud WHERE rollno=r;
IF ses+mark>150 THEN 
	RAISE exc;
END IF;
EXCEPTION
WHEN exc THEN
	dbms_output.put_line('Total marks > 150');
WHEN NO_DATA_FOUND THEN
	dbms_output.put_line('No such data in Table');
WHEN TOO_MANY_ROWS THEN
	dbms_output.put_line('More than one row selected'); 
END;
/