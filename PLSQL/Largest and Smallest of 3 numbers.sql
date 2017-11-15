DECLARE
n1 number(6);
n2 number(6);
n3 number(6);
l number(6);
s number(6);
BEGIN
n1 := &n1;
n2 := &n2;
n3 := &n3;
IF (n1>n2 and n1>n3)
THEN
	l := n1;
ELSIF (n2>n3)
THEN
	l := n2;
ELSE
	l := n3;
END IF;
IF (n1<n2 and n1<n3)
THEN
	s := n1;
ELSIF (n2<n3)
THEN
	s := n2;
ELSE
	s := n3;
END IF;
dbms_output.put_line('Largest  : ' || l);
dbms_output.put_line('Smallest : ' || s);
END;
/