#!/usr/bin/ruby
# Sorts arguments and prints them

args = ARGV.sort_by { |arg| arg.to_s }
puts args
