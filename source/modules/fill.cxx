#include <iostream>

#include "Bins.h"
#include "Constants.h"
#include "Event.h"
#include "Reader.h"
#include "Types.h"

int main(int argc, char *argv[]){

  if (argc < 2){
    std::cerr << "[fill] no files provided " << std::endl;
    exit(0);
  }

  Reader reader;
  for (int iarg=1; iarg<argc; iarg++){
    std::string ifile(argv[iarg]);
    reader.AddFile(ifile);
  }

  std::cout << "[fill] reader loaded with entries = " << reader.GetEntries() << std::endl; 


  return 0;
}
