#pragma once


namespace vm {

	template <typename T>
	struct Vector2d {
	public:
		T element_one;
		T element_two;

		Vector2d(T first, T second) : element_one(first), element_two(second) {

		}

		//Operator Overloading
		Vector2d<T>* operator+(const Vector2d<T>& rhs) {
			return &Vector2d<T>(rhs.element_one + element_one, rhs.element_two + element_two);
		}

		Vector2d<T>* operator-(const Vector2d<T>& rhs) {
			return &Vector2d<T>(rhs.element_one - element_one, rhs.element_two - element_two);
		}

		Vector2d<T>* operator*(const Vector2d<T>& rhs) {
			return &Vector2d<T>(rhs.element_one * element_one, rhs.element_two * element_two);
		}

		Vector2d<T>* operator/(const Vector2d<T>& rhs) {
			return &Vector2d<T>(element_one / rhs.element_one, element_two / rhs.element_two);
		}
	};

	template <typename T>
	class Vector3d {
	public:
		T element_one;
		T element_two;
		T element_three;

		Vector3d(T first, T second, T third) : element_one(first), element_two(second), element_three(three) {

		}

		//Operator Overloading
		Vector3d<T>* operator+(const Vector3d<T>& rhs) {
			return &Vector3d<T>(rhs.element_one + element_one, rhs.element_two + element_two, element_three + rhs.element_three);
		}

		Vector3d<T>* operator-(const Vector3d<T>& rhs) {
			return &Vector2d<T>(rhs.element_one - element_one, rhs.element_two - element_two, rhs.element_three - element_three);
		}

		Vector3d<T>* operator*(const Vector3d<T>& rhs) {
			return &Vector3d<T>(rhs.element_one * element_one, rhs.element_two * element_two, rhs.element_three * element_three);
		}

		Vector3d<T>* operator/(const Vector3d<T>& rhs) {
			return &Vector3d<T>(element_one / rhs.element_one, element_two / rhs.element_two, rhs.element_three / element_three);
		}

	};
}