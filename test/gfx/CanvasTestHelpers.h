/*
        ##########    Copyright (C) 2015 Vincenzo Pacella
        ##      ##    Distributed under MIT license, see file LICENSE
        ##      ##    or <http://opensource.org/licenses/MIT>
        ##      ##
##########      ############################################################# shaduzlabs.com #####*/

#pragma once

#include <gfx/Canvas.h>

//--------------------------------------------------------------------------------------------------

namespace sl
{
namespace cabl
{
namespace test
{

//--------------------------------------------------------------------------------------------------

bool matchColorForAllPixels(const Canvas* /*canvas_*/, const util::ColorRGB& /*color_*/);

bool compare(const Canvas* /*c1_*/, const Canvas* /*c2_*/);

bool pngWrite(const Canvas* /*c_*/, const std::string& /*fileName_*/);

bool pngRead(Canvas* /*c_*/, const std::string& /*fileName_*/);

//--------------------------------------------------------------------------------------------------

} // namespace test
} // namespace cabl
} // namespace sl