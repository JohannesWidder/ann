#pragma once

#include "neuron.h"
/// <summary>
/// Klasse Neuron.
/// </summary>
neuron::neuron(unsigned numOutputs)
{
	for (unsigned c = 0; c < numOutputs; ++c) {
		m_outputWeights.push_back(connection());
		m_outputWeights.back().weight = randomWeight();
	}
}

void neuron::feedForward(const Layer& prevLayer)
{
	double sum = 0.0;

	for (unsigned n = 0; n < prevLayer.size(); ++n) {
		sum += prevLayer[n].getOutputVal() * prevLayer[n].m_outputWeights[m_myindex].weight;
	}
}
