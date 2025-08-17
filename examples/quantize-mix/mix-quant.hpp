#pragma once

#include "ggml.h"

#include <fstream>
#include <vector>
#include <string>

bool quantize_mix(
        std::ifstream & finp,
        std::ofstream & fout,
        const ggml_ftype encoder_ftype,
        const ggml_ftype decoder_ftype,
        const std::vector<std::string> & to_quant,
        const std::vector<std::string> & to_skip);
