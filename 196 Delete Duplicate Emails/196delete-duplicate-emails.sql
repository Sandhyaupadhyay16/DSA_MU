# Write your MySQL query statement below
delete u1 from person as u1 join person as u2 on u1.email=u2.email where u1.id>u2.id;