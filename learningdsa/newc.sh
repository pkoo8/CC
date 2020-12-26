#!/bin/bash
echo "Enter New File Name:"
read filename
cp template.c $filename
code $filename
