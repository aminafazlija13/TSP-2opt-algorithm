#include <iostream>
#include "graf.h"
#include <string>
#include <time.h>
#include <math.h>

using namespace std;

int main() {

  string filename1("sahara.txt");
  Graf G1(filename1);
  cout<<"    Zapadna Sahara"<<endl;
  cout<<endl;
  cout<<"Tura najblizi susjed: "<<G1.turaNajbliziSusjed()<<endl;
  cout<<"Tura najmanja grana: "<<G1.turaNajmanjaGrana()<<endl;
  cout<<"Two Opt tura: "<<G1.TwoOpt()<<endl;

  cout<<endl;

  string filename2("djibouti.txt");
  Graf G2(filename2);
  cout<<"       Djibouti"<<endl;
  cout<<endl;
  cout<<"Tura najblizi susjed: "<<G2.turaNajbliziSusjed()<<endl;
  cout<<"Tura najmanja grana: "<<G2.turaNajmanjaGrana()<<endl;
  cout<<"Two Opt tura: "<<G2.TwoOpt()<<endl;

  cout<<endl;

  string filename3("novi.txt");
  Graf G3(filename3);
  cout<<"         Katar"<<endl;
  cout<<endl;
  cout<<"Tura najblizi susjed: "<<G3.turaNajbliziSusjed()<<endl;
  cout<<"Tura najmanja grana: "<<G3.turaNajmanjaGrana()<<endl;
  cout<<"Two Opt tura: "<<G3.TwoOpt()<<endl;

  cout<<endl;

  string filename4("urugvaj.txt");
  Graf G4(filename4);
  cout<<"        Urugvaj"<<endl;
  cout<<endl;
  cout<<"Tura najblizi susjed: "<<G4.turaNajbliziSusjed()<<endl;
  cout<<"Tura najmanja grana: "<<G4.turaNajmanjaGrana()<<endl;
  cout<<"Two Opt tura: "<<G4.TwoOpt()<<endl;

  cout<<endl;

  string filename5("luksemburg.txt");
  Graf G5(filename5);
  cout<<"      Luksemburg"<<endl;
  cout<<endl;
  cout<<"Tura najblizi susjed: "<<G5.turaNajbliziSusjed()<<endl;
  cout<<"Tura najmanja grana: "<<G5.turaNajmanjaGrana()<<endl;
  cout<<"Two Opt tura: "<<G5.TwoOpt()<<endl;

  cout<<endl;

  string filename6("oman.txt");
  Graf G6(filename6);
  cout<<"         Oman"<<endl;
  cout<<endl;
  cout<<"Tura najblizi susjed: "<<G6.turaNajbliziSusjed()<<endl;
  cout<<"Tura najmanja grana: "<<G6.turaNajmanjaGrana()<<endl;
  cout<<"Two Opt tura: "<<G6.TwoOpt()<<endl;



  return 0;
}

