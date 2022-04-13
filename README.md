# fuzz-test-poc
Learning to write Fuzz tests for C functions using libFuzzer

# Build Instruction
For clang version >= 5.0, we can link against the libFuzzer library by using `-fsanitize=fuzzer`
```bash
clang -g -O1 -fsanitize=fuzzer,address fuzz_hello.c -o hello
./hello output corpus
```
