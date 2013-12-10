#ifndef st26_h
#define st26_h

#include "fish.h"
#include "cstdlib"

class st26:public fish{
	private:
		int a[41][41];
		int round=0;
		void increase();
		void check();
		void kexing();
		void beginAttack();
		void eatAndAttack();
	public:
		void init();
		void play();
		void revive(int&,int&);
		st26();
		~st26();
}; 
