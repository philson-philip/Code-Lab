create or replace trigger al after update or delete on clientmaster for each row
Declare

Begin
IF updating THEN
insert into auditclient values(:new.name,:new.bal_due,'update',sysdate);
ELSE
insert into auditclient values(:old.name,:old.bal_due,'delete',sysdate);
end if;
end;
/
