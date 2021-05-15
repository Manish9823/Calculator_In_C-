#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
class cal
{

  public: int e,f,g;
	  long int opr1,opr5;
	  long int m,op1,op2,op,i,j,k;
	  char opo;
	  void frame();
	  void opr();
	  void oprand();
};
void cal::frame()
{ clrscr();
  gotoxy(4,3);
  cout<<"|---------------|";
  gotoxy(4,4);
  cout<<"|               |";
  gotoxy(4,5);
  cout<<"|               |";
  gotoxy(4,6);
  cout<<"|               |";
  gotoxy(4,7);
  cout<<"|               |";
  gotoxy(4,8);
  cout<<"|---------------|";
  gotoxy(4,9);
  cprintf("| 1 | 2 | 3 | = |");
  gotoxy(4,10);
  cprintf("| 4 | 5 | 6 | + |");
  gotoxy(4,11);
  cprintf("| 7 | 8 | 9 | - |");
  gotoxy(4,12);
  cprintf("| 0 | . | / | * |");
  gotoxy(4,13);
  cout<<"|---------------|\n\n";
  gotoxy(3,40);
 cout<<"\4  Press Enter to Start\n";
 cout<<"\4  Press A to Exit";
 cout<<"\4  To enter next operation first press 1 and then press any number which you want.";
  }
 void cal::opr()
 {
   if(m==49)
    {gotoxy(i,j);
     op1=1;
     cout<<op1;
     gotoxy(5,9);textbackground(7); textcolor(0);cprintf(" 1 ");
     textbackground(0); textcolor(7);
    }
    if(m==50)
    {gotoxy(i,j);
     op1=2;
     cout<<op1;
     gotoxy(9,9);textbackground(7); textcolor(0);cprintf(" 2 ");
     textbackground(0); textcolor(7);
    }
    if(m==51)
    {gotoxy(i,j);
     op1=3;
     cout<<op1;
     gotoxy(13,9);textbackground(7); textcolor(0);cprintf(" 3 ");
     textbackground(0); textcolor(7);
    }
    if(m==52)
    {gotoxy(i,j);
     op1=4;
     cout<<op1;
     gotoxy(5,10);textbackground(7); textcolor(0);cprintf(" 4 ");
     textbackground(0); textcolor(7);
    }
    if(m==53)
    {gotoxy(i,j);
     op1=5;
     cout<<op1;
     gotoxy(9,10);textbackground(7); textcolor(0);cprintf(" 5 ");
     textbackground(0); textcolor(7);
    }
    if(m==54)
    {gotoxy(i,j);
     op1=6;
     cout<<op1;
     gotoxy(13,10);textbackground(7); textcolor(0);cprintf(" 6 ");
     textbackground(0); textcolor(7);
    }
    if(m==55)
    {gotoxy(i,j);
     op1=7;
     cout<<op1;
     gotoxy(5,11);textbackground(7); textcolor(0);cprintf(" 7 ");
     textbackground(0); textcolor(7);
    }
    if(m==56)
    {gotoxy(i,j);
     op1=8;
     cout<<op1;
     gotoxy(9,11);textbackground(7); textcolor(0);cprintf(" 8 ");
     textbackground(0); textcolor(7);
    }
    if(m==57)
    {gotoxy(i,j);
     op1=9;
     cout<<op1;
     gotoxy(13,11);textbackground(7); textcolor(0);cprintf(" 9 ");
     textbackground(0); textcolor(7);
    }
    if(m==48)
    {gotoxy(i,j);
     op1=0;
     cout<<op1;
     gotoxy(5,12);textbackground(7); textcolor(0);cprintf(" 0 ");
     textbackground(0); textcolor(7);
    }
}
void cal::oprand()
{ clrscr();
  frame();
   if(g==1)
   {gotoxy(6,5);cout<<opo;
    gotoxy(e,f);cout<<op2;
   }
   opr();
   opr1=opr1*10+op1; gotoxy(k,j);cout<<opr1;
   if(k>11)
   { k=k-1;
   }
   else
   {gotoxy(30,10); cout<<"Overflow";gotoxy(30,13);cout<<opr1;getch();exit(0);
   }
}

void main()
{ int a;
  a=1;
  while((a!=97)||(a!=65))
{long int result,flag;
 cal c;
 c.opo=' ';
 c.opr1=0;
 c.op2=0;
 clrscr();
 c.g=0;
 flag=1;
 c.frame();c.i=18;c.k=18;c.j=4;c.opr1=0;
 c.m=getch();
 while((c.m!=97)||(c.m!=65))
 {c.m=getch();
  if((c.m==97)||(c.m==65))
  { exit(0);}
  if((c.m==48)||(c.m==49)||(c.m==50)||(c.m==51)||(c.m==52)||(c.m==53)||(c.m==54)||(c.m==55)||(c.m==56)||(c.m==57))
     { c.oprand();
      }
   else
    {if((c.m==42)||(c.m==43)||(c.m==45)||(c.m==47))
     {clrscr();c.frame(); c.g=1;c.e=c.k;c.f=c.j;
     c.op2=c.opr1;c.opr1=0;
      gotoxy(c.e,c.f);cout<<c.op2;
      gotoxy(6,5);  c.op=c.m;
     if(c.op==42)
       {cout<<"*";c.opo='*';
	gotoxy(17,12);textbackground(7); textcolor(0);cprintf(" * ");
     textbackground(0); textcolor(7);  }
     if(c.op==43)
       {cout<<"+";c.opo='+';
	gotoxy(17,10);textbackground(7); textcolor(0);cprintf(" + ");
     textbackground(0); textcolor(7);  }
     if(c.op==45)
       {cout<<"-"; c.opo='-';
	gotoxy(17,11);textbackground(7); textcolor(0);cprintf(" - ");
     textbackground(0); textcolor(7);}
     if(c.op==47)
       {cout<<"/"; c.opo='/';
	gotoxy(13,12);textbackground(7); textcolor(0);cprintf(" / ");
     textbackground(0); textcolor(7); }
     c.i=18;c.j=6;c.k=18;gotoxy(c.i,c.j);
     c.m=getch();
     c.oprand();
     }
     else
     {if(c.m==13)
	  {gotoxy(6,5);cout<<c.opo;
	   if(c.op==42)
	     result=c.op2*c.opr1;
	    if(c.op==43)
	     result=c.op2+c.opr1;
	   if(c.op==45)
	     result=c.op2-c.opr1;
	   if(c.op==47)
	     result=c.op2/c.opr1;
	   gotoxy(8,7);cout<<result;
	   getch(); c.g=2;
	   c.i=18;c.k=18;c.j=4;c.opr1=0;
	  }
     }
   }
 }
}
getch();
}
