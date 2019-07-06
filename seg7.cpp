#include <Arduino.h>
#include "seg7.h"
 
seg7::seg7(int a,int b,int c,int d,int e,int f,int g,int dp){
 
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
	al=a;
	bl=b;
	cl=c;
	dl=d;
	el=e;
	fl=f;
	gl=g;
	dpl=dp; 
}
 
void seg7::Seg7(int no){
 if(no==0)
  {
      digitalWrite(al,1);
      digitalWrite(bl,1);
      digitalWrite(cl,1);
      digitalWrite(dl,1);
      digitalWrite(el,1);
      digitalWrite(fl,1);
      
      digitalWrite(dpl,1);
      delay(1000);
      done();
  }
  else if(no==1)
  {
    
digitalWrite(bl,1);
digitalWrite(cl,1);
digitalWrite(dpl,1);
delay(1000);
done();    
  }
  else if(no==2)
  {
    digitalWrite(al,1);
digitalWrite(bl,1);

digitalWrite(dl,1);
digitalWrite(el,1);

digitalWrite(gl,1);
digitalWrite(dpl,1);
delay(1000);
done();
  }
  else if(no==3)
  {
    digitalWrite(al,1);
digitalWrite(bl,1);
digitalWrite(cl,1);
digitalWrite(dl,1);


digitalWrite(gl,1);
digitalWrite(dpl,1);
delay(1000);
done();
  }
  else if(no==4)
  {
    
digitalWrite(cl,1);
digitalWrite(bl,1);
digitalWrite(fl,1);
digitalWrite(gl,1);
digitalWrite(dpl,1);
delay(1000);
done();
  }
  else if(no==5)
  {
    digitalWrite(al,1);

digitalWrite(cl,1);
digitalWrite(dl,1);

digitalWrite(fl,1);
digitalWrite(gl,1);
digitalWrite(dpl,1);
delay(1000);
done();
  }
  else if(no==6)
  {
    digitalWrite(al,1);

digitalWrite(cl,1);
digitalWrite(dl,1);
digitalWrite(el,1);
digitalWrite(fl,1);
digitalWrite(gl,1);
digitalWrite(dpl,1);
delay(1000);
done();
  }
  else if(no==7)
  {
    digitalWrite(al,1);
digitalWrite(bl,1);
digitalWrite(cl,1);
digitalWrite(dpl,1);
delay(1000);
done();
  }
  else if(no==8)
  {
    digitalWrite(al,1);
digitalWrite(bl,1);
digitalWrite(cl,1);
digitalWrite(dl,1);
digitalWrite(el,1);
digitalWrite(fl,1);
digitalWrite(gl,1);
digitalWrite(dpl,1);
delay(1000);
done();
  }
  else if(no==9)
  {
    digitalWrite(al,1);
digitalWrite(bl,1);
digitalWrite(cl,1);
digitalWrite(dl,1);

digitalWrite(fl,1);
digitalWrite(gl,1);
digitalWrite(dpl,1);
delay(1000);
done();
  }
}
 
void seg7::done()
{
	digitalWrite(al,0);
digitalWrite(bl,0);
digitalWrite(cl,0);  
digitalWrite(dl,0);
digitalWrite(el,0);
digitalWrite(fl,0);
digitalWrite(gl,0);
digitalWrite(dpl,0);
delay(1000);
}