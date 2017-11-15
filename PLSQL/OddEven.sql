DECLARE
BEGIN
FOR i IN 1..30 LOOP
	IF(i mod 2 = 0) THEN
		insert into even values (i);
	ELSE
		insert into odd values (i);
	END IF;
END LOOP;
END;
/