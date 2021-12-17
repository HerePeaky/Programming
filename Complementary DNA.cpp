#include <string>

std::string DNAStrand(const std::string& dna)
{
  std::string adna="";
  for (int i = 0; i < dna.length(); ++i){
    switch (std::toupper(dna[i])) {
        case 'A' : adna += 'T';
          break;
        case 'G' : adna += 'C';
          break;
        case 'C' : adna += 'G';
          break;
        case 'T' : adna += 'A';
          break;
        default : break;
    }
  }
  return adna;
}
