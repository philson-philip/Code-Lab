# Code-Lab
Programs in C
-------------
1. CPU Scheduling
2. Disk Scheduling
3. Bankers Algorithm
4. Directory System
5. Loader
6. Pass One of Two Pass Assembler
7. Pass Two of Two Pass Assembler
8. Macro Assembler
9. Producer Consumer
10. Single Pass Assembler
11. Dining Philosopher
12. Symbol Table

Programs in PL-SQL
------------------
1. Program to print the product of two numbers.
2. Program to convert dollar to rupees.
3. Program to find largest and smallest of 3 numbers.
4. Program to find the area of a circle and a square.
5. Program to find sum of first n natural numbers.
6. Program to generate the following sequence: 1, 4, 9, 16, 25,....
7. Program to check a number is Armstrong
8. Program to reverse a string.
9. Program to calculate the new salary and change in salary. An employee is given 25% increase in salary, if salary is above Rs.25000 and 20% increase in salary if his salary is above Rs.30000.
10. Program to insert the first 15 odd nos into a table ODD and first 15 even nos into a table EVEN.
11. Program to Update salary of Sindhu by 30% if she is earning salary >10000, otherwise update by 20% if she is earning salary>8000. Otherwise update by 10%.<br>
	Table details are given below:<br>
	
		INCOME : ENAME, SALARY
		
12. Program to Update the salary of all the employees by 20%. If total salary>1,00,000, then rollback, else commit.
13. Program to raise an error message if the sessionals+univ_mark>150. Also handle all the possible exceptions.<br>
	Table details are given below:<br>
	
		STUDENT : ROLL_NO, STUD_NAME, UNIV_MARK, SESSIONAL
		
14. Program to accept the customer_no and print the electricity bill for the same.

	The charge is calculated as follows:
	
		UNITS CONSUMED			CHARGE
		**************          	******
		Less than 20 			Nil
		20-100 				50ps per unit
		101-300 			75ps per unit
		301-500 			150ps per unit
		Greater than 500 		225ps per unit
	
	Print the electricity bill in the form:
	
			ELECTRICITY BILL
			****************
			CONSUMER NO
			PRESENT READING
			PAST READING
			UNITS TAKEN
			CHARGE

15. Program to increase the mess fee of vegetarians by 10% and non vegetarians by 20%. Also create tables vegetarian and non_vegetarian which includes fields: stud_no, name, raise_in_fee and date on which raise was given. Insert values into these tables through PL/SQL program.<br>
	Database details are given below:<br>
	
		HOSTEL_MESS: STUD_NO, NAME, MESS_FEE, VEG/NON_VEG
		
16. Program to do the following: If sessionals is in between 30 and 34, then give necessary moderation so that it comes upto 35.<br>If UNIV_MARK + SESSIONAL>75 then insert those tuples into another table T2.<br>
	Table details are given below:<br>
	
		T1 : ROLL_NO, UNIV_MARK, SESSIONAL
		T2 : ROLL_NO, UNIV_MARK, SESSIONAL
		
17. Function which accepts the reg_no and print the total marks.<br>
	Table details are given below:<br>
	
		STUDENT : REG_NO, NAME, PHYSICS_MARK, CHEMISTRY_MARK, MATHS_MARK
		
18. Function to find sum of first N even no:s
19. Program to display the grade of a particular student from student database.
	Use a stored procedure to display the grade
	
		TOTAL MARK			GRADE
		**********			*****
		Greater than 100		A
		70-100				B
		50-70				C
		Less than 50			Fail
		
20. Program to create a trigger to perform the following operations<br>
	Whenever the balance becomes negative, create a loan in the amount of overdraft. The LOAN_NO is given same as ACC_NO.<br>
	Table details are given below:<br>
	
		ACCOUNT_TABLE: ACC_NO, C_NAME, BALANCE, BRANCH_NAME
		LOAN_TABLE: LOAN_NO, AMOUNT, BRANCH_NAME
		BORROWER_TABLE: C_NAME, LOAN_NO
	
21. Create a transparent audit system for a table CLIENT_MASTER. The system has to keep track of records that have been removed or modified and when they have been removed or modified.<br>
	Table details are given below:<br>
	
		AUDIT_CLIENT: NAME, BAL_DUE, OPERATION, OP_DATE
		CLIENT_MASTER: C_NO, NAME, ADDRESS, BAL_DUE

22. Create a table with 2 number fields a and b. Write a trigger so that the value that is entered into the table satisfies the condition: a+b Greater than 75. Also if value of b is changed, it should not be changed to a smaller value. Tuples that violate these conditions should not be entered.

Programs in Java
----------------
1. Implementation of Applet
2. To find length of a String
3. Synchronisation of Thread
	
	
