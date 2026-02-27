I'm just learning about C++, and this is my very simple calculator app. If you can make this more effective and efficient, go for it!
If you find any mistakes in my code, you can let me know. Thank you!

## Build

**Linux / WSL (g++):**
```bash
g++ -std=c++17 -Wall -o calculator calculator.cpp
./calculator
```
Or use the Makefile:
```bash
make
./calculator
```

**Windows (Visual Studio):**  
Open the folder in VS Code and use the C/C++ build task, or build from Developer Command Prompt:
```cmd
cl /EHsc calculator.cpp /Fe:calculator.exe
```
