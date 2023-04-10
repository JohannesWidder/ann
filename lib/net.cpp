#pragma once

#include <iostream>

#include "net.h"
#include "neuron.h"

/// <summary>
/// Konstruktor setzt die Klasse Neuron zusammen. 
/// </summary>
/// <param name="topology"></param>
net::net(const std::vector<unsigned> &topology)
{
	unsigned numLayers = topology.size();

	for (unsigned layerNum = 0; layerNum < numLayers; ++layerNum) {
		std::vector<neuron>push_back(std::vector<neuron>());
		unsigned numOutputs = layerNum == topology.size() - 1 ? 0 : topology[layerNum + 1];
		for (unsigned neuronNum =0; neuronNum <= topology[layerNum]; ++neuronNum) {
			std::vector<neuron>back().push_back(neuron(numOutputs));
			std::cout << "Made new neuron" << std::endl;
		}
	}

	return;
}

/// <summary>
/// \brief
/// Eingabevektor durch das Netzwerk progagieren. 
/// \details
/// Überträgt den Eingabevektor in das Netzwerk und propagiert dann dann die Ergebnisse durch das Netzwerk
/// </summary>
/// <param name="inputValues"></param>
void net::feedForward(const std::vector<double>& inputValues)
{

	std::vector
	// Assagn (latch) the input values into the input neurons
	for (unsigned i = 0; inputValues.size(); ++i) {
		m_layers[0][i].setOutputValue(inputValues[i]);
	}

	// Forward Propagation
	for (unsigned layerNum = 1; layerNum < m_layers[layerNum].size() - 1; ++layerNum) {
		for (unsigned n = 0; n < m_layers[layerNum].size() - 1; ++n) {
			m_layers[layerNum][n].feedForward(m_layers[0], layerNum);
		}
	}

	return;
}

/// <summary>
/// Lernen mit Hilfe der Backpropagation 
/// </summary>
/// <param name="targetValues"></param>
void net::backPropagation(const std::vector<double>& targetValues)
{
	return;
}

/// <summary>
/// Produktivversion 
/// </summary>
/// <param name="resultValues"></param>
void net::getResults(const std::vector<double>& resultValues) const
{
	return;
}
