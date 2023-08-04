// C++ code
//
int red=3;
int pb1=5;
int pb2=6;
int x=0;
int read1=0;
int read2=0;

void setup()
{
pinMode(red,1);
pinMode(pb1,0); 
pinMode(pb2,0);
}

void loop()
{
read1=digitalRead(pb1);
read2=digitalRead(pb2);
if(read1 == 1 ){
x++;
switch(x)
{
case 1 : analogWrite(red,16);
delay(50);
break;
case 2 : analogWrite(red,32);
delay(50);
break;
case 3 : analogWrite(red,64);
delay(50);
break;
case 4 : analogWrite(red,128);
delay(50);
break;
case 5 : analogWrite(red,255);
delay(50);
x=0;
break;
default : digitalWrite(red,1);
break;
}  
delay(500);
}

else if (read2==1){
x++;
switch(x)
{
case 1 : analogWrite(red,255);
delay(50);
break;
case 2 : analogWrite(red,128);
delay(50);
break;
case 3 : analogWrite(red,64);
delay(50);
break;
case 4 : analogWrite(red,32);
delay(50);
break;
case 5 : analogWrite(red,16);
delay(50);
break;
default : digitalWrite(red,0);
x=0;
break;
}
delay(500);
}
}