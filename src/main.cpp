// main.cpp — entry point. Wires config and subsystems together.

#include "replayanalyzerx/settings.h"
#include "replayanalyzerx/replay.h"
#include "replayanalyzerx/analyze.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    replayanalyzerx::Settings settings = replayanalyzerx::Settings::load_default();
    replayanalyzerx::Replay replay(settings.store_path);
    replayanalyzerx::Analyze analyze(settings.store_path);
    std::fprintf(stderr, "[replay-analyzer-x] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
