#pragma once

#include <vector>
#include <cstdlib>

#include "net.h"

typedef std::vector<neuron> Layer;

struct connection
{
	double weight;
	double deltaWeight;
};

class neuron {
public:
	neuron(unsigned numOutputs);
	void setOutputValue(double val) { m_outputval = val; }
	double getOutputValue() const { return(m_outputval); }
	void feedForward(const Layer& prevLayer);
private:
	static double randomWeight(void) { return rand() / double(RAND_MAX); }
	double m_outputval;
	std::vector<connection> m_outputWeights;
};