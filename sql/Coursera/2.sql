--drop table PETSALE;

create table PETSALE (
	ID INTEGER PRIMARY KEY NOT NULL,
	ANIMAL VARCHAR(20),
	QUANTITY INTEGER,
	SALEPRICE DECIMAL(6,2),
	SALEDATE DATE
	);

insert into PETSALE values(1,'Cat',9,450.09,'29-may-2018');

delete from PETSALE;

insert into PETSALE values(1,'Cat',9,450.09,'29-may-2018');
insert into PETSALE values(2,'Dog',3,666.66,'01-june-2018');
insert into PETSALE values(3,'Dog',1,100.00,'04-june-2018');
insert into PETSALE values(4,'Parrot',2,50.00,'04-june-2018');
insert into PETSALE values(5,'Dog',1,75.75,'10-june-2018');
insert into PETSALE values(6,'Hamster',6,60.60,'11-june-2018');
insert into PETSALE values(7,'Cat',1,44.44,'11-june-2018');
insert into PETSALE values(8,'Goldfish',24,48.48,'14-june-2018');
insert into PETSALE values(9,'Dog',2,222.22,'15-june-2018');

select SUM(SALEPRICE) from PETSALE;
select SUM(SALEPRICE) AS SUM_OF_SALEPRICE from PETSALE;

select * from petsale;

select MAX(QUANTITY) from PETSALE;
select AVG(SALEPRICE) from PETSALE;
select AVG( SALEPRICE / QUANTITY ) from PETSALE where ANIMAL = 'Dog';
select animal,ROUND(SALEPRICE) from PETSALE;
select LENGTH(ANIMAL) from PETSALE;
select UCASE(ANIMAL) from PETSALE;
select DISTINCT(UCASE(ANIMAL)) from PETSALE;
select * from PETSALE where LCASE(ANIMAL) = 'cat';
select DAY(SALEDATE) from PETSALE where ANIMAL = 'Cat';
select COUNT(*) from PETSALE where MONTH(SALEDATE)='05';
select (SALEDATE + 3 DAYS) from PETSALE;
select (CURRENT DATE - SALEDATE) from PETSALE;
