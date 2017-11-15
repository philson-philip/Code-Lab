DECLARE
radius number(6,2);
side number(6,2);
pi CONSTANT number (3,2) := 3.14;
areac number(6,2);
areas number(6,2);
BEGIN
radius := &radius;
areac := pi*radius*radius;
side := &side;
areas := side*side;
dbms_output.put_line('Area of Circle : '||areac);
dbms_output.put_line('Area of Square : '||areas);
END;
/