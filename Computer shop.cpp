/*Program to Create a "Computer Shop" Using a C++ Programming Language */

//*******************************************************************************
//                   HEADER FILE USED IN PROJECT
//*******************************************************************************

#include<iostream.h> // To use cout and cin Functions
#include<conio.h>    // To use clrscr()
#include<fstream.h>  // To use data file Handling Concept
#include<stdio.h>    // To use gets() , puts()
#include<iomanip.h>  // To use Stew()
#include<string.h>   // To use Strcmp()
#include<process.h>  // To use exit(0)

//*******************************************************************************
//                   CLASS USED IN PROJECT
//********************************************************************************


class LaptopAcc    //Laptop Accesories
{
  private:

  int Pcode;        // Characteristics of the laptop

  char Type[20];
  char Name[20];
  float Weight;
  float Price;

  public:

  char Brand[20];   // To Know the Data members out of the program
  char Cart;

  LaptopAcc()    // Constructor to initilse the data members with an initial Value
  {
	strcpy( Type , "Not Assigned Yet" );
	strcpy( Name , "Not Assigned Yet" );
	strcpy( Brand , "Not Assigned Yet" );
	Weight = 0.0 ;
	Price = 0.0;
	Pcode = 0;
	Cart = 'N';
  }

  void GetLaptopAcc();   // Member function to read data

  void PutLaptopAcc();   // Member function to read data

  int PutPcodeLaptopAcc()
  {
	return Pcode;     // Accesor function to return the Value of the Pcode
  }

  float PutPriceLaptopAcc()
  {
	return Price;   // Accesor function to return the Value of the Price
  }

};

void LaptopAcc :: GetLaptopAcc()  // Member fuction to Get the data From the user interface
{
  clrscr();  // To clear the screen

  cout<<"\nEnter the Product Code ";
  cin>>Pcode;
  cout<<"\nEnter the type of the item ";
  gets(Type);
  cout<<"\nEnter the Brand of the item ";
  gets(Brand);
  cout<<"\nEnter the Name of the item ";
  gets(Name);
  cout<<"\nEnter the weight of the item ";
  cin>>Weight;
  cout<<"\nEnter the price of the item ";
  cin>>Price;

  return;

}

void LaptopAcc :: PutLaptopAcc()  // Member fuction to Show the data From the user interface
{
  cout<<"\n\nThe Product Code "<<Pcode;
  cout<<"\n\nThe type of the item is ";
  puts(Type);
  cout<<"\n\nThe Brand of the item is ";
  puts(Brand);
  cout<<"\n\nThe Name of the item is ";
  puts(Name);
  cout<<"\n\nThe weight of the item is ";
  cout<<Weight;
  cout<<"\n\nThe price of the item is ";
  cout<<Price;

  return;

}
									  //End of the Class Laptop Accsesore



class Tablets               //Tablets Start
{
  private:

  int Pcode;
  char Specifications[100]; // Characteristics of the Tablets
  char Name[25];
  float Price;
  float scrsize;

  public:

  char Cart;
  char Brand[20];  // To Know the Data members out of the program

  Tablets()  // Constructor to initilse the data members with an initial Value
  {
	Pcode=0;
	strcpy( Brand , "Not Assigned Yet" );
	strcpy( Specifications , "Not Assigned Yet" );
	strcpy( Name , "Not Assigned Yet" );
	Price = 0.0;
	scrsize = 0.0;
	Cart = 'N';
  }

  int PutPcodeTablets()
  {
	return Pcode;       // Accesor function to return the Value of the Pcode
  }

  float PutPriceTablets()
  {
	return Price;       // Accesor function to return the Value of the Price
  }

  void GetTablets(); // Member function to read data

  void PutTablets(); // Member function to show data

};

void Tablets :: GetTablets()// Member fuction to Get the data From the user interface
{
  clrscr();

  cout<<"\nEnter the Product code of the Tablet ";
  cin>>Pcode;
  cout<<"\nEnter the Brand of the Tablet  ";
  gets(Brand);
  cout<<"\nEnter the Name of the Tablet  ";
  gets(Name);
  cout<<"\nEnter the Specifications of the Tablet \n\n  ";
  gets(Specifications);
  cout<<"\nEnter the price of the Tablet ";
  cin>>Price;
  cout<<"\nEnter the screen size ";
  cin>>scrsize;

  return;

}

void Tablets ::  PutTablets()// Member fuction to Show the data From the user interface
{
  cout<<"\n\nThe Product code of the Tablet is "<<Pcode;
  cout<<"\n\nThe Brand of the Tablet is  ";
  puts(Brand);
  cout<<"\n\nThe Name of the Tablet is  ";
  puts(Name);
  cout<<"\n\nThe Specifications of the Tablet is \n\n  ";
  puts(Specifications);
  cout<<"\n\nThe price of the Tablet is  "<<Price;
  cout<<"\n\nThe screen size is  "<<scrsize;

  return;

}                                // Tablets End

class Network                    // Network Start
{
  private:

  int Pcode;    // Characteristics of the Network components
  char Classtype;
  int Range;
  char Name[30];

  char Type[50];
  float Price;

  public:

  char Cart;     // To Know the Data members out of the program
  char Brand[20];

  Network()// Constructor to initilse the data members with an initial Value
  {
	Pcode = 0;
	Classtype = '0';
	Range = 0;
	Cart = 'N';
	Price=0;
	strcpy( Name , "Not Assigned Yet" );
	strcpy( Brand , "Not Assigned Yet" );
	strcpy( Type , "Not Assigned Yet" );
  }

  int PutPcodeNetwork()
  {
	return Pcode; // Accesor function to return the Value of the Pcode
  }

  float PutPriceNetwork()
  {
	return Price;  // Accesor function to return the Value of the Price
  }

 void GetNetwork();// Member function to read data

 void PutNetwork(); // Member function to show data

};

void Network :: GetNetwork()// Member fuction to Get the data From the user interface
{
  clrscr();

  cout<<"\nEnter the Product code ";
  cin>>Pcode;
  cout<<"\nEnter the Brand ";
  gets(Brand);
  cout<<"\nEnter the Name ";
  gets(Name);
  cout<<"\nEnter the Type ";
  gets(Type);
  cout<<"\nEnter the Class Type ";
  cin>>Classtype;
  cout<<"\nEnter the Range ";
  cin>>Range;
  cout<<"\nEnter the price of the Item ";
  cin>>Price;

  return;

}

void Network :: PutNetwork()// Member fuction to Show the data From the user interface
{
  cout<<"\n\nThe Product code of item is "<<Pcode;
  cout<<"\n\nThe Brand of item is ";
  puts(Brand);
  cout<<"\n\nThe Name of item is ";
  puts(Name);
  cout<<"\n\nThe Type of item is ";
  puts(Type);
  cout<<"\n\nThe Class Type of item is "<<Classtype;
  cout<<"\n\nThe Range of item is "<<Range;
  cout<<"\n\nThe Price of the Item is "<<Price;

  return;

}                       //Network End


class Laptops            //Laptops Start
{
 private:

 int Pcode;   // Characteristics of the laptop
 char cla[20] , Processor[20] , Sysmem[20] , Storage[20];
 char Os[20] , Graphics[25];
 float Weight;
 float Dimentions[3];
 char Warranty[30];
 double Price;

 public:

 char Cart;     // To Know the Data members out of the program
 char Brand[20];

 Laptops() // Constructor to initilse the data members with an initial Value
 {
  Pcode=0;
  Cart = 'N';
  strcpy( cla , "Not Assigned Yet" );
  strcpy( Brand , "Not Assigned Yet" );
  strcpy( Processor , "Not Assigned Yet" );
  strcpy( Sysmem , "Not Assigned Yet" );
  strcpy( Storage , "Not Assigned Yet" );
  strcpy( Os , "Not Assigned Yet" );
  strcpy( Graphics , "Not Assigned Yet" );
  strcpy( Warranty , "Not Assigned Yet" );
  Weight = 0;
  Price = 0;
  Dimentions[0] = 0;
  Dimentions[1] = 0;
  Dimentions[2] = 0;
 }

 int PutPcodeLaptops()
 {
	return Pcode;  // Accesor function to return the Value of the Pcode
 }

 float PutPriceLaptops()
 {
	return Price; // Accesor function to return the Value of the Price
 }

 void GetLaptops();    // Member function to read data

 void PutLaptops();   // Member function to show data

};

