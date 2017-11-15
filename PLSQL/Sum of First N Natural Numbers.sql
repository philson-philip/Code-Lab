DECLARE
n number;
s number := 0;
BEGIN
n := &n;
FOR num IN 1..n LOOP
	s := s + num;
END LOOP;
dbms_output.put_line('Sum : '||s);
END;
/