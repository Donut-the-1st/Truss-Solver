for i = 2:50
    weightNode = randi([2,2*i-2]);
    weightMagnitude = randi([1,1500]);
    
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
    %trussGraph time
    trussGraph = generateTrussGraph(nodeArray,connectionsArray);
    memberForces = tensionCalculator3(...
        trussGraph.Nodes.x,...
        trussGraph.Nodes.y,...
        trussGraph.numnodes,...
        trussGraph.numedges,...
        trussGraph.Edges.EndNodes,...
        weightMagnitude,...
        weightNode...
        );
    trussGraph.Edges.("Force in member")=memberForces(1:end-3);
    [trussGraph.Edges.("Beam type"),trussGraph.Edges.("Safety Factor"),~] =...
        findMemberType4(trussGraph.Edges,rand());
end