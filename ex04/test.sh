#!/bin/bash
./sifl
./sifl blablabla quis find42here
./sifl blablabla quis
./sifl testFile.txt quis find42here
diff testFile.txt testFile.txt.replace > foundDiffs.diff