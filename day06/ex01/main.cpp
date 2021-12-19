#include <iostream>

typedef struct s_data
{
	int i;
} Data;


uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data dt;
	dt.i = 1;

	std::cout << deserialize(serialize(&dt))->i << std::endl;
	return 0;
}
