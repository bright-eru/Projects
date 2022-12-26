% Name: YuanYuan Du & Bright Eru
% Assignment: Homework 8


function [neighborLegs, neighborMuscles] = manducaPermute(legs, muscles, currentTemp)
% input: matrix
%function of the temperature

for p=currentTemp:-3:0
    % Use a random new set of legs
    row = randi([1 10]);
    newLegs=randomLegs();
    % function of the temperature
    % temp scaled down for use in a later equation for probability
    
    
    legs(row, :)=newLegs;
    
    
    %using our best rule, we are going to now find the muscles in the row of
    %thematrix that we just changed.
    for i=1:4
        if (legs(row, i)==1) && (legs(row, i+1)==0)
            
            
            muscles(row, i)=0;
            
        elseif(legs(row, i)==0) && (legs(row, i+1)==1)
            muscles(row, i)=100;
        elseif(legs(row, i)==1) && (legs(row, i+1)==1)
            %wedont want them to stay contracted
            muscles(row, i)=0;
        else
            muscles(row, i)=randi([0 1])*100;
        end
    end
    
end


neighborLegs=legs;
neighborMuscles=muscles;

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