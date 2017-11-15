create or replace trigger chang before insert or update on num for each row
Declare

Begin
IF :new.b<:old.b THEN raise_application_error(-20001,'Error : Old b > new b'); 
ELSIF :new.a+:new.b<75 THEN raise_application_error(-20001,'Error : a+b<75'); 
end if;
end;
/