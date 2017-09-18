#ifndef LSE_H
#define LSE_H

#include <iostream>

using namespace std;

class LSE
{
  public:
    int informacao;
    LSE* proximo;
    
    LSE(int informacao = NULL, LSE* proximo = nullptr)
    {
      this->informacao = informacao;
      this->proximo = proximo;
    }
	
	void print()
	{
		cout << informacao << " " << endl;
	}
};

#endif /* LSE_H */