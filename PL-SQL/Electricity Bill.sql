DECLARE
present float;
past float;
unitc float;
c float;
custno int;

BEGIN
custno := &custno;
SELECT present_read, past_read INTO present, past FROM electricity_bill WHERE customerno = custno;
unitc:=present-past;
IF unitc<20 THEN c:=0;
ELSIF unitc>=20 and unitc<=100 THEN c := .5*unitc;
ELSIF unitc>100 and unitc<=300 THEN c := .5*100+.75*(unitc-100);
ELSIF unitc>300 and unitc<=500 THEN c := .5*100+.75*200+1.5*(unitc-300);
ELSE c := .5*100+.75*200+1.5*300+2.25*(unitc-500);
END IF;
UPDATE electricity_bill set units_taken = unitc WHERE customerno=custno;
UPDATE electricity_bill set charge = c WHERE customerno=custno;
dbms_output.put_line('Electricity Bill');
dbms_output.put_line('Consumer no : '|| custno);
dbms_output.put_line('Present reading : '|| present);
dbms_output.put_line('Past reading : ' ||past);
dbms_output.put_line('Units Taken : ' ||unitc);
dbms_output.put_line('Charge : ' ||c);
END;
/
