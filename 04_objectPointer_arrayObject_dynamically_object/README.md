# 📘 C++ 객체, 포인터, 배열, 동적 할당 학습 정리 (예제 ex4-1 ~ ex4-10)

## 📌 목차

| 예제 | 개념 | 주요 내용 |
|------|------|----------|
| ex4-1 | 객체 포인터 | `->`, `*p`를 통한 객체 접근, 메모리 구조 비교 |
| ex4-2 | 객체 배열 | 기본 생성자 호출, 포인터를 통한 배열 순회 |
| ex4-3 | 객체 배열 초기화 | `{ Circle(10), Circle(20), ... }` 형식으로 초기화 |
| ex4-4 | 2차원 객체 배열 | `Circle[2][3]`, 포인터 주소 구조 분석 |
| ex4-5 | `new int` | 정수형 동적 할당 및 delete 사용법 |
| ex4-6 | `new int[]` | 배열형 동적 할당, 입력 후 평균 계산 |
| ex4-7 | `new Circle` | 객체 동적 생성 및 소멸자 호출 시점 |
| ex4-8 | 반복 동적 객체 생성 | 사용자 입력에 따라 반복 생성 후 삭제 |
| ex4-9 | 객체 배열의 동적 생성 | `new Circle[n]`, 반복 출력 및 delete[] |
| ex4-10 | 실전 객체 배열 앱 | 사용자 입력으로 n개의 원을 생성 후 조건 분석 |
| ex4-11 | this 포인터, string 생성 | `this` 포인터 설명, string 객체 생성 및 출력 |
| ex4-12 | 문자열 입력 | `getline()`을 이용한 전체 문자열 입력 |
| ex4-13 | 문자열 회전 | `substr()`을 이용한 문자열 문자 회전 |
| ex4-14 | 문자열 내 정수 합산 | `find()`, `substr()`, `stoi()`를 이용한 정수 추출 및 덧셈 |
| ex4-15 | 문자열 검색 및 치환 | `find()`와 `replace()`를 이용한 문자열 치환 |

---

## 🧠 주요 개념 정리

### 1. 📦 객체 포인터

```cpp
Circle pizza(30);
Circle *p = &pizza;
p->getArea();         // 간접 접근
(*p).getArea();       // 동일한 의미
```

- `sizeof(Circle)` : 객체 크기 (멤버 변수 기준)
- `sizeof(Circle*)` : 포인터 크기 (일반적으로 8바이트)

---

### 2. 🔁 객체 배열과 포인터

```cpp
Circle arr[3];  // 객체 배열
Circle *p = arr;
p->getArea();   // 배열 요소 접근
```

---

### 3. 📋 객체 배열 초기화

```cpp
Circle arr[3] = {Circle(10), Circle(20), Circle()};
```

---

### 4. 🧮 2차원 객체 배열

```cpp
Circle circles[2][3];
circles[0][1].getArea();  // 다차원 배열 요소 접근
```

---

### 5. 💾 동적 할당 (`new`, `delete`)

```cpp
int *p = new int(5);
delete p;

int *arr = new int[10];
delete[] arr;
```

---

### 6. 🧬 객체의 동적 생성

```cpp
Circle *p = new Circle(30);
delete p;
```

---

### 7. 🧠 객체 배열의 동적 생성

```cpp
Circle *arr = new Circle[n];
delete[] arr;
```

---

### 8. 🧪 실습 예제 응용

```cpp
// ex4-10
if (area >= 100 && area <= 200) count++;
```

---

### 🧵 string 클래스 사용 예시

```cpp
#include <string>
using namespace std;

string s = "Hello";
s.append(" World"); // "Hello World"
int len = s.length();
s.replace(0, 5, "Hi"); // "Hi World"
```

---

### 📍 문자열 치환 예제 요약 (ex4-15)

```cpp
string s = "abc abc abc";
string f = "abc", r = "xyz";
int i = 0;
while ((i = s.find(f, i)) != string::npos) {
    s.replace(i, f.length(), r);
    i += r.length();
}
```
