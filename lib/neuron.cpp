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

void neuron::feedForward(const std::vector<neuron>& prevLayer, unsigned m_myindex)
{
	double sum = 0.0;

	for (unsigned n = 0; n < prevLayer.size(); ++n) {
		sum += prevLayer[n].getOutputValue() * prevLayer[n].m_outputWeights[m_myindex].weight;
	}
}
