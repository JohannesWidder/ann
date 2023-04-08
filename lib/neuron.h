#pragma once

#include <vector>
#include <cstdlib>

struct connection
{
	double weight;
	double deltaWeight;
};

class neuron {
public:
	neuron(unsigned numOutputs);
private:
	static double randomWeight(void) { return rand() / double(RAND_MAX); }
	// double M_outputval;
	std::vector<connection> m_outputWeights;
};