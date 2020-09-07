clang uninit.c -fsanitize=address -fPIE -pie -g -o uninit
ASAN_OPTIONS=detect_stack_use_after_return=1 ./uninit
