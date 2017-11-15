DECLARE
num int;
flag int;
BEGIN
num := &num;
FOR i in 2..num LOOP
	flag := prime(i);
	if flag = 0 THEN dbms_output.put_line(i);
	END IF;
END LOOP;
END;
/
			