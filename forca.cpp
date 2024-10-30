#include <iostream>
using namespace std;
const string PALAVRA_SECRETA = "VEGETTI";


bool letra_existe(char chute){
  for(char chute : PALAVRA_SECRETA){
    if(chute == PALAVRA_SECRETA){
      return true;
    }
    
  }
  return false;
}
int main(){
  cout << " a palavra secreta é " << PALAVRA_SECRETA << endl;
  bool nao_acertou = true;
  bool nao_enforcou = true;

  while(nao_acertou && nao_enforcou){
    char chute;
    cin >> chute;

    if(letra_existe(chute)){
      cout << "Acertou! seu chute está na palavra" << endl;
    }
  else{
      cout << "Errou! seu chute não está na palavra" << endl;
  }
    
  }


  
}