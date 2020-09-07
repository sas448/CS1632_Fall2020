export ASAN_SYMBOLIZER_PATH=`pwd`/llvm-symbolizer
export ASAN_OPTIONS=symbolize=1

#gcc overflow.c -fsanitize=address -fPIE -pie -g -std=c99 -o overflow
gcc overflow.c -fsanitize=address -g -std=c99 -o overflow
./overflow