void Laptops :: GetLaptops() // Member fuction to Get the data From the user interface
{
 clrscr();

 cout<<"\nEnter the Product code ";
 cin>>Pcode;
 cout<<"\nEnter the Class of the laptop  ";
 gets(cla);
 cout<<"\nEnter the Brand of the laptop  ";
 gets(Brand);
 cout<<"\nEnter the Processor of the laptop  ";
 gets(Processor);
 cout<<"\nEnter the System Memory  ";
 gets(Sysmem);
 cout<<"\nEnter the Storage of the laptop  ";
 gets(Storage);
 cout<<"\nEnter the Operating Syste of the Laptop  ";
 gets(Os);
 cout<<"\nEnter the Graphics Configuration of the laptop  ";
 gets(Graphics);
 cout<<"\nEnter the Warranty of the laptop  ";
 gets(Warranty);
 cout<<"\nEnter the Weight of the laptop  ";
 cin>>Weight;
 cout<<"\nEnter the dimentions of the laptop  ";
 cin>>Dimentions[0];
 cout<<" X ";
 cin>>Dimentions[1];
 cout<<" X ";
 cin>>Dimentions[2];
 cout<<"\nEnter the Price of the Laptop ";
 cin>>Price;

 return;

}

void Laptops :: PutLaptops()// Member fuction to Show the data From the user interface
{
 cout<<"\nThe Product code is "<<Pcode;
 cout<<"\nThe Class of the laptop is ";
 puts(cla);
 cout<<"\nThe Brand of the laptop is ";
 puts(Brand);
 cout<<"\nThe Processor of the laptop is ";
 puts(Processor);
 cout<<"\nThe System Memory is ";
 puts(Sysmem);
 cout<<"\nThe Storage of the laptop is ";
 puts(Storage);
 cout<<"\nThe Operating Syste of the Laptop is ";
 puts(Os);
 cout<<"\nThe Graphics Configuration of the laptop is ";
 puts(Graphics);
 cout<<"\nThe Warranty of the laptop is ";
 puts(Warranty);
 cout<<"\nThe Weight of the laptop is ";
 cout<<Weight;
 cout<<"\nThe price of the laptop is  "<<Price;
 cout<<"\nThe dimentions of the laptop is ";
 cout<<Dimentions[0]<<" X "<<Dimentions[1]<<" X "<<Dimentions[2];

 return;
										 //laptops End
}


class Desktop            //Desktop Start
{
 private:

 int Pcode;  // Characteristics of the Desktop
 char Name[30] , Type[25] , Processor[20] , OS[20] ,  Sysmem[20];
 char HardDrive[20] ;
 float Price;

 public:

 char Cart;  // To Know the Data members out of the program
 char Brand[20];

 Desktop() // Constructor to initilse the data members with an initial Value
 {
  Pcode=0;
  Cart = 'N';
  strcpy( Name , "Not Assigned Yet" );
  strcpy( Type , "Not Assigned Yet" );
  strcpy( Processor , "Not Assigned Yet" );
  strcpy( OS , "Not Assigned Yet" );
  strcpy( Sysmem , "Not Assigned Yet" );
  strcpy( HardDrive , "Not Assigned Yet" );
  strcpy( Brand , "Not Assigned Yet" );
  Price = 0;
 }

 int PutPcodeDesktop()
 {
	return Pcode; // Accesor function to return the Value of the Pcode
 }

 float PutPriceDesktop()
 {
	return Price; // Accesor function to return the Value of the Price
 }

 void PutDesktop();  // Member function to show data

 void GetDesktop(); // Member function to read data

};

void Desktop :: GetDesktop() // Member fuction to Get the data From the user interface
{
  cout<<"\nEnter the Product code of the Item ";
  cin>>Pcode;
  cout<<"\nEnter the Brand of the Computer ";
  gets(Brand);
  cout<<"\nEnter the Name of the Computer ";
  gets(Name);
  cout<<"\nEnter the Type of the Computer ";
  gets(Type);
  cout<<"\nEnter the Operating System of the Computer ";
  gets(OS);
  cout<<"\nEnter the Processor of the Computer ";
  gets(Processor);
  cout<<"\nEnter the HardDrive Space of the Computer ";
  gets(HardDrive);
  cout<<"\nEnter the System Memory of the Computer ";
  gets(Sysmem);
  cout<<"\nEnter the price of the Computer ";
  cin>>Price;

  return;

}

void Desktop :: PutDesktop() // Member fuction to Show the data From the user interface
{
  cout<<"\nThe Product code of the Item is "<<Pcode;
  cout<<"\nThe Brand of the Computer is ";
  puts(Brand);
  cout<<"\nThe Name of the Computer is ";
  puts(Name);
  cout<<"\nThe Type of the Computer is ";
  puts(Type);
  cout<<"\nThe Operating System of the Computer is ";
  puts(OS);
  cout<<"\nThe Processor of the Computer is ";
  puts(Processor);
  cout<<"\nThe HardDrive Space of the Computer is ";
  puts(HardDrive);
  cout<<"\nThe System Memory of the Computer is ";
  puts(Sysmem);
  cout<<"\nThe price of the Computer is "<<Price;

  return;

}                     // Dextop End

class ComputerPeri      //Computer periferals
{
 private:

 int Pcode; // Characteristics of the Computer Periferals
 char Keyfeatures[100] , Name[20]  , Type[20] ;
 float Price;

 public:

 char Brand[20];// To Know the Data members out of the program
 char Cart;

 ComputerPeri() // Constructor to initilse the data members with an initial Value
 {
  Pcode=0;
  Cart = 'N';
  strcpy( Keyfeatures , "Not Assigned Yet" );
  strcpy( Name , "Not Assigned Yet" );
  strcpy( Brand , "Not Assigned Yet" );
  strcpy( Type , "Not Assigned Yet" );
  Price = 0;
 }

 int PutPcodeComputerPeri()
 {
	return Pcode;  // Accesor function to return the Value of the Pcode
 }

 float PutPriceComputerPeri()
 {
	return Price;  // Accesor function to return the Value of the Price
 }

 void GetComputerPeri(); // Member function to read data

 void PutComputerPeri(); // Member function to show data

};

void ComputerPeri :: GetComputerPeri() // Member fuction to Get the data From the user interface
{
  clrscr();

  cout<<"\nEnter the Product code of the item ";
  cin>>Pcode;
  cout<<"\nEnter the Type of the Item ";
  gets(Type);
  cout<<"\nEnter the Brand of the Item ";
  gets(Brand);
  cout<<"\nEnter the Key Features of the Item ";
  gets(Keyfeatures);
  cout<<"\nEnter the price of the Item ";
  cin>>Price;

  return;

}

void ComputerPeri :: PutComputerPeri() // Member fuction to Show the data From the user interface
{
  cout<<"\nThe Product code of the item "<<Pcode;
  cout<<"\nThe Type of the Item ";
  puts(Type);
  cout<<"\nThe Brand of the Item ";
  puts(Brand);
  cout<<"\nThe Key Features of the Item ";
  puts(Keyfeatures);
  cout<<"\nThe price of the Item "<<Price;

  return;

}                        //End of Computer periferals

class Software           //Start of software
{
 private:

 char Name[30] ;   // Characteristics of the Software
 char Details[100];
 int Pcode ;
 float Price;

 public:

 char Brand[20];
 char Cart;     // To Know the Data members out of the program

 Software()// Constructor to initilse the data members with an initial Value
 {
  strcpy( Brand , "Not Assigned Yet" );
  strcpy( Name , "Not Assigned Yet" );
  strcpy( Details , "Not Assigned Yet" );
  Pcode = 0.0 ;
  Cart = 'N';
  Price = 0;
 }

 int PutPcodeSoftware()
 {
	return Pcode;// Accesor function to return the Value of the Pcode
 }

 float PutPriceSoftware()
 {
	return Price;// Accesor function to return the Value of the Price
 }

 void GetSoftware();// Member function to read data

 void PutSoftware(); // Member function to show data

};

void Software ::  GetSoftware() // Member fuction to Get the data From the user interface
{
 clrscr();

 cout<<"\nEnter the Product code ";
 cin>>Pcode;
 cout<<"\nEnter the Brand of the item ";
 gets(Brand);
 cout<<"\nEnter the Name of the item ";
 gets(Name);
 cout<<"\nEnter the Details of the item ";
 gets(Details);
 cout<<"\nEnter the price of the ";
 cin>>Price;

 return;

}

void Software ::  PutSoftware()// Member fuction to Show the data From the user interface
{
 clrscr();

 cout<<"\n\nThe Product code is "<<Pcode;
 cout<<"\n\nThe Brand of the item is ";
 puts(Brand);
 cout<<"\n\nThe Name of the item is ";
 puts(Name);
 cout<<"\n\nThe Details of the item is ";
 puts(Details);
 cout<<"\n\nThe price of the item is "<<Price;

 return;

}                           //End of Software

									 //Start of Audio players
