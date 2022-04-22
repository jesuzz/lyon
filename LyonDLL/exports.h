#pragma once

__declspec(dllexport) int soscascade(double* signal, int nSamples, double* coeffs, double* state,
    int nChannels, double* outputData);

__declspec(dllexport) int agc(double* inputData, int nChannels, int nSamples, int nStages,
    double* agcParams, double* state, double* outputData);

__declspec(dllexport) int sosfilters(double* inputData, int nInputChannels, int nSamples, double* coeffs,
    int nFilterChannels, double* state, double* outputData,
    int nOutputChannels);
