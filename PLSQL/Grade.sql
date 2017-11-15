DECLARE
r int;
g char(5);
m float;

BEGIN
r := &r;
grade(r,g);
dbms_output.put_line('Grade : '||g);
END;
/