class  Audio
{
 private:

 char Type[20] , Name[30] , Details[50];
 float Price; // Characteristics of the Audio players
 int Pcode;

 public:

 char Brand[20];
 char Cart;   // To Know the Data members out of the program

 Audio()// Constructor to initilse the data members with an initial Value
 {
  Cart = 'N';
  strcpy( Brand , "Not Assigned Yet" );
  strcpy( Type , "Not Assigned Yet" );
  strcpy( Name , "Not Assigned Yet" );
  strcpy( Details , "Not Assigned Yet" );
  Price = 0.0 ;
  Pcode = 0 ;
 }

 int PutPcodeAudio()
 {
	return Pcode; // Accesor function to return the Value of the Pcode
 }

 float PutPriceAudio()
 {
	return Price; // Accesor function to return the Value of the Price
 }

 void GetAudio(); // Member function to read data

 void PutAudio(); // Member function to show data

};

void Audio :: GetAudio()// Member fuction to Get the data From the user interface
{
 clrscr();
 cout<<"\nEnter the Product code of the item ";
 cin>>Pcode;
 cout<<"\nEnter the Brand of the item ";
 gets(Brand);
 cout<<"\nEnter the Name of the item ";
 gets(Name);
 cout<<"\nEnter the Type of the item ";
 gets(Type);
 cout<<"\nEnter the Details of the item ";
 gets(Details);
 cout<<"\nEnter the Price of the item ";
 cin>>Price;

 return;
}

void Audio :: PutAudio()// Member fuction to Show the data From the user interface
{
 cout<<"\n\nThe Product code of the item is "<<Pcode;
 cout<<"\n\nThe Brand of the item is ";
 puts(Brand);
 cout<<"\nThe Name of the item is ";
 puts(Name);
 cout<<"\nThe Type of the item is ";
 puts(Type);
 cout<<"\nThe Details of the item is ";
 puts(Details);
 cout<<"\nThe Price of the item is "<<Price;

 return;
}
										//End of Audio players

										//start of Computer components
class ComputerComp
{
 private:

 char Name[30] , Type[20] ,  Details[100];
 int Pcode;   // Characteristics of the Computer components
 float Price;

 public:

 char Cart;   // To Know the Data members out of the program
 char Brand[20] ;

 ComputerComp()// Constructor to initilse the data members with an initial Value
 {
  strcpy( Name , "Not Assigned Yet" );
  strcpy( Type , "Not Assigned Yet" );
  strcpy( Brand , "Not Assigned Yet" );
  strcpy( Details , "Not Assigned Yet" );
  Pcode = 0 ;
  Cart = 'N';
  Price = 0.0 ;
 }

 int PutPcodeComputerComp()
 {
	return Pcode; // Accesor function to return the Value of the Pcode
 }

 float PutPriceComputerComp()
 {
	return Price; // Accesor function to return the Value of the Price
 }

 void GetComputerComp(); // Member function to read data

 void PutComputerComp();  // Member function to show data

};

void ComputerComp :: GetComputerComp()// Member fuction to Get the data From the user interface
{
 clrscr();
 cout<<"\nEnter the Product code of the item ";
 cin>>Pcode;
 cout<<"\nEnter the Brand of the item ";
 gets(Brand);
 cout<<"\nEnter the Name of the item ";
 gets(Name);
 cout<<"\nEnter the Type of the item ";
 gets(Type);
 cout<<"\nEnter the Detalis of the item ";
 gets(Details);
 cout<<"\nEnter the price of the item ";
 cin>>Price;

 return;

}

void ComputerComp :: PutComputerComp()// Member fuction to Show the data From the user interface
{
 cout<<"\nThe Product code of the item is "<<Pcode;
 cout<<"\n\nThe Brand of the item is ";
 puts(Brand);
 cout<<"\n\nThe Name of the item is ";
 puts(Name);
 cout<<"\n\nThe Type of the item is ";
 puts(Type);
 cout<<"\n\nThe Detalis of the item is ";
 puts(Details);
 cout<<"\n\nThe price of the item is "<<Price;

 return;

}
								// End of computer components
										//start of Tab Accessories
class TabletsAcc
{
 private:

 char Name[30] , Details[50];
 int Pcode; // Characteristics of the Tab Accessories
 float Price;

 public:

 char Brand[20];
 char Cart;   // To Know the Data members out of the program

 TabletsAcc()// Constructor to initilse the data members with an initial Value
 {
  strcpy( Name , "Not Assigned Yet" );
  strcpy( Brand , "Not Assigned Yet" );
  strcpy( Details , "Not Assigned Yet" );
  Pcode = 0;
  Cart = 'N';
  Price = 0.0 ;
 }

 int PutPcodeTabletsAcc()
 {
	return Pcode;    // Accesor function to return the Value of the Pcode
 }

 float PutPriceTabletsAcc()
 {
	return Price;  // Accesor function to return the Value of the Price
 }

 void GetTabletsAcc(); // Member function to read data

 void PutTabletsAcc(); // Member function to show data

};

void TabletsAcc :: GetTabletsAcc() // Member fuction to Get the data From the user interface
{
 clrscr();

 cout<<"\nEnter the product code of the item ";
 cin>>Pcode;
 cout<<"\nEnter the Brand of the item ";
 gets(Brand);
 cout<<"\nEnter the Name of the item ";
 gets(Name);
 cout<<"\nEnter the Details of the item ";
 gets(Details);
 cout<<"\nEnter the Price of the item ";
 cin>>Price;

 return;

}

void TabletsAcc :: PutTabletsAcc() // Member fuction to Show the data From the user interface
{


 cout<<"\n\nThe product code of the item  is "<<Pcode;
 cout<<"\n\nThe Brand of the item is ";
 puts(Brand);
 cout<<"\n\nThe Name of the item is ";
 puts(Name);
 cout<<"\n\nThe Details of the item is ";
 puts(Details);
 cout<<"\n\nThe Price of the item is "<<Price;

 return;

}
									 //End of Tab Accc
								  //Start of Tv and acc
class Tv
{
 private:

 char Name[30] , Details[50] , Type[20];
 int Pcode; // Characteristics of the Tv and acc
 float Price;

 public:

 char Cart; // To Know the Data members out of the program
 char Brand[20];

 Tv() // Constructor to initilse the data members with an initial Value
 {
  strcpy( Name , "Not Assigned Yet" );
  strcpy( Brand , "Not Assigned Yet" );
  strcpy( Details , "Not Assigned Yet" );
  strcpy( Type , "Not Assigned Yet" );
  Pcode = 0 ;
  Cart = 'N';
  Price = 0.0 ;
 }

 int PutPcodeTv()
 {
	return Pcode;// Accesor function to return the Value of the Pcode
 }

 float PutPriceTv()
 {
	return Price;// Accesor function to return the Value of the Price
 }

 void GetTv();// Member function to read data

 void PutTv();// Member function to show data

};

void Tv :: GetTv() // Member fuction to Get the data From the user interface
{
 clrscr();

 cout<<"\nEnter the Product code of the item ";
 cin>>Pcode;
 cout<<"\nEnter the Brand of the item ";
 gets(Brand);
 cout<<"\nEnter the Type of the item ";
 gets(Type);
 cout<<"\nEnter the Name of the item ";
 gets(Name);
 cout<<"\nEnter the Details of the item ";
 gets(Details);
 cout<<"\nEnter the Price of the item ";
 cin>>Price;

 return;

}

void Tv :: PutTv()// Member fuction to Show the data From the user interface
{
 cout<<"\n\nThe Product code of the item is "<<Pcode;
 cout<<"\n\nThe Brand of the item is ";
 puts(Brand);
 cout<<"\n\nThe Type of the item is ";
 puts(Type);
 cout<<"\n\nThe Name of the item is ";
 puts(Name);
 cout<<"\n\nThe Details of the item is ";
 puts(Details);
 cout<<"\n\nThe Price of the item is "<<Price;

 return;

}
										 //End of Tv and acc
									  //start of video players
class VideoPl
{
 private:

 char Type[20] , Name[20] , Details[50];
 int Pcode;  // Characteristics of the video players
 float Price;

 public:

 char Cart;   // To Know the Data members out of the program
 char Brand[20];

 VideoPl()// Constructor to initilse the data members with an initial Value
 {
  strcpy( Brand , "Not Assigned Yet" );
  strcpy( Type , "Not Assigned Yet" );
  strcpy( Name , "Not Assigned Yet" );
  strcpy( Details , "Not Assigned Yet" );
  Pcode = 0 ;
  Cart = 'N';
  Price = 0.0 ;
 }

