#include <iostream>


// If use:
// using std:: cout
// then 'endl' should be 'std::endl'

using namespace std;

namespace first_space {
	void f() {
		cout << "first space function" << endl;
	}
}

namespace second_space {
	void f() {
		cout << "second space function" << endl;
	}
}

// namespaces can be multi-layered
namespace third_space {

	namespace fourth_space {
		void f() {
			cout << "4 space func" << endl;
		}
	}

	void f() {
		cout << "3 space func" << endl;
	}
}

void f() {
	cout << "Global space func" << endl;
}

int main(){
	// If added 'using namespace first_space' before, only 'f()' is sufficient.
	first_space::f();

	second_space::f();

	third_space::f();

	third_space::fourth_space::f();

	// following two are the same
	f();
	::f();

	// if there is any conflict, compliation will fail:
	/*
	add 'using namespace first_space' here
	and 'f();' will make compiling fail.
	*/
	//using namespace first_space;
	//f();

	return 0;
}