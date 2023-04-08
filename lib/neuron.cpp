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
