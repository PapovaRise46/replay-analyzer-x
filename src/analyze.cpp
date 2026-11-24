// analyze.cpp — part of replay-analyzer-x.

#include "replayanalyzerx/analyze.h"

#include <cstdio>

namespace replayanalyzerx {

Analyze::Analyze(const std::string& config_path)
    : config_path_(config_path) {}

void Analyze::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Analyze::run() {
    if (verbose_) std::fprintf(stderr, "[replay-analyzer-x] analyze: run\n");
    // core logic lives here
    return true;
}

}  // namespace replayanalyzerx
