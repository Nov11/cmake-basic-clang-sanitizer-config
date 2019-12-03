### basic configurations of using clang sanitizer 

---

### MemorySanitizer : a detector of uninitialized reads

#### flags
-fno-omit-frame-pointer -fsanitize=memory -fno-optimize-sibling-calls -O1

#### more descriptive stack trace
sudo ln -s /usr/bin/llvm-symbolizer-3.8  /usr/bin/llvm-symbolizer

#### document
https://clang.llvm.org/docs/MemorySanitizer.html

---
### AddressSanitizer : a fast memory error detector
not detecting writing of out of bound index

#### flags 
-fsanitize=address

address / memory sanitizer cannot be used at same time.

#### document
https://clang.llvm.org/docs/AddressSanitizer.html