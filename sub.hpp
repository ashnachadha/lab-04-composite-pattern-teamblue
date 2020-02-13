#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"
#include "op.hpp"

class Sub : public Base {
	public:
		Sub(Base* obj1, Base* obj2) : Base() {
			object1 = obj1;
			object2 = obj2;
		}

		double evalute() {
			return object1->evaluate() - object2->evaluate();
		}
		
		std::string stringify() {
			return object1->stringify() + " - " + object2->stringify();
		}

	private:
		Base* object1;
		Base* object2;
};

#endif //__SUB_HPP__
