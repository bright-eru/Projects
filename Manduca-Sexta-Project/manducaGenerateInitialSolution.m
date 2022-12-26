% Name: YuanYuan Du & Bright Eru
% Assignment: Homework 8

% Our initial solution is random under rules, because in reality, some
% situtaions don't make sense, for example, the worm is floating (all the
% legs are unlocked). Also, sense-making initial solution limits the
% solution space, it's easier to run uphills to find a better solution, and
% it can lower the temperature required.


function [legs, muscles] = manducaGenerateInitialSolution()
% input: none
% output: initial 10x5 matrix for legs, initial 10x4 matrix for muscles

% initialization
legs=[];
muscles=[];

% legs
for i=1:10
    legs=[legs; randomLegs()];
end

% muscles
for i=1:10
    muscles=[muscles; randomMuscles()];
end
end

function [legRow]= randomLegs()
% input: none
% output: a random row of legs (1s and 0s), but not all 1s and 0s
loop=true;
while loop
    legRow=[];
    for i=1:5
        legRow=[legRow, randi([0 1])];
    end
    % we don't want all legs are locked or unlocked
    if (sum(legRow)>0 & sum(legRow)<5)
        loop=false;
    end
end
end

function [muscleRow]= randomMuscles()
% input: none
% output: a random row of muscles (100s and 0s)
muscleRow=[];
for i=1:4
    muscleRow=[muscleRow, randi([0 1])*100];
end
end
