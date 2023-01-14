make: minstack.h minstack.cc main.cc
	g++ -o minstk minstack.cc main.cc
clean:
	rm -f *.o minstk
