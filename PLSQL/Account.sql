create or replace trigger ln after update on account for each row
when (new.balance<0)
Declare

Begin
insert into loan values(:new.accno,-1*:new.balance,:new.branch);
insert into borrower values (:new.accno,:new.cname);
end;
/