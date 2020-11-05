#!/bin/bash

# set up directories
bundle exec ensure_arduino_installation.rb

# get required libraries
git clone https://github.com/PaulStoffregen/DS1307RTC.git
mv DS1307RTC $(bundle exec arduino_library_location.rb)/DS1307RTC

git clone https://github.com/MarkusLange/Arduino-Due-RTC-Library.git
mv Arduino-Due-RTC-Library $(bundle exec arduino_library_location.rb)/rtc_clock
