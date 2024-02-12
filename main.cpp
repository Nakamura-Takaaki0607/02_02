#include <stdio.h>

template <typename T1, typename T2>
class Box {
public:
	T1 height;
	T2 width;

	T1 Min(T1 height, T2 width) {
		if (height <= width)
		{
			return height;
		}
		if (height >= width)
		{
			return width;
		}
	}

	T1 Size() {
		return static_cast<T1>(height * width);
	}
};

int main() {
	Box<float, int> b1;
	Box<double, float> b2;
	Box<double, int> b3;
	Box<int, int> b4;
	Box<float, float> b5;
	Box<double, double> b6;

	float A = b1.Min(0.15f, 10);
	float B = b2.Min(0.125f, 0.3f);
	double C = b3.Min(0.213f, 5);
	int D = b4.Min(12, 5);
	float E = b5.Min(0.9f, 1.4f);
	double F = b6.Min(0.02f, 0.12f);

	printf("%0.2f\n", A);
	printf("%0.3f\n", B);
	printf("%0.3If\n", C);
	printf("%d\n", D);
	printf("%0.2f\n", E);
	printf("%0.3If\n", F);

	return 0;
}