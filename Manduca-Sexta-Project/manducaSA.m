% Name: YuanYuan Du & Bright Eru
% Assignment: Homework 8

function [bestDistance, bestLegs, bestMuscles] = manducaSA(maxTemp)

% input: initial temperature (maxTemp)
% output: best score and best solution from simulated annealing

% initialization
currentTemp = maxTemp;
[currentLegs, currentMuscles] = manducaGenerateInitialSolution();
currentDistance = manducaFitness(currentLegs, currentMuscles, 0);
bestLegs=currentLegs;
bestMuscles=currentMuscles;
bestDistance = currentDistance;
itCounter=0;
% iterative process
% stopping condition: temperature <= 0.1
while (itCounter<500000)&&(currentTemp > 0.0001)
    % generate a neighborLegs and neighborMuscles
    [neighborLegs, neighborMuscles] = manducaPermute(currentLegs, currentMuscles, currentTemp);
    % compare neighbor solution with current solution
    neighborDistance=  manducaFitness(neighborLegs, neighborMuscles);
    deltaS = neighborDistance - currentDistance;
    % Probability of accepting bad moves
    probability=exp((deltaS)/currentTemp);
    
    % Update bestLegs, bestMuscles, bestDistance
    if (neighborDistance>bestDistance)
        bestLegs=neighborLegs;
        bestMuscles=neighborMuscles;
        bestDistance=neighborDistance;
    end
    if (deltaS>0) % >0 for maximization
        currentLegs=neighborLegs;
        currentMuscles=neighborMuscles;
        currentDistance=neighborDistance;
        % if we reach our probability, then accept the bad move
    elseif (probability>=rand())
        % update currentSolution
        currentLegs=neighborLegs;
        currentMuscles=neighborMuscles;
    end
    itCounter=itCounter+1;
    % update currentTemp
    currentTemp = updateTemp(currentTemp);
end
end

function [newTemp] = updateTemp(currentTemp)
% input: current temperature
% output: new temperature that is equal to (0.999*current temperature)
newTemp=0.99*currentTemp;
end