#pragma once

#include <vector>
#include "neuron.h"

class net_test;

class neuron;

typedef std::vector<neuron> Layer;

/// <summary>
/// Basisklasse Netzwerk
/// </summary>
class net {
public:
	net(const std::vector<unsigned> &topology);
	void feedForward(const std::vector<double> &inputValues);
	void backPropagation(const std::vector<double> &targetValues);
	void getResults(const std::vector<double> &resultValues) const;

	friend class net_test;

private:
	std::vector<Layer> m_layers;
};
