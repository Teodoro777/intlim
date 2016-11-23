#ifndef INTLIM_H
#define INTLIM_H

class IntLim {
	private:
		int* value;
		int min;
		int max;
	public: 
		IntLim(int min, int max, int value);
		IntLim(const IntLim& other);
		~IntLim();
		
		void set (int value);
                int get();
};

#endif
