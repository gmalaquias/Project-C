
#include "Header.h";


float AreaPerimetro(float lado, float *area);


void AreaPerimetroMain(){

	float a, p=0, l;

	cin >> l;

	p = AreaPerimetro(l, &a);

	cout << "Perimetro: " << p << "\n";
	cout << "Area: " << a;

	system("pause>null");
}


float AreaPerimetro(float lado, float *area){

	*area = lado*lado;
	return 4 * lado;

}