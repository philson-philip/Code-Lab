DECLARE
i t1%rowtype;
s number(10,2);
u number(10,2);
CURSOR c is select * from t1;
BEGIN
open c;
LOOP
FETCH c into i;
EXIT when c%notfound;
IF i.sessionals between 30 and 34 THEN
	i.sessionals:=35;
	UPDATE t1 set sessionals = i.sessionals where rollno = i.rollno;
END IF;	
u:=i.sessionals + i.univ_mark;
IF u>75 THEN
	INSERT into t2 values (i.rollno,i.univ_mark,i.sessionals);
END IF;	
END LOOP;
close c;
END;
/ 