 int PutPcodeVideoPl()
 {
	return Pcode;// Accesor function to return the Value of the Pcode
 }

 float PutPriceVideoPl()
 {
	return Price;// Accesor function to return the Value of the Price
 }

 void GetVideoPl();// Member function to read data

 void PutVideoPl();// Member function to show data

};

void VideoPl :: GetVideoPl()// Member fuction to Get the data From the user interface
{
 clrscr();

 cout<<"\nEnter the Product code of the item ";
 cin>>Pcode;
 cout<<"\nEnter the Brand of the item ";
 gets(Brand);
 cout<<"\nEnter the Type of the item ";
 gets(Type);
 cout<<"\nEnter the Name of the item ";
 gets(Name);
 cout<<"\nEnter the Details of the item \n";
 gets(Details);
 cout<<"\nEnter the price of the item ";
 cin>>Price;

 return;

}

void VideoPl :: PutVideoPl()// Member fuction to Show the data From the user interface
{
 cout<<"\n\nThe Product code of the item is "<<Pcode;
 cout<<"\n\nThe Brand of the item is ";
 puts(Brand);
 cout<<"\n\nThe Type of the item is ";
 puts(Type);
 cout<<"\n\nThe Name of the item is ";
 puts(Name);
 cout<<"\n\nThe Details of the item is ";
 puts(Details);
 cout<<"\n\nThe price of the item is "<<Price;

 return;

}

// End of Video players


//*******************************************************************************
//                   Objects USED IN PROJECT
//********************************************************************************

 LaptopAcc LACC[10] , Lacc1;

 Tablets TB[10], Tb1;

 Network NW[10], Nw1;

 Laptops LP[10], Lp1;

 Desktop DX[10], Dx1;

 ComputerPeri CP[10], Cp1;

 Software SF[10], Sf1;

 Audio AU[10], Au1;

 ComputerComp CC[10], Cc1;;

 TabletsAcc TACC[10], Tacc1;

 Tv TV[10], Tv1;

 VideoPl VP[10], Vp1;

//*****************************************************************************
//                   Functions USED IN PROJECT
//*****************************************************************************

void Introducion() // To View the interface and the introduction to the project
{                       // and its topic
  clrscr();   //For clear screen

  cout << setw(53) << "Computer Science Project" << "\n\n\n\n\n\n\n\n\n" ;
  cout << setw(53) << "Topic : Computer shop\n" ;
  cout << "\n\n\n\n\n\n\n\n\n\n" ;
  cout << setw(82) << "Nikhil Mahesh Patel \n" ;
  cout << setw(79) << "Studing in 11th B\n" ;
  cout << setw(78) << "Roll number 20\n" ;

  getch();   //To pause the Running Program

}

int Index() // To show the user the categories of the product available in the shop
{
  int ch;
  clrscr();   //For clear screen

  cout<<"\n******************************* Computer Shop ********************************* \n\n";
  cout<<"\n    1.   Laptop Comuters";
  cout<<"\n    2.   Laptop Accessories";
  cout<<"\n    3.   Tablets";
  cout<<"\n    4.   Network components";
  cout<<"\n    5.   All-in-one Desktops";
  cout<<"\n    6.   Computer Peripherals";
  cout<<"\n    7.   Software";
  cout<<"\n    8.   Computer Components";
  cout<<"\n    9.   Tablet Accessories";
  cout<<"\n    10.  Audio Players";
  cout<<"\n    11.  Video Playes";
  cout<<"\n    12.  Tv & Video Accessories";
  cout<<"\n    13.  Billing  ";
  cout<<"\n    14.  Administrator";
  cout<<"\n    15.  Exit";

  cout<<"\n\n Please Enter Your choice (1-15):";
  cin>>ch;

  return ch;  // return the value to the fuction
}


// Initialise Objects is a fuction which reads the bock of the data and store it in object
// from the file Existing

void InitialiseObjects()
{
 int i = 0;

 ifstream fin;

 fin.open("Tablets.dat" , ios::in|ios::binary );  // To read data

 while ( !fin.eof() )
 {
  fin.read( (char*)&TB[i] , sizeof(TB[i]) );  // To read data
  i++;
 }

 fin.close();
 i = 0;
 fin.open("LaptopAccessories.dat" , ios::in|ios::binary );   // To read data

 while ( !fin.eof() )
 {
  fin.read( (char*)&LACC[i] , sizeof(LACC[i]) );    // To read data
  i++;
 }

 fin.close();
 i = 0;
 fin.open("Software.dat" , ios::in|ios::binary );  // To read data

 while ( !fin.eof() )
 {
  fin.read( (char*)&SF[i] , sizeof(SF[i]) );  // To read data
  i++;
 }

 fin.close();
 i = 0;
 fin.open("Network.dat" , ios::in|ios::binary );    // To read data

 while ( !fin.eof() )
 {
  fin.read( (char*)&NW[i] , sizeof(NW[i]) );       // To read data
  i++;
 }

 fin.close();
 i = 0;
 fin.open("Laptops.dat" , ios::in|ios::binary );    // To read data

 while ( !fin.eof() )
 {
  fin.read( (char*)&LP[i] , sizeof(LP[i]) );      // To read data
  i++;
 }

 fin.close();
 i = 0;
 fin.open("Desktop.dat" , ios::in|ios::binary );    // To read data

 while ( !fin.eof() )
 {
  fin.read( (char*)&DX[i] , sizeof(DX[i]) );    // To read data
  i++;
 }

 fin.close();
 i = 0;
 fin.open("CompPeri.dat" , ios::in|ios::binary );   // To read data

 while ( !fin.eof() )
 {
  fin.read( (char*)&CP[i] , sizeof(CP[i]) );   // To read data
  i++;
 }

 fin.close();
 i = 0;
 fin.open("AudioAccessories.dat" , ios::in|ios::binary );  // To read data

 while ( !fin.eof() )
 {
  fin.read( (char*)&AU[i] , sizeof(AU[i]) );    // To read data
  i++;
 }

 fin.close();
 i = 0;
 fin.open("CompCom.dat" , ios::in|ios::binary );   // To read data

 while ( !fin.eof() )
 {
  fin.read( (char*)&CC[i] , sizeof(CC[i]) );   // To read data
  i++;
 }

 fin.close();
 i = 0;
 fin.open("TabletAccessories.dat" , ios::in|ios::binary );   // To read data

 while ( !fin.eof() )
 {
  fin.read( (char*)&TACC[i] , sizeof(TACC[i]) );    // To read data
  i++;
 }

 fin.close();
 i = 0;
 fin.open("TvAccesories.dat" , ios::in|ios::binary );  // To read data

 while ( !fin.eof() )
 {
  fin.read( (char*)&TV[i] , sizeof(TV[i]) );    // To read data
  i++;
 }

 fin.close();
 i = 0;
 fin.open("VideoPlayers.dat" , ios::in|ios::binary );   // To read data

 while ( !fin.eof() )
 {
  fin.read( (char*)&VP[i] , sizeof(VP[i]) );     // To read data
  i++;
 }

 fin.close();

}

// Exit is a fuction which is called whenever the user is closing the program
void Exit()
{
 clrscr();

 cout<<"\nHope you Enjoy Shopping With Us ";
 cout<<"\n\n\n\n\n\n\n\n\n\n";
 cout<<setw(53)<<"T H A N K  Y O U ";

 exit(0); // Used form the header file process.h
}

// This LaptopComuters() Are the function to create an interface for the user to select the
// appropriate comands to buy the product or to reject it

void LaptopComuters()
{
 clrscr();

 int i = 0;
 char ch;

 while( strcmp ( LP[i].Brand , "Not Assigned Yet" ) )
 {
  cout<<"\n  "<<(i+1)<<"   ";
  puts( LP[i].Brand );
  i++;
 }

 cout<<"\nChose any Brand You Want to View ( 0 - "<<i<<" ) : ";
 cin>>i;
 i -= 1;
 LP[i].PutLaptops();
 cout<<"\nDo you Want to Buy This Laptop Computer(Y / N) ";
 cin>>ch;
 if( ch == 'Y' || ch == 'y' )
  LP[i].Cart = 'Y' ;
 cout<<"\n\n\nThank you for Shopping";

}

// This LaptopAccessories() Are the function to create an interface for the user to select the
// appropriate comands to buy the product or to reject it


