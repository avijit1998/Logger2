#include <ctime>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include<direct.h>
using namespace std;

int main(int argc, char const *argv[]) {
  time_t t = time(0);   // get time now
  struct tm * now = localtime( & t );
  std::string date =to_string(now->tm_mday)+"-"+to_string(now->tm_mon + 1)+"-"+to_string(now->tm_year + 1900);
  std::string path ="C:/Users/DELL/Desktop/Codes/Testfolder/"+date;
  const char * a = path.c_str();
  mkdir(a);
  std::string tm = path+"/"+to_string(now->tm_hour);
  const char * b = tm.c_str();
  mkdir(b);
  std::string filename;
  cin>>filename;
  filename.append(".txt");
  std::string filepath = tm+"/"+filename;
  ofstream fout;
  //fout.open(filepath);
  fout.open(filepath, std::ios_base::app);
  std::string log;
  int c = 0;
  while (c == 0) {
    std::cin >> log;
    if(log != "exit")
      fout << log << " ";
    else
      c++;
  }
  return 0;
}
