select employee_id from salaries 
where employee_id not in(select employee_id from employees)
UNION
select employee_id from employees 
where employee_id not in(select employee_id from salaries)
order by employee_id; 