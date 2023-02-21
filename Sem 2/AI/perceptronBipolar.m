
x1 = [1 1 -1 -1];
x2 = [1 -1 1 -1];

target = [-1 1 1 1];

lr= 0.01;

w1 = 0;
w2 = 0;

for i=1:100
   output=[];
   error=[];
   for i=1:4
     temp = (w1*x1(i))+(w2*x2(i));
     if temp >= 0
       temp = 1;
     else
       temp = -1;
     endif
     display(target(i))
     display(temp)
     output = [output, temp];
     if output(i) ~= target(i)
       display("update weight")
       e = (target(i) - output(i));
       display(e)
       error = [error, e];
       w1 = w1 + lr*target(i)*x1(i);
       w2 = w2 + lr*target(i)*x2(i);
     endif

   end;

   if isequal(output, target)
     display("Achieved");
     break;
   endif

end;

display(w1)
display(w2)
display(target)
display(output)
display(error)

