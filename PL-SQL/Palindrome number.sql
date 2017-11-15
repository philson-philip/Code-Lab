DECLARE
num int;
n int;
BEGIN
num := &num;
FOR i in 1..num LOOP
	if palindrome(i) = 1 THEN dbms_output.put_line(i);
	END IF;
END LOOP;
END;
/