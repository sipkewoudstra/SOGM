# Automatically generated makefile, created by the Introjucer
# Don't edit this file! Your changes will be overwritten when you re-save the Introjucer project!

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifndef CONFIG
  CONFIG=Debug
endif

ifeq ($(CONFIG),Debug)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Debug
  OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  CPPFLAGS := $(DEPFLAGS) -std=c++11 -D "LINUX=1" -D "DEBUG=1" -D "_DEBUG=1" -D "JUCER_LINUX_MAKE_7346DA2A=1" -D "JUCE_APP_VERSION=1.0.0" -D "JUCE_APP_VERSION_HEX=0x10000" -I /usr/include -I /usr/include/freetype2 -I "~/SDKs/VST3 SDK" -I ~/SDKs/vstsdk2.4 -I ../../JuceLibraryCode -I "/Users/sipkewoudstra/Documents/Informatica/C++ /JUCE-OSX/modules"
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -g -ggdb -fPIC -O0
  CXXFLAGS += $(CFLAGS)
  LDFLAGS += $(TARGET_ARCH) -L$(BINDIR) -L$(LIBDIR) -shared -L/usr/X11R6/lib/ -lX11 -lXext -lXinerama -lasound -ldl -lfreetype -lpthread -lrt 
  LDDEPS :=
  RESFLAGS :=  -D "LINUX=1" -D "DEBUG=1" -D "_DEBUG=1" -D "JUCER_LINUX_MAKE_7346DA2A=1" -D "JUCE_APP_VERSION=1.0.0" -D "JUCE_APP_VERSION_HEX=0x10000" -I /usr/include -I /usr/include/freetype2 -I "~/SDKs/VST3 SDK" -I ~/SDKs/vstsdk2.4 -I ../../JuceLibraryCode -I "/Users/sipkewoudstra/Documents/Informatica/C++ /JUCE-OSX/modules"
  TARGET := JuceDemoPlugin.so
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(OUTDIR)/$(TARGET) $(OBJDIR)
endif

ifeq ($(CONFIG),Release)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Release
  OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  CPPFLAGS := $(DEPFLAGS) -std=c++11 -D "LINUX=1" -D "NDEBUG=1" -D "JUCER_LINUX_MAKE_7346DA2A=1" -D "JUCE_APP_VERSION=1.0.0" -D "JUCE_APP_VERSION_HEX=0x10000" -I /usr/include -I /usr/include/freetype2 -I "~/SDKs/VST3 SDK" -I ~/SDKs/vstsdk2.4 -I ../../JuceLibraryCode -I "/Users/sipkewoudstra/Documents/Informatica/C++ /JUCE-OSX/modules"
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -fPIC -Os
  CXXFLAGS += $(CFLAGS)
  LDFLAGS += $(TARGET_ARCH) -L$(BINDIR) -L$(LIBDIR) -shared -fvisibility=hidden -L/usr/X11R6/lib/ -lX11 -lXext -lXinerama -lasound -ldl -lfreetype -lpthread -lrt 
  LDDEPS :=
  RESFLAGS :=  -D "LINUX=1" -D "NDEBUG=1" -D "JUCER_LINUX_MAKE_7346DA2A=1" -D "JUCE_APP_VERSION=1.0.0" -D "JUCE_APP_VERSION_HEX=0x10000" -I /usr/include -I /usr/include/freetype2 -I "~/SDKs/VST3 SDK" -I ~/SDKs/vstsdk2.4 -I ../../JuceLibraryCode -I "/Users/sipkewoudstra/Documents/Informatica/C++ /JUCE-OSX/modules"
  TARGET := JuceDemoPlugin.so
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(OUTDIR)/$(TARGET) $(OBJDIR)
endif

OBJECTS := \
  $(OBJDIR)/scaleLinToLog_cfe668a3.o \
  $(OBJDIR)/FilmstripSlider_182eb7f6.o \
  $(OBJDIR)/scaleParameter_69e31568.o \
  $(OBJDIR)/Gui_2b5c821c.o \
  $(OBJDIR)/Filter_cccb6f01.o \
  $(OBJDIR)/AllpassFilter_9db559ab.o \
  $(OBJDIR)/NotchFilter_4d005e71.o \
  $(OBJDIR)/PeakFilter_e16ee740.o \
  $(OBJDIR)/HighShelfFilter_7183e3a1.o \
  $(OBJDIR)/LowShelfFilter_2e55ead7.o \
  $(OBJDIR)/LowpassFilter_96250e1e.o \
  $(OBJDIR)/HighpassFilter_984fd414.o \
  $(OBJDIR)/PluginProcessor_a059e380.o \
  $(OBJDIR)/PluginEditor_94d4fb09.o \
  $(OBJDIR)/juce_audio_basics_1fac2395.o \
  $(OBJDIR)/juce_audio_devices_6adce713.o \
  $(OBJDIR)/juce_audio_formats_995e30b3.o \
  $(OBJDIR)/juce_audio_processors_63a2984d.o \
  $(OBJDIR)/juce_audio_utils_11aa0053.o \
  $(OBJDIR)/juce_core_b4507677.o \
  $(OBJDIR)/juce_data_structures_dea326f3.o \
  $(OBJDIR)/juce_events_af44cf6b.o \
  $(OBJDIR)/juce_graphics_a7ce014f.o \
  $(OBJDIR)/juce_gui_basics_20c2294b.o \
  $(OBJDIR)/juce_gui_extra_fa43193.o \
  $(OBJDIR)/juce_PluginUtilities_da86a41f.o \
  $(OBJDIR)/juce_VST_Wrapper_1f9a0e28.o \
  $(OBJDIR)/juce_VST3_Wrapper_aae95d66.o \
  $(OBJDIR)/PluginParameters_a9fc9b33.o \

