DECLARE
s1 varchar(10);
rev varchar(10);
n number(6);
BEGIN
s1 := '&s1';
n := length(s1);
for i in reverse 1..n
LOOP
	rev := rev || substr(s1,i,1);
END LOOP;
dbms_output.put_line('Reversed string : ' || rev);
END;
/
