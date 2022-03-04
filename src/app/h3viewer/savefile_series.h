#pragma once

#include "player.h"

#include <h3/player.h>
#include <h3/savefile.h>

#include <array>
#include <filesystem>
#include <string>
#include <vector>

namespace h3viewer::savefile_series
{
namespace fs = std::filesystem;

struct SaveFileSeries
{
    Players players;
    std::vector<h3::savefile::SaveFile> files;
};

SaveFileSeries read_savefiles(h3::savefile::SaveFile::Input input, const Players &players);
void draw();
} // namespace h3viewer::savefile_series