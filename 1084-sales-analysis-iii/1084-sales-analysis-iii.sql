select distinct P.product_id, P.product_name from 
Product P inner join Sales S on P.product_id=S.product_id
and S.product_id not in 
	(
		select product_id from Sales 
		where sale_date not between '2019-01-01' and '2019-03-31');