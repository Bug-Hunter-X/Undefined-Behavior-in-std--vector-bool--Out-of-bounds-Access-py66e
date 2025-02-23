# std::vector<bool> Out-of-bounds Access Bug

This repository demonstrates a potential bug in C++ related to out-of-bounds access in `std::vector<bool>`. Unlike other standard vector types, `std::vector<bool>` doesn't provide the same level of bounds checking, making it prone to undefined behavior when accessing elements outside its valid range.

**Bug:**
Accessing an element of `std::vector<bool>` using an index that is out of bounds can result in undefined behavior such as crashes, unexpected values, or seemingly random errors. This is because `std::vector<bool>` is specially optimized for memory efficiency, which sacrifices some of the safety checks present in other vector types.

**Solution:**
The solution involves always ensuring the index used to access the `std::vector<bool>` is within the valid range (0 to `vec.size() - 1`). This can be done by explicitly checking the index before accessing the element or using `at()` method, which provides bounds checking.