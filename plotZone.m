function [] = plotZone(axies, zone)
%PLOTZONE Summary of this function goes here
%   Detailed explanation goes here
switch (zone.zoneType)
    case zoneType.load
        edgeColour = 'g';
    case zoneType.restricted
        edgeColour = 'r';
    case zoneType.platform
        edgeColour = '#FFA500';
end

switch (zone.shape)
    case shapes.rectangle
        rectangle(axies, 'Position',[zone.location(1,1),...
                                     zone.location(2,2), ...
                                     zone.location(2,1) - zone.location(1,1), ...
                                     zone.location(1,2) - zone.location(2,2)], ...
                         'EdgeColor', edgeColour)
    case shapes.circle
        rectangle(axies, 'Position',[zone.location(2) - zone.location(1), ...
                                     zone.location(3) - zone.location(1), ...
                                     2 * zone.location(1), ...
                                     2 * zone.location(1),], ...
                         'EdgeColor', edgeColour, ...
                         'Curvature', 1)
    case shapes.triangle
        disp('no')
end
end

