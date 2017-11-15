DECLARE
dollars number(6,2);
rupees number(6,2);
BEGIN
dollars := &dollars;
rupees := 65*dollars;
dbms_output.put_line('Dollar : ' || dollars);
dbms_output.put_line('Rupees : ' || rupees);
END;
/