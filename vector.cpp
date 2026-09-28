#include <iostream>

using namespace std;

template <class T>
class Vector {
  private:
      T   *_arr;
      int _capacity;
      int _size;

    void revise_capacity(int new_cap) {
      T *new_arr = new T[new_cap];
      for(int i = 0; i < _size; i++) {
        new_arr[i] = _arr[i];
      }
      delete [] _arr;
      _arr = new_arr;
      _capacity = new_cap;
    }

  public:
    Vector(int cap = 1) {
      _arr = new T[cap];
      _capacity = cap;
      _size = 0;
    }

    T elementAt(int i) {
      return _arr[i];
    }

    void append(const T& elem) {
      if (_capacity == _size)  // stretch by double
       revise_capacity(2 * _capacity);

      _arr[_size] = elem;
      _size++;
    }

    T removeLast() {
      T ret = _arr[_size - 1];
      _size--;
      if (_size == _capacity/4) // shrink
        revise_capacity(_capacity/2);

      return ret;
    }
};

int main() {
  Vector<int> v;

  for(int i = 0; i < 10; i++) {
    v.append(2*i);
  }

  for(int i = 0; i < 10; i++) {
    cout << v.elementAt(i) << " ";
  }

  cout << endl;
}
