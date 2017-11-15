DECLARE
s float;
BEGIN
update income set salary = salary +0.2*salary;
SELECT sum(salary) INTO s FROM income;
IF s>100000 THEN
rollback;
ELSE
commit;
END IF;
END;
/
