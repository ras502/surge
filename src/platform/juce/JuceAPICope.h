/*
 * Surge XT - a free and open source hybrid synthesizer,
 * built by Surge Synth Team
 *
 * Learn more at https://surge-synthesizer.github.io/
 *
 * Copyright 2018-2024, various authors, as described in the GitHub
 * transaction log.
 *
 * Surge XT is released under the GNU General Public Licence v3
 * or later (GPL-3.0-or-later). The license is found in the "LICENSE"
 * file in the root of this repository, or at
 * https://www.gnu.org/licenses/gpl-3.0.en.html
 *
 * Surge was a commercial product from 2004-2018, copyright and ownership
 * held by Claes Johanson at Vember Audio during that period.
 * Claes made Surge open source in September 2018.
 *
 * All source for Surge XT is available at
 * https://github.com/surge-synthesizer/surge
 */

#ifndef SURGE_SRC_PLATFORM_JUCE_JUCEAPICOPE_H
#define SURGE_SRC_PLATFORM_JUCE_JUCEAPICOPE_H

#if JUCE_VERSION >= 0x080000
#define SST_JUCE_FONT_CTOR(...) juce::Font(juce::FontOptions(__VA_ARGS__))
#define SST_JUCE_FONT_OPTIONS(...) juce::FontOptions(__VA_ARGS__)
#define SST_JUCE_EMPTY_FONT juce::FontOptions()
#else
#define SST_JUCE_FONT_CTOR(...) juce::Font(__VA_ARGS__)
#define SST_JUCE_FONT_OPTIONS(...) __VA_ARGS__
#define SST_JUCE_EMPTY_FONT
#endif

// Yes, a non-compatible point release! Fun eh?
#if JUCE_VERSION >= 0x080002
#define SST_STRING_WIDTH_INT(a, b) juce::GlyphArrangement::getStringWidthInt(a, b)
#define SST_STRING_WIDTH_FLOAT(a, b) juce::GlyphArrangement::getStringWidth(a, b)
#else
#define SST_STRING_WIDTH_INT(a, b) a.getStringWidth(b)
#define SST_STRING_WIDTH_FLOAT(a, b) a.getStringWidthFloat(b)
#endif

#endif // SURGE_SRC_PLATFORM_JUCE_JUCEAPICOPE_H
