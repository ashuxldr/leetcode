SELECT activity_date AS day, count(DISTINCT(user_id)) AS active_users
FROM activity
GROUP BY activity_date
HAVING activity_date between DATE '2019-06-28' AND DATE '2019-07-27'
ORDER BY activity_date ASC; 