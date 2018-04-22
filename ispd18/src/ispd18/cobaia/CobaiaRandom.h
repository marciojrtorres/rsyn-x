#include <iostream>

#include <thread>
#include <mutex>

#include <Rsyn/Session>
#include <Rsyn/PhysicalDesign>


class CobaiaRandom : public Rsyn::Process {
private:
	Rsyn::Session session;
	Rsyn::Design design;
	Rsyn::Module module;
	Rsyn::PhysicalDesign phDesign;
	std::mutex _lock;

	void random_initial_placement();
	
	// long half_perimeter_wirelength(/*a_cell, b_cell*/);
	// long whole_netlist_wirelength();
	// void swap_cells(/*a_cell, b_cell*/);
	
	void expecto_patronum();

	void swap();
	
public:
	
	virtual bool run(const Rsyn::Json &params);
	
};
