# Generate114

![Static Badge](https://img.shields.io/badge/Programing%20Language-C%2B%2B-green?logo=C%2B%2B)
![Static Badge](https://img.shields.io/badge/License-MIT-blue)
![Static Badge](https://img.shields.io/badge/Version-v1.0.0-purple)

> We need an icon!

## 1. Introduction to the Program

While I was surfing on the Internet these days, I've found someone who has made a program that generates a string filled with one of the Internet users' "languages": 114514. That inspired me a lot that I re-completed this project using C++ and has complied a <i>SHARED LIBRARY</i> to share and spread my ideas.

> if you are for development, goto [4. Develop](#4-development)

## 2. Usage

1. `CMake Projects`

write these down:

```CMakeLists
target_link_libraries(${PROJECT_NAME} Generate114)
```

## 3. Documentation

### 3.1 `Generate114::Visit`

> You don't need to use this function, that this is just for searching the answer from a form.

### 3.2 `Generate114::Transform`

> @param num (long long) the input number waiting for transform.
> @param debug (bool) using `Debug` mode or not. **(Under development)**
> @return the transformmed string.
> \[Note\] You need to remember that not all number could be transformmed. If program doesn't find the solution, it will return "".

Using example:

```C++
std::string result = Generate114::Transform(1000000, true);
```

## 4. Development

### 4.1 Undeveloped Functions

- [ ] 1. Debug mode
- [ ] 2. Install

### 4.2 Unexpected Functions

- [ ] 1. Support more numbers
- [ ] 2. Fastern the speed

## 4. Contribute

1. Kanjunzhe(project holder) [His Homepage](https://github.com/kanjunzhe)
