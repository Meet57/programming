desc EMP;

select * from EMP;

insert into EMP values (1,'Meet','Patel',56000,'99');

insert into EMP (employee_id,first_name,last_name,salary,department_id) values (2,'Iti','Patel',57000,'98');

select * from EMP;

update EMP set salary = '58000' where employee_id = '2';

delete from EMP where employee_id = '2';

insert into EMP (employee_id,first_name,last_name,salary,department_id) values (2,'Iti','Patel',57000,'98');
insert into EMP (employee_id,first_name,last_name,salary,department_id) values (3,'Mayur','Patel',61000,'96');

update EMP set last_name = 'Drexler' where employee_id = '3';

update EMP set salary = '1000' where salary < 900;

select * from EMP;

delete from EMP where first_name = 'Mayur' AND last_name = 'Drexler';

commit;
