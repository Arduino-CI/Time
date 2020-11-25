#!/bin/bash

# set up directories
bundle exec ensure_arduino_installation.rb
cd $(bundle exec arduino_library_location.rb)

# add missing libraries
export GITHUB="https://github.com/Arduino-CI"
if [ ! -d "./DS1307RTC" ] ; then
  git clone $SHALLOW https://github.com/PaulStoffregen/DS1307RTC.git
fi

if [ ! -d "./Arduino-Due-RTC-Library.git" ] ; then
  git clone $SHALLOW https://github.com/MarkusLange/Arduino-Due-RTC-Library.git
fi
