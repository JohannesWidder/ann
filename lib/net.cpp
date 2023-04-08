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
		m_layers.push_back(Layer());

		for (unsigned neuronNum =0; neuronNum <= topology[layerNum]; ++neuronNum) {
			m_layers.back().push_back(neuron());
			std::cout << "Made new neuron" << std::endl;
		}
	}

	return;
}

/// <summary>
/// Ermttelt aus dem Eingabevektor den Ergebnisvektor für das Lernen mit Hilfe der Backpropagation 
/// </summary>
/// <param name="inputValues"></param>
void net::feedForward(const std::vector<double>& inputValues)
{
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
