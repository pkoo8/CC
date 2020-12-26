#!/bin/bash
echo "Enter New File Name:"
read filename
cp template.cpp $filename
code $filename
