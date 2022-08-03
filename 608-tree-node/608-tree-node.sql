# select id, 'Root' as type from tree where p_id=null
# UNION
# select id, 'Inner' as type from tree where 

select id,(case 
        when p_id is null then 'Root'
        when id in (select p_id from tree) and p_id is not null then 'Inner'
        else 'Leaf'
         end) as type
        from tree
        order by id ASC;