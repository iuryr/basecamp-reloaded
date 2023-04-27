#!/bin/sh
ifconfig | grep -E -o '([[:xdigit:]]{2}:){5}[[:xdigit:]]{2}'
