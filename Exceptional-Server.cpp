#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

/*
  Contributor:Ankit Bhujeja
  Problem statement = https://www.hackerrank.com/challenges/exceptional-server/problem
  Difficulty: Medium
*/
class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {         //Compute function
		load += 1;
		if(A < 0) {
			throw std::invalid_argument("A is negative");     //Throwing an exception for negative number
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0;                                //Throwing an other exception
		real = (A/B)*real;                                
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	int T; cin >> T;                       // No. of tests cases
	while(T--) {                                             
		long long A, B;
		cin >> A >> B;

		/* Enter your code here. */
        try {
            cout<<Server::compute(A,B)<<endl;           

        } 
        catch(bad_alloc &error){             // Catch block for memory allocation problem
            cout<<"Not enough memory\n";
        }
        catch (exception &error) {             // catch block for negative number
             cout<<"Exception: "<<error.what()<<"\n"; 
        }
        catch(...){                           //catch block for other exception
            cout<<"Other Exception\n";
        }
	}
	cout << Server::getLoad() << endl;
	return 0;
}
