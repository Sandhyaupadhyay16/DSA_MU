# Write your MySQL query statement below
select w1.id from Weather as w1 join Weather w2 on Date(w1.recordDate)=Date(w2.recordDate)+ interval 1 day where w1.temperature>w2.temperature ;