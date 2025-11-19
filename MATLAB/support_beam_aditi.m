clc
clear
l=input('Enter the span of the beam in meters: ');
n1=input('Enter the number of point loads: ')
n2= input('Enter the number of UDLs: ')
%calculate the load and moment due to point loads
for i=1:n1
    fprintf('For point load %d\n',i);
    P(i)= input('enter the magnitude of the point load');
    d(i)= input('enter the distance of the point load from the left support');
    M(i)=P(i)*d(i);
    F_1= sum(P);
    M_1= sum(M);
end
%calculate the load and moment due to UDL
for i=1:n2
    fprintf('For point load %d\n',i);
    w(i)= input('enter the magnitude of the  UDL');
    l(i)= input('enter the distance of the UDL from the left support');
    a(i)=input('Enter length of UDL')
    Mu(i)=w(i)*(l(i) +0.5*a(i));
    W(i)=w(i)*a(i);
    F_2=sum(W)
    M_2= sum(Mu);
end
%reaction at right support
Rr= (1/l)*(M_1 +M_2);
Rl=F_1 +F_2 -Rr
fprintf('The reaction at the left support is %f kN and at right support is %f kN ', Rl, Rr)