void LaptopAccessories()
{
 clrscr();

 int i = 0;
 char ch;

 while( strcmp ( LACC[i].Brand , "Not Assigned Yet" ) )
 {
  cout<<"\n  "<<(i+1)<<"   ";
  puts( LACC[i].Brand );
  i++;
 }

 cout<<"\nChose any Brand You Want to View ( 0 - "<<i<<" ) : ";
 cin>>i;
 i -= 1;
 LACC[i].PutLaptopAcc();
 cout<<"\nDo you Want to Buy This Laptop Accesories (Y / N) ";
 cin>>ch;
 if( ch == 'Y' || ch == 'y' )
  LACC[i].Cart = 'Y' ;
 cout<<"\n\n\nThank you for Shopping";

}

// This Tablets() Are the function to create an interface for the user to select the
// appropriate comands to buy the product or to reject it


void Tablets()
{
 clrscr();

 int i = 0;
 char ch;

 while( strcmp ( TB[i].Brand , "Not Assigned Yet" ) )
 {
  cout<<"\n  "<<(i+1)<<"   ";
  puts( TB[i].Brand );
  i++;
 }

 cout<<"\nChose any Brand You Want to View ( 0 - "<<i<<" ) : ";
 cin>>i;
 i -= 1;
 TB[i].PutTablets();
 cout<<"\nDo you Want to Buy This Tablet (Y / N) ";
 cin>>ch;
 if( ch == 'Y' || ch == 'y' )
  TB[i].Cart = 'Y' ;
 cout<<"\n\n\nThank you for Shopping";

}

// This Networkcomponents() Are the function to create an interface for the user to select the
// appropriate comands to buy the product or to reject it


void Networkcomponents()
{

 clrscr();
 int i = 0;
 char ch;

 while( strcmp ( NW[i].Brand , "Not Assigned Yet" ) )
 {
  cout<<"\n  "<<(i+1)<<"   ";
  puts( NW[i].Brand );
  i++;
 }

 cout<<"\nChose any Brand You Want to View ( 0 - "<<i<<" ) : ";
 cin>>i;
 i -= 1;
 NW[i].PutNetwork();
 cout<<"\nDo you Want to Buy This Network Components (Y / N) ";
 cin>>ch;
 if( ch == 'Y' || ch == 'y' )
  NW[i].Cart = 'Y' ;
 cout<<"\n\n\nThank you for Shopping";

}

// This AllinoneDesktops() Are the function to create an interface for the user to select the
// appropriate comands to buy the product or to reject it


void AllinoneDesktops()
{

 clrscr();
 int i = 0;
 char ch;

 while( strcmp ( DX[i].Brand , "Not Assigned Yet" ) )
 {
  cout<<"\n  "<<(i+1)<<"   ";
  puts( DX[i].Brand );
  i++;
 }

 cout<<"\nChose any Brand You Want to View ( 0 - "<<i<<" ) : ";
 cin>>i;
 i -= 1;
 DX[i].PutDesktop();
 cout<<"\nDo you Want to Buy This Desktop Computer(Y / N) ";
 cin>>ch;
 if( ch == 'Y' || ch == 'y' )
  DX[i].Cart = 'Y' ;
 cout<<"\n\n\nThank you for Shopping";

}

// This ComputerPeripherals() Are the function to create an interface for the user to select the
// appropriate comands to buy the product or to reject it


void ComputerPeripherals()
{

 clrscr();

 int i = 0;
 char ch;

 while( strcmp ( CP[i].Brand , "Not Assigned Yet" ) )
 {
  cout<<"\n  "<<(i+1)<<"   ";
  puts( CP[i].Brand );
  i++;
 }

 cout<<"\nChose any Brand You Want to View ( 0 - "<<i<<" ) : ";
 cin>>i;
 i -= 1;
 CP[i].PutComputerPeri();
 cout<<"\nDo you Want to Buy This Computer Peripherals (Y / N) ";
 cin>>ch;
 if( ch == 'Y' || ch == 'y' )
  CP[i].Cart = 'Y' ;
 cout<<"\n\n\nThank you for Shopping";

}

// This Software() Are the function to create an interface for the user to select the
// appropriate comands to buy the product or to reject it


void Software()
{
 clrscr();

 int i = 0;
 char ch;

 while( strcmp ( SF[i].Brand , "Not Assigned Yet" ) )
 {
  cout<<"\n  "<<(i+1)<<"   ";
  puts( SF[i].Brand );
  i++;
 }

 cout<<"\nChose any Brand You Want to View ( 0 - "<<i<<" ) : ";
 cin>>i;
 i -= 1;
 SF[i].PutSoftware();
 cout<<"\nDo you Want to Buy This SOftware (Y / N) ";
 cin>>ch;
 if( ch == 'Y' || ch == 'y' )
  SF[i].Cart = 'Y' ;
 cout<<"\n\n\nThank you for Shopping";

}

// This ComputerComponents() Are the function to create an interface for the user to select the
// appropriate comands to buy the product or to reject it


void ComputerComponents()
{
 clrscr();

 int i = 0;
 char ch;

 while( strcmp ( CC[i].Brand , "Not Assigned Yet" ) )
 {
  cout<<"\n  "<<(i+1)<<"   ";
  puts( CC[i].Brand );
  i++;
 }

 cout<<"\nChose any Brand You Want to View ( 0 - "<<i<<" ) : ";
 cin>>i;
 i -= 1;
 CC[i].PutComputerComp();
 cout<<"\nDo you Want to Buy This Computer Components (Y / N) ";
 cin>>ch;
 if( ch == 'Y' || ch == 'y' )
  CC[i].Cart = 'Y' ;
 cout<<"\n\n\nThank you for Shopping";

}

// This TabletAccessories() Are the function to create an interface for the user to select the
// appropriate comands to buy the product or to reject it


void TabletAccessories()
{

 clrscr();
 int i = 0;
 char ch;

 while( strcmp ( TACC[i].Brand , "Not Assigned Yet" ) )
 {
  cout<<"\n  "<<(i+1)<<"   ";
  puts( TACC[i].Brand );
  i++;
 }

 cout<<"\nChose any Brand You Want to View ( 0 - "<<i<<" ) : ";
 cin>>i;
 i -= 1;
 TACC[i].PutTabletsAcc();
 cout<<"\nDo you Want to Buy This Tablet Accessories(Y / N) ";
 cin>>ch;
 if( ch == 'Y' || ch == 'y' )
  TACC[i].Cart = 'Y' ;
 cout<<"\n\n\nThank you for Shopping";

}

// This AudioPlayers() Are the function to create an interface for the user to select the
// appropriate comands to buy the product or to reject it


void AudioPlayers()
{
 clrscr();

 int i = 0;
 char ch;

 while( strcmp ( AU[i].Brand , "Not Assigned Yet" ) )
 {
  cout<<"\n  "<<(i+1)<<"   ";
  puts( AU[i].Brand );
  i++;
 }

 cout<<"\nChose any Brand You Want to View ( 0 - "<<i<<" ) : ";
 cin>>i;
 i -= 1;
 AU[i].PutAudio();
 cout<<"\nDo you Want to Buy This Audio Players (Y / N) ";
 cin>>ch;
 if( ch == 'Y' || ch == 'y' )
  AU[i].Cart = 'Y' ;
 cout<<"\n\n\nThank you for Shopping";

}

// This VideoPlayes() Are the function to create an interface for the user to select the
// appropriate comands to buy the product or to reject it


void VideoPlayes()
{
 clrscr();

 int i = 0;
 char ch;

 while( strcmp ( VP[i].Brand , "Not Assigned Yet" ) )
 {
  cout<<"\n  "<<(i+1)<<"   ";
  puts( VP[i].Brand );
  i++;
 }

 cout<<"\nChose any Brand You Want to View ( 0 - "<<i<<" ) : ";
 cin>>i;
 i -= 1;
 VP[i].PutVideoPl();
 cout<<"\nDo you Want to Buy This Video Players (Y / N) ";
 cin>>ch;
 if( ch == 'Y' || ch == 'y' )
  VP[i].Cart = 'Y' ;
 cout<<"\n\n\nThank you for Shopping";

}

// This TvVideoAccessories() Are the function to create an interface for the user to select the
// appropriate comands to buy the product or to reject it


void TvVideoAccessories()
{

 clrscr();
 int i = 0;
 char ch;

 while( strcmp ( TV[i].Brand , "Not Assigned Yet" ) )
 {
  cout<<"\n  "<<(i+1)<<"   ";
  puts( TV[i].Brand );
  i++;
 }

 cout<<"\nChose any Brand You Want to View ( 0 - "<<i<<" ) : ";
 cin>>i;
 i -= 1;
 TV[i].PutTv();
 cout<<"\nDo you Want to Buy This Accessories (Y / N) ";
 cin>>ch;
 if( ch == 'Y' || ch == 'y' )
  TV[i].Cart = 'Y' ;
 cout<<"\n\n\nThank you for Shopping";

}


