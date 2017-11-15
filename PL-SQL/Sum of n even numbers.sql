DECLARE
num int;
t int;

BEGIN
num := &num;
t:=evensum(num);
dbms_output.put_line('Sum : '||t);
END;
/
