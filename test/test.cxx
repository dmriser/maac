#include <iostream>

#include "Event.h"
#include "Reader.h"

int main(int argc, char *argv[]){

  if (argc < 2){
    std::cerr << "No files were given" << std::endl; 
    exit(0); 
  }

  
  Reader *reader = new Reader(); 

  for (int i=1; i<argc; i++){
    std::string file(argv[i]);
    reader->AddFile(file); 
  }

  std::cout << "Testing reader with entries = " << reader->GetEntries() << std::endl; 

  for (int ientry = 0; ientry < reader->GetEntries(); ientry++){
    reader->GetEntry(ientry);

    if (ientry%10000 == 0){
      std::cout << "\r entry " << ientry << std::flush; 
    }
  }

  std::cout << std::endl; 
  std::cout << "Done" << std::endl; 
  std::cout << std::endl; 

  return 0; 
}

