# Anteckningar 2023-01-23

## Inlämningsuppgift. Inlämning 1 - Del 1.
 
 - Beskrivning finns i Omniway.
 - Inlämning sker genom länk till git repository (Codeberg eller Github)
 - En bonusuppgift (en extra poäng till tentan).

### Inlämning Bonusuppgift 

mylist: 1->2->3->4->5->6

mylist.swap(1,3);

Efter:
mylist: 1->4->3->2->5->6


## C++ Skapa objekt på stacken vs med new (på heap) 

```
myClass * B;

void func_A() {
   myClass A = myClass(input);

  B = &A;  // Kommer inte vara åtkommlig när vi lämnar funktionen.
  return; 
}
```

```
myClass * B;

void func_A() {
   myClass * A = new myClass(input);

  B = A;
  delete A;  //Om vi inte kör delete finns objektet kvar.
  return; 
}
```

## Smart pointers i C++
Sedan C++11, 2011

https://www.geeksforgeeks.org/smart-pointers-cpp/

## Iterera

```
for n in my_list:
  
```

### << overloading

```
Temperature t;

// Kod

cout << "Dagens temperatur << t << endl;

t.print();
```

https://learn.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170


## C++ bygge

### Google test

Om ni använder MSYS2 / MINGW64 finns det ett färdigt paket att installera:https://packages.msys2.org/package/mingw-w64-x86_64-gtest

```
$pacman -S mingw-w64-x86_64-gtest
```

I er tasks.json fil måste ni lägga in följande under "tasks"->"args":

```
                "-I",
                "C:/GoogleTest/googletest/googletest/include",
                "-I",
                "C:/GoogleTest/googletest/bin",
                "-L",
                "C:/GoogleTest/googletest/lib/Debug",
                "-lgtest",
                "-lgtest_main"
```
### CMake
Jag har satt upp en alterantiv filstruktur, som använder CMake för att bygga projektet. Den ligger i undermappen _Cpp_CMake_. Detta är mer hur man skulle sätta upp det i ett riktigt projekt:

 - main.cpp: Huvudfilen
 - storage.cpp: Vår modul
 - include/storage.h: Headerfil för vår modul
 - tests/test_storage.cpp: Testfil för vår modul
 - CMakeLists.txt: Filen som beskriver bygget, inklusive test executable.

#### Installation

Öppna MSYS MINGW64. Installera följande:

```
pacman -S mingw-w64-x86_64-cmake
pacman -S ninja
```

Det finns Cmake extension för VS Code. Jag har fått problem att köra direkt från VS code så jag rekommenderar inte att installera det.

Vissa anpassningar av CMake filen kan behövas om du inte använder Windows eller MinGW64.

#### Bygge

Öppna MSYS MINGW64. Gå till mappen där du har ditt program (där main.cpp ligger).

Vi behöver köra CMake en gång för att skapa byggfilerna.

```
# Assuming you're executing these commands
# from the root directory!
mkdir build && cd build
cmake ..
```

Har inget i strukturen ändrats kan vi sedan köra följande kommando varje gång vi vill bygga:

```
cmake --build .
```

Våra executables har nu skapats. Vill du sedan köra själva programmet (main-funktionen) kör du:
```
./storage.exe
```

För att köra testerna kör du:
```
./test-storage.exe
```

