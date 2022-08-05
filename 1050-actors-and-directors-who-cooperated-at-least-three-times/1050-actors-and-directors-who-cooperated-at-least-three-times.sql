select actor_id, director_id 
from (select actor_id, director_id,count(director_id) as num
from ActorDirector 
group by actor_id, director_id) t1
where num >= 3;