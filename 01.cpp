#include <iostream>
#include <chrono>
#include <stack>
using namespace std;
using namespace std::chrono;

void show_stack(stack<int> qu){
	while(!qu.empty()){
		cout<<qu.top()<<" ";
		qu.pop();
	}
	cout<<endl;
}
main()
{
	auto start = std::chrono::high_resolution_clock::now();

	stack<int> s,t;

	for(int i=0; i<5; i++){
		s.push(rand()%10);
		t.push(11);
	}
	show_stack(s);

	s.swap(t);

	show_stack(s);


	auto finish = std::chrono::high_resolution_clock::now();
	auto duration = duration_cast <milliseconds>(finish-start);
	cout<<duration.count()<<" milliseconds";
}
