clc
clear
f=input("enter the value of known forces:");
a=input("enter the value of a:");
b=input("enter the value of b:");
%calculation of alpha and beta
d=1:1:20;
l=length(d);
%alpha=taninverse(a/d)
%beta=taninverse(b/d)
for i=1:l 
    alpha=atan(a/d(i));
    beta=atan(b/d(i));
    %unknown force
    p(i)=f*sin(beta)/sin(alpha);
    %resultant
    t(i)=f*(cos(beta)) +  p(i)*cos(alpha);
end
%plot
plot(d,p,color='red',linestyle='-');
xlabel("variation of d in mm");
ylabel("variation of force in KN");
hold on;
plot(d,t,color='blue',linestyle='--');
xlabel("variation of d in mm");
ylabel("variation of force in KN");
legend("variation of unknown force",'variation of resultant');
grid on
fprintf("the resultant is %f\n",t(i))