// This is the billing Process where the program calculates the total bill and
// this is stored in the file near the progran
// the basic logic behind the billing is the Value of the Cart on the time of the execution
// is the vale of the cart is changed to Y then the Product is added to the billing process

void Billing()         // billling
{
 ofstream fout;
 int k ;
 clrscr();
 char Name[30];
 cout<<"\nEnter Your Name to be printed in the bill \n";
 gets(Name);

 // to store the Softcopy of the Bill generated during the program Billing
 // It store the file in the location nearer the program code Exist

 fout.open( "Computerbill.txt" , ios::out );
 fout<<"\n************************************************************************* ";
 fout<<"\n                           XXXXX  computer shop ";
 fout<<"\n                           TiruXXXX Enterprices  ";
 fout<<"\n             (Delears in computer hardware and peripherials)";
 fout<<"\n             Email XXXXtirupaticomp@gmail.com ";
 fout<<"\n\n                                                        ADDRESS :";
 fout<<"\n                                                            154 road  ";
 fout<<"\n                                                            Pre building ";
 fout<<"\n                                                          Ph:987788XXXX ";
 fout<<"\n                                                            998723XXXX ";
 fout<<"\n                                                            02555624XXXX  ";
 fout<<"\n\n Products :   ";
 fout<<"\n                                             __ __      __ __     __ __  __ __  ";
 fout<<"\n                                     Date : |__|__| /  |__|__| / |__|__||__|__| ";
 fout<<"\n\n M/s. ";
 for( k=0 ; Name[k]!='\0' ; ++k )
  fout<<Name[k];
 fout<<"\n\n\tSr.no"<<"\t\t\tBrand"<<"\t\t\tPrice";

 clrscr();
 int j , i;
 double Price = 0 ;
 float temp;
 cout<<"\n\nYou have Listed to buy below the following item \n";

 // Depending upon the value of the Cart the item is added to the bill
 // if the cart was found Y during the loop then it is added to the
 // billing secton and the object returns the price of the item using an
 // Accesor function called GetPrice()
 // it also prints the data in to the file to have a benifit of the soft copy

 for( i = 0 , j = 0 ; i < 12 ;  )
 {
  if( LP[(i-1)].Cart == 'Y' || LP[(i-1)].Cart == 'y'  )
  {
	j++;
	cout<<" "<<(j)<<"   ";
	puts( LP[(i-1)].Brand );
	fout<<"\n\n\t("<<j<<").";
	fout<<"\t\t\t";
	for( k=0 ; LP[(i-1)].Brand[k]!='\0' ; ++k )
	 fout<<LP[(i-1)].Brand[k];
	temp =LP[(i-1)].PutPriceLaptops();
	fout<<"\t\t\t"<<temp;
	Price += LP[(i-1)].PutPriceLaptops();

  }

  if( LACC[(i-1)].Cart =='Y' || LACC[(i-1)].Cart =='y' )
  {
	j++;
	cout<<" "<<(j)<<"   ";
	puts( LACC[(i-1)].Brand );
	fout<<"\n\n\t("<<j<<").";
	fout<<"\t\t\t";
	for( k=0 ; LACC[(i-1)].Brand[k]!='\0' ; ++k )
	 fout<<LACC[(i-1)].Brand[k];
	temp =LACC[(i-1)].PutPriceLaptopAcc();
	fout<<"\t\t\t"<<temp;
	Price += LACC[(i-1)].PutPriceLaptopAcc();
  }

  if( TB[(i-1)].Cart == 'Y' || TB[(i-1)].Cart == 'y')
  {
	j++;
	cout<<" "<<(j)<<"   ";
	puts( TB[(i-1)].Brand );
	fout<<"\n\n\t("<<j<<").";
	fout<<"\t\t\t";
	for( k=0 ; TB[(i-1)].Brand[k]!='\0' ; ++k )
	 fout<<TB[(i-1)].Brand[k];
	temp =TB[(i-1)].PutPriceTablets();
	fout<<"\t\t\t"<<temp;

	Price += TB[(i-1)].PutPriceTablets();
  }

  if( NW[(i-1)].Cart == 'Y' || NW[(i-1)].Cart == 'y')
  {
	j++;
	cout<<" "<<(j)<<"   ";
	puts( NW[(i-1)].Brand );
	fout<<"\n\n\t("<<j<<").";
	fout<<"\t\t\t";
	for( k=0 ; NW[(i-1)].Brand[k]!='\0' ; ++k )
	 fout<<NW[(i-1)].Brand[k];
	temp =NW[(i-1)].PutPriceNetwork();
	fout<<"\t\t\t"<<temp;

	Price += NW[(i-1)].PutPriceNetwork();
  }

  if( DX[(i-1)].Cart == 'Y' ||  DX[(i-1)].Cart == 'y')
  {
	j++;
	cout<<" "<<(j)<<"   ";
	puts( DX[(i-1)].Brand );
	fout<<"\n\n\t("<<j<<").";
	fout<<"\t\t\t";
	for( k=0 ; DX[(i-1)].Brand[k]!='\0' ; ++k )
	 fout<<DX[(i-1)].Brand[k];
	temp = DX[(i-1)].PutPriceDesktop();
	fout<<"\t\t\t"<<temp;

	Price += DX[(i-1)].PutPriceDesktop();
  }

  if( CP[(i-1)].Cart == 'Y' ||  CP[i].Cart == 'y' )
  {
	j++;
	cout<<" "<<(j)<<"   ";
	puts( CP[(i-1)].Brand );
	fout<<"\n\n\t("<<j<<").";
	fout<<"\t\t\t";
	for( k=0 ; CP[(i-1)].Brand[k]!='\0' ; ++k )
	 fout<<CP[(i-1)].Brand[k];
	temp =CP[(i-1)].PutPriceComputerPeri();
	fout<<"\t\t\t"<<temp;

	Price += CP[(i-1)].PutPriceComputerPeri();
  }

  if( SF[(i-1)].Cart == 'Y' || SF[(i-1)].Cart == 'y')
  {
	j++;
	cout<<" "<<(j)<<"   ";
	puts( SF[(i-1)].Brand );
	fout<<"\n\n\t("<<j<<").";
	fout<<"\t\t\t";
	for( k=0 ; SF[(i-1)].Brand[k]!='\0' ; ++k )
	 fout<<SF[(i-1)].Brand[k];
	temp =SF[(i-1)].PutPriceSoftware();
	fout<<"\t\t"<<temp;

	Price += SF[(i-1)].PutPriceSoftware();
  }

  if( CC[(i-1)].Cart == 'Y' || CC[(i-1)].Cart == 'y'  )
  {
	j++;
	cout<<" "<<(j)<<"   ";
	puts( CC[(i-1)].Brand );
	fout<<"\n\n\t("<<j<<").";
	fout<<"\t\t\t";
	for( k=0 ; CC[(i-1)].Brand[k]!='\0' ; ++k )
	 fout<<CC[(i-1)].Brand[k];
	temp =CC[(i-1)].PutPriceComputerComp();
	fout<<"\t\t\t"<<temp;

  Price += CC[(i-1)].PutPriceComputerComp();
  }

  if( TACC[(i-1)].Cart == 'Y' || TACC[(i-1)].Cart == 'y')
  {
	j++;
	cout<<" "<<(j)<<"   ";
	puts( TACC[(i-1)].Brand );
	fout<<"\n\n\t("<<j<<").";
	fout<<"\t\t\t";
	for( k=0 ; TACC[(i-1)].Brand[k]!='\0' ; ++k )
	 fout<<TACC[(i-1)].Brand[k];
	temp =TACC[(i-1)].PutPriceTabletsAcc();
	fout<<"\t\t\t"<<temp;

	Price += TACC[(i-1)].PutPriceTabletsAcc();
  }

  if( AU[(i-1)].Cart == 'Y' || AU[(i-1)].Cart == 'y')
  {
	j++;
	cout<<" "<<(j)<<"   ";
	puts( AU[(i-1)].Brand );
	fout<<"\n\n\t("<<j<<").";
	fout<<"\t\t\t";
	for( k=0 ; LACC[(i-1)].Brand[k]!='\0' ; ++k )
	 fout<<AU[(i-1)].Brand[k];
	temp =AU[(i-1)].PutPriceAudio();
	fout<<"\t\t\t"<<temp;

	Price += AU[(i-1)].PutPriceAudio();
  }

  if( VP[(i-1)].Cart == 'Y' || VP[(i-1)].Cart == 'y' )
  {
	j++;
	cout<<" "<<(j)<<"   ";
	puts( VP[(i-1)].Brand );
	fout<<"\n\n\t("<<j<<").";
	fout<<"\t\t\t";
	for( k=0 ; VP[(i-1)].Brand[k]!='\0' ; ++k )
	 fout<<VP[(i-1)].Brand[k];
	temp =VP[(i-1)].PutPriceVideoPl();
	fout<<"\t\t\t"<<temp;

	Price += VP[(i-1)].PutPriceVideoPl();
  }

  if( TV[(i-1)].Cart == 'Y' || TV[(i-1)].Cart == 'Y' )
  {
	j++;
	cout<<" "<<(j)<<"   ";
	puts( TV[(i-1)].Brand );
	fout<<"\n\n\t("<<j<<").";
	fout<<"\t\t\t";
	for( k=0 ; TV[(i-1)].Brand[k]!='\0' ; ++k )
	 fout<<TV[(i-1)].Brand[k];
	temp =TV[(i-1)].PutPriceTv();
	fout<<"\t\t\t"<<temp;

	Price += TV[(i-1)].PutPriceTv();
  }
  i++;

 }


 fout<<"\n\n\t\t\t\t\t\t";
 fout<<"Grand Total bill is "<<Price;
 fout<<"\n                 Thank you for shopping with us \n";
 fout<<"\n************************************************************************* ";
 fout.close();

 cout<<"\n Your Total Bill is  : "<<Price;
 cout<<"\nKindly Pay the Amount to the Counter";
 cout<<"\n\n\nThank you for Shopping";

 getch();

 exit(0);

}

