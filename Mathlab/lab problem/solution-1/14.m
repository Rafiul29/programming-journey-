xmax=640;
ymax=480;

disp('Enter four control point (x,y): ');
for i=1:4
    for j=1:2
        co(i,j)=input('');
    end
end

for i=1:640
    x=i;
    y=ymax/2;
    plot(x,y);
hold on;
end

for i=1:480
    y=i;
    x=xmax/2;
    plot(x,y);
hold on;
end

title("B-spline Curve drawing Algorithm");

u1=0;

b=1/6*[
    -1 3 -3 1;
    3 -6 3 0;
    -3 0 3 0;
    1 4 1 0
    ];

for i=1:0.01:2
    u2=(i-1)*(i-1);
    u3=(i-1)*(i-1)*(i-1);
    u=[u3 u2 i-1 1];
    temp=u*b;
    re=temp*co;
    fprintf("x = %d , y = %d\n",re(1,1),re(1,2));
    plot(320+re(1,1),240+re(1,2),'Ok');
hold on,grid on;
end