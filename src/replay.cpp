// replay.cpp — part of replay-analyzer-x.

#include "replayanalyzerx/replay.h"

#include <cstdio>

namespace replayanalyzerx {

Replay::Replay(const std::string& config_path)
    : config_path_(config_path) {}

void Replay::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Replay::run() {
    if (verbose_) std::fprintf(stderr, "[replay-analyzer-x] replay: run\n");
    // core logic lives here
    return true;
}

}  // namespace replayanalyzerx
