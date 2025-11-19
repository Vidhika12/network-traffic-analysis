clc;
clear;
close;
n=input('Enter the number of forces:');
alpha=input('Enter the angles between the forces=');
force=input('Enter the magnitudes of forces=');
alpha1=alpha*pi/180
sumx=0;
sumy=0;
for i=1:n
    sumx=sumx+force(i)*cos(alpha1(i));
    sumy=sumy+force(i)*sin(alpha1(i));
end
resultant=sqrt(sumx^2+sumy^2);
alphar=atan(sumy/sumx);
alphar=alphar*180/pi;
if alphar<0
    alphar=alphar+360;
end
fprintf('The resultant R is %7.2f kN \n',resultant);
fprintf('The angle between the resultant and x-axis is %7.2f degrees \n',alphar);

