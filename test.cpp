

class T {
public:
	int *arr;
	int	size;

	T(int size):
		arr(new int[size]),
		size(size)
	{ 
	}

	T&	operator=(const T& rightValue) {
		if (this == &rightValue)
			return *this;
		this->size = rightValue.size;
		delete[] this->arr;
		this->arr = new int[this->size];
		// for loop to copy arr content
	}


};

int	main() {
	
}