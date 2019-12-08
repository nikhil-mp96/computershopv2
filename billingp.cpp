#include<iostream.h> // To use cout and cin Functions
#include<conio.h>    // To use clrscr()
#include<fstream.h>  // To use data file Handling Concept
#include<stdio.h>    // To use gets() , puts()
#include<iomanip.h>  // To use Stew()
#include<string.h>   // To use Strcmp()
#include<process.h>  // To use exit(0)

void main()
{
 clrscr();
 ofstream fout;
 int k ;
 char Name[50] ;
 fout.open( "Bill123.docx" , ios::out );
 fout<<"\n*************************************************************************";
 fout<<"\n                           XXXXX  computer shop ";
 fout<<"\n                           TiruXXXX Enterprices ";
 fout<<"\n             (Delears in computer hardware and peripherials)";
 fout<<"\n             Email XXXXtirupaticomp@gmail.com";
 fout<<"\n\n                                                        ADDRESS : ";
 fout<<"\n                                                            XXXX road ";
 fout<<"\n                                                            XXXX building ";
 fout<<"\n\n                                                        Ph:987788XXXX/ ";
 fout<<"\n                                                            998723XXXX/ ";
 fout<<"\n                                                            02555624XXXX/ ";
 fout<<"\n\n You Have listed to buy these items   ";
 cout<<"\nEnter Your Name ";
 gets(Name);
 fout<<"\n\n M/s. ";
 for( k=0 ; Name[k]!='\0' ; ++k )
  fout<<Name[k];

 fout<<"\n\n\n\n____T H A N K____Y O U____F O R____S H O P P I N G____";
 fout<<"\n*************************************************************************";
 getch();
 fout.close();

}
