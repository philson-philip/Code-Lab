DECLARE
i hostel_mess%rowtype;
r number(10,2);
CURSOR c is select * from hostel_mess;
BEGIN
open c;
LOOP
FETCH c into i;
EXIT when c%notfound;
IF i.v_nv = 'v' THEN 
	r := .1*i.messfee;
	i.messfee := i.messfee + .1* i.messfee;
	UPDATE hostel_mess set messfee=i.messfee;
	INSERT into vegetarian values (i.stud_no, i.name,r,sysdate);
ELSE 
	r := .2*i.messfee;
	i.messfee := i.messfee + .2* i.messfee;
	UPDATE hostel_mess set messfee=i.messfee;
	INSERT into nonvegetarian values (i.stud_no, i.name,r,sysdate);
END IF;
END LOOP;
close c;
END;
/ 