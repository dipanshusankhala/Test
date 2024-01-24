-- Online SQL Editor to Run SQL Online.
-- consider we can store the data in the format of tables of which consists column as employee name and their commission 
-- to find the top 5 person who got avg highest commission among all we can use group by clause and AVG agg. function

select emp_name , AVG(commission) as total_commission from Employees group by emp_name order by total_commission desc limit 5 ;

-- this sql query gives the top 5 emp_name whose avg commissions are highest  