.PHONY: clean

$(OUTDIR)/$(TARGET): $(OBJECTS) $(LDDEPS) $(RESOURCES)
	@echo Linking Mpeq
	-@mkdir -p $(BINDIR)
	-@mkdir -p $(LIBDIR)
	-@mkdir -p $(OUTDIR)
	@$(BLDCMD)

clean:
	@echo Cleaning Mpeq
	@$(CLEANCMD)

strip:
	@echo Stripping Mpeq
	-@strip --strip-unneeded $(OUTDIR)/$(TARGET)

$(OBJDIR)/scaleLinToLog_cfe668a3.o: ../../Source/scaleLinToLog.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling scaleLinToLog.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/FilmstripSlider_182eb7f6.o: ../../Source/FilmstripSlider.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling FilmstripSlider.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/scaleParameter_69e31568.o: ../../Source/scaleParameter.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling scaleParameter.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Gui_2b5c821c.o: ../../Source/Gui.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Gui.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Filter_cccb6f01.o: ../../Source/Filter.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Filter.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/AllpassFilter_9db559ab.o: ../../Source/AllpassFilter.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling AllpassFilter.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/NotchFilter_4d005e71.o: ../../Source/NotchFilter.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling NotchFilter.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PeakFilter_e16ee740.o: ../../Source/PeakFilter.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PeakFilter.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/HighShelfFilter_7183e3a1.o: ../../Source/HighShelfFilter.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling HighShelfFilter.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/LowShelfFilter_2e55ead7.o: ../../Source/LowShelfFilter.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling LowShelfFilter.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/LowpassFilter_96250e1e.o: ../../Source/LowpassFilter.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling LowpassFilter.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/HighpassFilter_984fd414.o: ../../Source/HighpassFilter.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling HighpassFilter.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PluginProcessor_a059e380.o: ../../Source/PluginProcessor.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PluginProcessor.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PluginEditor_94d4fb09.o: ../../Source/PluginEditor.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PluginEditor.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_basics_1fac2395.o: ../../../../C++\ /JUCE-OSX/modules/juce_audio_basics/juce_audio_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_devices_6adce713.o: ../../../../C++\ /JUCE-OSX/modules/juce_audio_devices/juce_audio_devices.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_devices.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_formats_995e30b3.o: ../../../../C++\ /JUCE-OSX/modules/juce_audio_formats/juce_audio_formats.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_formats.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_processors_63a2984d.o: ../../../../C++\ /JUCE-OSX/modules/juce_audio_processors/juce_audio_processors.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_processors.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_utils_11aa0053.o: ../../../../C++\ /JUCE-OSX/modules/juce_audio_utils/juce_audio_utils.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_utils.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_core_b4507677.o: ../../../../C++\ /JUCE-OSX/modules/juce_core/juce_core.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_core.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_data_structures_dea326f3.o: ../../../../C++\ /JUCE-OSX/modules/juce_data_structures/juce_data_structures.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_data_structures.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_events_af44cf6b.o: ../../../../C++\ /JUCE-OSX/modules/juce_events/juce_events.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_events.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_graphics_a7ce014f.o: ../../../../C++\ /JUCE-OSX/modules/juce_graphics/juce_graphics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_graphics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_basics_20c2294b.o: ../../../../C++\ /JUCE-OSX/modules/juce_gui_basics/juce_gui_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_extra_fa43193.o: ../../../../C++\ /JUCE-OSX/modules/juce_gui_extra/juce_gui_extra.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_extra.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_PluginUtilities_da86a41f.o: ../../../../C++\ /JUCE-OSX/modules/juce_audio_plugin_client/utility/juce_PluginUtilities.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_PluginUtilities.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_VST_Wrapper_1f9a0e28.o: ../../../../C++\ /JUCE-OSX/modules/juce_audio_plugin_client/VST/juce_VST_Wrapper.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_VST_Wrapper.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_VST3_Wrapper_aae95d66.o: ../../../../C++\ /JUCE-OSX/modules/juce_audio_plugin_client/VST3/juce_VST3_Wrapper.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_VST3_Wrapper.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PluginParameters_a9fc9b33.o: ../../../../C++\ /JUCE-OSX/modules/PluginParameters/PluginParameters.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PluginParameters.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

-include $(OBJECTS:%.o=%.d)
