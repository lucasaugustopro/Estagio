#include <iostream>
#include <string>

using namespace std;

int main() {
    
    double faturamento_total = 0; 
    double SP = 67836.43; 
    double RJ = 36678.66; 
    double MG = 29229.88; 
    double ES = 27165.48; 
    double outros = 19849.53; 
 
    faturamento_total = SP + RJ + MG + ES + outros;

    double sp_percentual = (SP / faturamento_total) * 100;
    double rj_percentual = (RJ / faturamento_total) * 100;
    double mg_percentual = (MG / faturamento_total) * 100;
    double es_percentual = (ES / faturamento_total) * 100;
    double outros_percentual = (outros / faturamento_total) * 100;

    
    cout << "Percentual de representacao de cada estado:" << endl;
    cout << "SP: " << sp_percentual << "%" << endl;
    cout << "RJ: " << rj_percentual << "%" << endl;
    cout << "MG: " << mg_percentual << "%" << endl;
    cout << "ES: " << es_percentual << "%" << endl;
    cout << "Outros: " << outros_percentual << "%" << endl;

    return 0;
}