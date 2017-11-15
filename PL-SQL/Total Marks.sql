DECLARE
sid int;
t float;

BEGIN
sid := &sid;
t:=total (sid);
dbms_output.put_line('Total marks : '||t);
END;
/
