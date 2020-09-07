clang tiny_race.c -fsanitize=thread -fPIE -pie -g -o tiny_race
./tiny_race
