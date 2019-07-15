desc departments;

select * from departments;

select department_id,department_name,manager_id from departments;

desc employees;

create table EMP(employee_id number,first_name varchar2(20),last_name varchar2(25),email varchar2(25),phone_number varchar2(20),hire_date date,job_id varchar2(10),salary number,commission_pct number,manager_id number,department_id number);

desc EMP;

alter table EMP modify (last_name varchar(30));

desc EMP;

select * from user_tables;

create table EMPLOYEES2(EMPLOYEE_ID number,FIRST_NAME varchar(20),LAST_NAME varchar(20),SALARY number,DEPARTMENT_ID varchar(20));

alter table employees2 rename to EMP;

desc EMP;
