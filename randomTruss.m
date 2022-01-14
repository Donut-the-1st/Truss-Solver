function [trussStruct] = randomTruss(leftMostPoint,rightMostPoint)
%RANDOMTRUSS Generates a random truss
%   Detailed explanation goes here
for i = 2:50
    weightNode = randi([2,2*i-2]);
    %assemble node array
    nodeArray = zeros(2*i-1,2);
    %chooses a height between 0.050m and 0.090m
    nodeArray(2:2:end-1,2) = 0.040 .* rand(i-1,1) + 0.050;
    nodeArray(3:2:end-2,2) = 0.020 .* rand(i-2,1) - 0.010;
    nodeArray(:,1) = 0.0325*(1:(2*i-1))';
    %Makes trussGraph connection array
    connectionsArray = zeros(4*i-5,2);
    connectionsArray(1:(2*i-3),1) = 1:(2*i-3);
    connectionsArray(1:(2*i-3),2) = 3:(2*i-1);
    connectionsArray((2*i-2):end,1) = 1:(2*i-2);
    connectionsArray((2*i-2):end,2) = 2:(2*i-1);
end
