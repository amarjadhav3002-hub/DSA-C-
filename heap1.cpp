#include <iostream>
#include<vector>
using namespace std;
 class Heap {
	private:
		vector<int> _arr;
		
		int parent(int i) { return (i-1)/2; }
		int left(int i) { return 2 * i + 1;}
		int right(int i) { return 2 * i + 2 ;}
	
		void maxHeapify(int i){
			int l = left(i);
			int r = right(i);
			int max = i;
			if (l < _arr.size() && _arr[max] < _arr[l]) {
				max = l;
			}
			if (r < _arr.size() && _arr[max] < _arr[r]) {
                max = r;
            }
			if(max == i){
				return ;
			}
			//swap arr[i] with arr[max]
			int temp = _arr[i];
			_arr[i] = _arr[max];
			_arr[max] = temp;

			maxHeapify(max);

		}
		void buildheap(){
			for(int i = _arr.size()/2  - 1; i >= 0; i--){
				maxHeapify(i);
			}

		}

		
	public:
		Heap(){
		
		}
		Heap(vector<int> v) {
			for(int i = 0; i< v.size(); i++){
				_arr.push_back(v[i]);
			}
			buildheap();
		}
		int max() {
			return _arr[0];
		}
		~Heap() {

		}
		int removeMax() {
			int temp = _arr[0];
			_arr[0] = _arr[_arr.size() -1 ];
			_arr.pop_back();
			maxHeapify(0);
			return temp;
		}
		void increaseKey(int i ,int val){
			_arr[i] = val;
			int p = parent(i);
			while(i >0 && _arr[p] < _arr[i]){
			//swap _arr[p]  _arr[i]
			int temp = _arr[p];
			_arr[p] = _arr[i];
			_arr[i] = temp;
			i =p;
			p = parent(i);
			}
		}
		void insert(int val) {
		_arr.push_back(val);
		increaseKey(_arr.size() - 1,val); 
		}
		friend ostream& operator<<(ostream& out, const Heap& h){
			for(int i = 0; i< h._arr.size();i++){
				out << h._arr[i] <<"  ";
		}
		return out;
	}
};

int main(){
	vector<int> v = {2,5,8,30,20,15,10,40,50,100};
	Heap h(v);
	int a= 75;
	cout << h <<endl;
	int m = h.removeMax();
	cout << "Max value : " << m <<endl;
	cout << "After removing Max value : " << endl;
	 cout << h << endl;
	h.insert(a);
	cout << "After inserting " << a  <<" : " << endl;
	cout << h << endl;
	return 0 ;

}
