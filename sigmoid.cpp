// sigmoid.cpp
#include <cmath>

// Exporta la función para que MT5 pueda verla
extern "C" __declspec(dllexport) double activacion_sigmoide(double z) {
    return 1.0 / (1.0 + std::exp(-z));
}