// It is basically the Administrator menu wher the Employeee of the shop can alter the
// data stored in the system
// It basically gives the user the freedom of creating new files and appinding the new data
// inside the pre Existing file without loosing the old data
// it is a password proteted Section and the
// 8 digit Password : 12345678

void Administrator()
{

 clrscr();

 int flag = 0 ;
 char Pass[10];
 clrscr();

 for( int i=0 ; i < 3 ; i++ )
 {
  cout<<"\n Enter the 8 digit Password of the Shop ";
  gets( Pass );

  if( !strcmp( Pass , "12345678" ) )
	{
	 flag=1;
	 break;
	}
 }

 if( flag == 0 )
 {
  cout<<"\nEntered the Wrong Password ";
  cout<<"\nThe Program is terminating now !!!!!!!!!!";
  exit(0);
 }

 else
 {

 clrscr();


 int Ch ;
 int Option;
 cout<<"\n\nWelcome to the Administrator Menu to create new files ";
 cout<<"\n\n  1.   Create New files ";
 cout<<"\n\n  2.   Inserting Data ";
 cout<<"\nEnter the option you want to Operate upon ";
 cin>>Option;
 cout<<"\n\n\n Chose The Option You Want To Perform ";
 clrscr();
 cout<<"\n    1.   Laptop Comuters";
 cout<<"\n    2.   Laptop Accessories";
 cout<<"\n    3.   Tablets";
 cout<<"\n    4.   Network components";
 cout<<"\n    5.   All-in-one Desktops";
 cout<<"\n    6.   Computer Peripherals";
 cout<<"\n    7.   Software";
 cout<<"\n    8.   Computer Components";
 cout<<"\n    9.   Tablet Accessories";
 cout<<"\n    10.  Audio Players";
 cout<<"\n    11.  Video Playes";
 cout<<"\n    12.  Tv & Video Accessories";

 cout<<"\nEnter the Category you want to operate upon ";
 cin>>Ch;


 if ( Option == 1 )
 {

  // To create the new file and trunching the old file in trash
  // And Alloting the new data in the file

  ofstream fout;
  char ch;
  if ( Ch == 3 )
  {
	fout.open("Tablets.dat" , ios::out|ios::binary );
	Tb1;

	do
	{
	 Tb1.GetTablets();
	 fout.write( ( char* )&Tb1 , sizeof( Tb1 ) );
	 cout<<"\nWant to enter more ( Y/N ) : ";
		cin>>ch;
	}while( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();

 }

 else if( Ch == 2)
 {
  fout.open("LaptopAccessories.dat" , ios::out|ios::binary );
  Lacc1;

  do
  {
	Lacc1.GetLaptopAcc();
	fout.write( (char*)&Lacc1 , sizeof(Lacc1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();

 }

 else if( Ch == 4 )
 {
  fout.open("Network.dat" , ios::out|ios::binary );
  Nw1;

  do
  {
	Nw1.GetNetwork();
	fout.write( (char*)&Nw1 , sizeof(Nw1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();
 }

 else if( Ch == 1 )
 {

 fout.open("Laptops.dat" , ios::out|ios::binary );
 Lp1;

 do
 {
  Lp1.GetLaptops();
  fout.write( (char*)&Lp1 , sizeof(Lp1) );
  cout<<"\nWant to enter more ( Y/N ) : ";
  cin>>ch;
 }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

 fout.close();
 }

 else if( Ch == 5 )
 {
  fout.open("Desktop.dat" , ios::out|ios::binary );
  Dx1;

  do
  {
	Dx1.GetDesktop();
	fout.write( (char*)&Dx1 , sizeof(Dx1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();
 }

 else if( Ch == 6 )
 {
  fout.open("CompPeri.dat" , ios::out|ios::binary );
  Cp1;

  do
  {
	Cp1.GetComputerPeri();
	fout.write( (char*)&Cp1 , sizeof(Cp1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();

 }

 else if( Ch == 7 )
 {
  fout.open("Software.dat" , ios::out|ios::binary );
  Sf1;

  do
  {
	Sf1.GetSoftware();
	fout.write( (char*)&Sf1 , sizeof(Sf1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();

 }

 else if( Ch == 10 )
 {
  fout.open("AudioAccessories.dat" , ios::out|ios::binary );
  Au1;

  do
  {
	Au1.GetAudio();
	fout.write( (char*)&Au1 , sizeof(Au1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();

 }

 else if( Ch == 8 )
 {
  fout.open("CompCom.dat" , ios::out|ios::binary );
  Cc1;

  do
  {
	Cc1.GetComputerComp();
	fout.write( (char*)&Cc1 , sizeof(Cc1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();
 }

 else if( Ch == 9 )
 {
  fout.open("TabletAccessories.dat" , ios::out|ios::binary );
  Tacc1;

  do
  {
	Tacc1.GetTabletsAcc();
	fout.write( (char*)&Tacc1 , sizeof(Tacc1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();
 }

 else if( Ch == 12 )
 {
  fout.open("TvAccesories.dat" , ios::out|ios::binary );
  Tv1;

  do
  {
	Tv1.GetTv();
	fout.write( (char*)&Tv1 , sizeof(Tv1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();

 }

 else if( Ch == 11 )
 {
  fout.open("VideoPlayers.dat" , ios::out|ios::binary );
  Vp1;

  do
  {
	Vp1.GetVideoPl();
	fout.write( (char*)&Vp1 , sizeof(Vp1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();

 }
  //End of the Function Create

 }



 else if ( Option == 2)
 {

  // To Append the new file to the old file
  // And Alloting the new data in the Pre existing  file

  ofstream fout;
  char ch;
 if ( Ch == 3 )
 {
  fout.open("Tablets.dat" , ios::app|ios::binary );
  Tb1;

  do
  {
	Tb1.GetTablets();
	fout.write( ( char* )&Tb1 , sizeof( Tb1 ) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();

 }

 else if( Ch == 2)
 {
  fout.open("LaptopAccessories.dat" , ios::app|ios::binary );
  Lacc1;

  do
  {
	Lacc1.GetLaptopAcc();
	fout.write( (char*)&Lacc1 , sizeof(Lacc1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();

 }

 else if( Ch == 4 )
 {
  fout.open("Network.dat" , ios::app|ios::binary );
  Nw1;

  do
  {
	Nw1.GetNetwork();
	fout.write( (char*)&Nw1 , sizeof(Nw1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();
 }

 else if( Ch == 1 )
 {

 fout.open("Laptops.dat" , ios::app|ios::binary );
 Lp1;

 do
 {
  Lp1.GetLaptops();
  fout.write( (char*)&Lp1 , sizeof(Lp1) );
  cout<<"\nWant to enter more ( Y/N ) : ";
  cin>>ch;
 }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

 fout.close();

 }

 else if( Ch == 5 )
 {
  fout.open("Desktop.dat" , ios::app|ios::binary );
  Dx1;

  do
  {
	Dx1.GetDesktop();
	fout.write( (char*)&Dx1 , sizeof(Dx1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();

 }

 else if( Ch == 6 )
 {
  fout.open("CompPeri.dat" , ios::app|ios::binary );
  Cp1;

  do
  {
	Cp1.GetComputerPeri();
	fout.write( (char*)&Cp1 , sizeof(Cp1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();

 }

 else if( Ch == 7 )
 {
  fout.open("Software.dat" , ios::app|ios::binary );
  Sf1;

  do
  {
	Sf1.GetSoftware();
	fout.write( (char*)&Sf1 , sizeof(Sf1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();

 }
 else if( Ch == 10 )
 {
  fout.open("AudioAccessories.dat" , ios::app|ios::binary );
  Au1;

  do
  {
	Au1.GetAudio();
	fout.write( (char*)&Au1 , sizeof(Au1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();

 }

 else if( Ch == 8 )
 {
  fout.open("CompCom.dat" , ios::app|ios::binary );
  Cc1;
  do
  {
	Cc1.GetComputerComp();
	fout.write( (char*)&Cc1 , sizeof(Cc1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();
 }

 else if( Ch == 9 )
 {
  fout.open("TabletAccessories.dat" , ios::app|ios::binary );
  Tacc1;

  do
  {
	Tacc1.GetTabletsAcc();
	fout.write( (char*)&Tacc1 , sizeof(Tacc1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();
 }

 else if( Ch == 12 )
 {
  fout.open("TvAccesories.dat" , ios::app|ios::binary );
  Tv1;

  do
  {
	Tv1.GetTv();
	fout.write( (char*)&Tv1 , sizeof(Tv1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();
 }

 else if( Ch == 11 )
 {
  fout.open("VideoPlayers.dat" , ios::app|ios::binary );
  Vp1;

  do
  {
	Vp1.GetVideoPl();
	fout.write( (char*)&Vp1 , sizeof(Vp1) );
	cout<<"\nWant to enter more ( Y/N ) : ";
	cin>>ch;
  }while ( ( ch == 'Y' ) || ( ch == 'y' ) );

  fout.close();

 }
  //End of the Function ADDD

 }

 }
}

// Function Files to create new files if the files do not exist intially
// if the file exits the it just checks for the existance of the files
// Otherwise it will give us Error giving file doesnt exist

void Files()
{
  ofstream fout;
  ifstream fin;

  fin.open( "Tablets.dat" , ios::in|ios::binary );
  if( !fin )
	{
	 fout.open( "Tablets.dat" , ios::out|ios::binary );
	 fout.close();
	}
  fin.close();

  fin.open( "LaptopAccessories.dat" , ios::in|ios::binary );
  if( !fin )
	{
	 fout.open( "LaptopAccessories.dat" , ios::out|ios::binary );
	 fout.close();
	}
  fin.close();

  fin.open( "Software.dat" , ios::in|ios::binary );
  if( !fin )
	{
	 fout.open( "Software.dat" , ios::out|ios::binary );
	 fout.close();
	}
  fin.close();

  fin.open( "Network.dat" , ios::in|ios::binary );
  if( !fin )
	{
	 fout.open( "Network.dat" , ios::out|ios::binary );
	 fout.close();
	}
  fin.close();

  fin.open( "Laptops.dat" , ios::in|ios::binary );
  if( !fin )
	{
	 fout.open( "Laptops.dat" , ios::out|ios::binary );
	 fout.close();
	}
  fin.close();

  fin.open( "Desktop.dat" , ios::in|ios::binary );
  if( !fin )
	{
	 fout.open( "Desktop.dat" , ios::out|ios::binary );
	 fout.close();
	}
  fin.close();

  fin.open( "CompPeri.dat" , ios::in|ios::binary );
  if( !fin )
	{
	 fout.open( "CompPeri.dat" , ios::out|ios::binary );
	 fout.close();
	}
  fin.close();

  fin.open( "AudioAccessories.dat" , ios::in|ios::binary );
  if( !fin )
	{
	 fout.open( "AudioAccessories.dat" , ios::out|ios::binary );
	 fout.close();
	}
  fin.close();

  fin.open( "CompCom.dat" , ios::in|ios::binary );
  if( !fin )
	{
	 fout.open( "CompCom.dat" , ios::out|ios::binary );
	 fout.close();
	}
  fin.close();

  fin.open( "TabletAccessories.dat" , ios::in|ios::binary );
  if( !fin )
	{
	 fout.open( "TabletAccessories.dat" , ios::out|ios::binary );
	 fout.close();
	}
  fin.close();

  fin.open( "TvAccesories.dat" , ios::in|ios::binary );
  if( !fin )
	{
	 fout.open( "TvAccesories.dat" , ios::out|ios::binary );
	 fout.close();
	}
  fin.close();

  fin.open( "VideoPlayers.dat" , ios::in|ios::binary );
  if( !fin )
	{
	 fout.open( "VideoPlayers.dat" , ios::out|ios::binary );
	 fout.close();
	}
  fin.close();

}




//******************************************************************************
//                   Main Function Body of the PROJECT
//******************************************************************************



void main()
{
 Files();  // To  check and create the files for the program
 InitialiseObjects();  // To Initialise the objects of the differant classes
 clrscr();
 char Choice;
 Introducion(); // Introduction to the project
 index:

 Choice = Index(); // To recive the category to be operated upon

 switch( Choice ) // Switch between the choices
 {
  case 1 : LaptopComuters();
			  cout<<"\nDo You want to See more Products (Y/N) ";
			  cin>>Choice;
			  if( Choice == 'Y' || Choice == 'y' )
				goto index;
			  else
				Billing();
			  break;

  case 2 : LaptopAccessories();
			  cout<<"\nDo You want to See more Products (Y/N) ";
			  cin>>Choice;
			  if( Choice == 'Y' || Choice == 'y' )
				goto index;
			  else
				Billing();
			  break;

  case 3 : Tablets();
			  cout<<"\nDo You want to See more Products (Y/N) ";
			  cin>>Choice;
			  if( Choice == 'Y' || Choice == 'y' )
				goto index;
			  else
				Billing();
			  break;

  case 4 : Networkcomponents();
			  cout<<"\nDo You want to See more Products (Y/N) ";
			  cin>>Choice;
			  if( Choice == 'Y' || Choice == 'y' )
				goto index;
			  else
				Billing();
			  break;

  case 5 : AllinoneDesktops();
			  cout<<"\nDo You want to See more Products (Y/N) ";
			  cin>>Choice;
			  if( Choice == 'Y' || Choice == 'y' )
				goto index;
			  else
				Exit();
			  break;

  case 6 : ComputerPeripherals();
			  cout<<"\nDo You want to See more Products (Y/N) ";
			  cin>>Choice;
			  if( Choice == 'Y' || Choice == 'y' )
				goto index;
			  else
				Billing();
			  break;

  case 7 : Software();
			  cout<<"\nDo You want to See more Products (Y/N) ";
			  cin>>Choice;
			  if( Choice == 'Y' || Choice == 'y' )
				goto index;
			  else
				Billing();
			  break;

  case 8 : ComputerComponents();
			  cout<<"\nDo You want to See more Products (Y/N) ";
			  cin>>Choice;
			  if( Choice == 'Y' || Choice == 'y' )
				goto index;
			  else
				Billing();
			  break;

  case 9 : TabletAccessories();
			  cout<<"\nDo You want to See more Products (Y/N) ";
			  cin>>Choice;
			  if( Choice == 'Y' || Choice == 'y' )
				goto index;
			  else
				Billing();
			  break;

  case 10 : AudioPlayers();
			  cout<<"\nDo You want to See more Products (Y/N) ";
			  cin>>Choice;
			  if( Choice == 'Y' || Choice == 'y' )
				goto index;
			  else
				Billing();
			  break;

  case 11 : VideoPlayes();
			  cout<<"\nDo You want to See more Products (Y/N) ";
			  cin>>Choice;
			  if( Choice == 'Y' || Choice == 'y' )
				goto index;
			  else
				Billing();
			  break;

  case 12 : TvVideoAccessories();
			  cout<<"\nDo You want to See more Products (Y/N) ";
			  cin>>Choice;
			  if( Choice == 'Y' || Choice == 'y' )
				goto index;
			  else
				Billing();
			  break;

  case 13 : Billing();

			  break;

  case 14 : Administrator();
			  InitialiseObjects();
			  cout<<"\nDo You want to Move to the main screen (Y/N) ";
			  cin>>Choice;
			  if( Choice == 'Y' || Choice == 'y' )
				goto index;
			  else
				Exit();
			  break;

  case 15 :  Exit();

			  break;

 }
 getch();

}









