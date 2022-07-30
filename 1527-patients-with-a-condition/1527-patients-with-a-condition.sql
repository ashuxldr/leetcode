SELECT * 
FROM patients
WHERE (conditions LIKE 'DIAB1%' or conditions LIKE "% DIAB1%")   
ORDER BY patient_id ASC;