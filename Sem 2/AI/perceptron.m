lr = 0.01
w1 = 0.4
w2 = 0.3

x=[1 0 1 0];
y=[1 1 0 0];
label=[1 0 0 0];

for i=1:100
  output=[];
  error=[];
  for i=1:4
    temp=(w1*x(i))+(w2*y(i));
    output=[output,temp];
    e=(label(i)-output(i))*(label(i)-output(i));
    error=[error, e];
  end;
  d=sum(error);
  w1=w1+lr*d;
  w2=w2+lr*d;
end;

display(w1)
display(w2)
display(error)
