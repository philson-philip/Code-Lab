DECLARE
n number;
BEGIN
n := &n;
FOR i IN 1..n LOOP
	dbms_output.put_line(i*i);
END LOOP;
END;
/