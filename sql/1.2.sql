desc emp;

alter table emp add constraint my_emp_id_pk primary key(employee_id);

desc departments;

alter table departments add constraint my_dept_id_pk primary key(department_id);

select * from USER_CONSTRAINTS;

select * from user_objects;

select object_name,object_type from user_objects where object_name like 'EMP%';

select object_name,object_type from user_objects where object_name like 'EMP%' or object_name like 'DEPT%';
