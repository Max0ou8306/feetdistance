#include <iostream>

using namespace std;

int calcul(){

  int resultat, metres, pointureUser;

  resultat = metres / pointureUser;
  cout << "Pour arriver a votre destination, vous devrez faire " << resultat << " pas !" << endl;
}

int erreurpointure(){
  cout << "Votre pointure est incorrecte." << endl;
  return 1;
}

int main(){
  int pointure40(0.257);
  int pointure41(0.264);
  int pointure42(0.270);
  int pointure43(0.277);
  int pointure44(0.284);
  int pointure45(0.290);

  int erreurpointure();
  int calcul();

  int metres, pointure, resultat, pointureUser;

  cout << "Quelle est la distance que vous souhaitez parcourir (en metres) ? ";
  cin >> metres;
  cout << "Quelle est votre pointure (40/41/42/43/44/45) ? ";
  cin >> pointure;

  if (pointure == '40'){
    pointureUser = pointure40;
    calcul();
  }

  if (pointure == '41'){
    pointureUser = pointure41;
    calcul();
  }

  if (pointure == '42'){
    pointureUser = pointure42;
    calcul();
  }

  if (pointure == '43'){
    pointureUser = pointure43;
    calcul();
  }

  if (pointure == '44'){
    pointureUser = pointure44;
    calcul();
  }

  if (pointure == '45'){
    pointureUser = pointure45;
    calcul();
  }

  resultat = metres / pointureUser;
  cout << "Pour arriver a votre destination, vous devrez faire " << resultat << " pas !" << endl;

  if (pointure <= '39'){
    erreurpointure();
  }

  if (pointure >= '46'){
    erreurpointure();
  }

  return 0;
}
