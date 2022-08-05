select Users.name, sum(Transactions.amount) as balance from Users 
inner join Transactions  
ON Users.account = Transactions.account
group by Transactions.account
having balance > 10000;