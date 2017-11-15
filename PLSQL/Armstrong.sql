DECLARE
a number(6);
n number(6);
s number(6) := 0;
temp number(6);
BEGIN
a := &a;
temp := a;
WHILE a!=0 LOOP
	n := a mod 10;
	a := floor(a/10);
	s := s + (n*n*n);
END LOOP;
IF s=temp THEN
	dbms_output.put_line(temp ||' is armstong');
ELSE
	dbms_output.put_line(temp ||' is not armstong');
END IF;
END;
/	