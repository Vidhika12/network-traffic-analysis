clc;
clear;
close;
Hbd=input('Enter the horizontal distance between B and D=');
Hdc=input('Enter the horizontal distance between D and C=');
Vbc=input('Enter the vertical distance between B and D=');
Vca=input('Enter the vertical distance between D and C=');
Fab=input('Enter the member AB in kN=');
alpha=atan((Vbc+Vca)/Hbd);
beta=atan(Vca/Hdc);
Tac=Fab*cos(alpha)/cos(beta);
resultant=Tac*sin(beta)+Fab*sin(alpha);
fprintf('Force in the member AC=%f kN\n',Tac)
fprintf('Resultant Force = %f kN \n',resultant)
