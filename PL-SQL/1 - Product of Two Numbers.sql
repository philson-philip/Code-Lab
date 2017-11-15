DECLARE
num1 number(6);
num2 number(6);
result number(6);
BEGIN
num1 := &num1;
num2 := &num2;
result := num2*num1;
dbms_output.put_line(result);
END;
/
