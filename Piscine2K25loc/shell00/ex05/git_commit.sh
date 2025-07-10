#!/bin/bash

echo `git rev-parse HEAD` 
echo `git rev-parse HEAD^`
echo `git rev-parse HEAD^^`
echo `git rev-parse HEAD~3`
echo `git rev-parse HEAD~4`

