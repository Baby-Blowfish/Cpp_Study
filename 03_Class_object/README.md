좋습니다. 지금까지 업로드한 코드들을 바탕으로 학습 내용을 체계적으로 정리한 `README.md` 예시를 아래에 작성해드릴게요. 이 문서는 클래스, 생성자, 소멸자, 접근 지정자, 구조체 등 C++의 주요 객체지향 개념을 학습한 결과를 요약한 것입니다.

---

# 📘 C++ 객체지향 문법 정리

C++의 객체지향 프로그래밍(OOP) 개념을 다양한 예제(`ex3-1`~`ex3-10`)를 통해 학습한 내용을 정리한 문서입니다.

---

## 📌 학습 주제 요약

| 예제 | 개념 | 주요 내용 |
|------|------|----------|
| ex3-1 | 클래스 선언과 멤버 함수 | 클래스와 인스턴스 개념, 멤버 접근 방식 (`obj.member`) |
| ex3-2 | 사각형 클래스 | `getArea()`를 통한 멤버 함수 구현 연습 |
| ex3-3 | 생성자 기본 / 오버로딩 | 생성자 함수 정의 및 오버로딩 (`Circle()`, `Circle(int r)`) |
| ex3-4 | 위임 생성자 | C++11의 `Circle() : Circle(1)` 구조 |
| ex3-5 | 멤버 초기화 리스트 | `: x(a), y(b)` 와 같은 멤버 초기화 문법 |
| ex3-6 | 생성자 자동 생성 조건 | 생성자 유무에 따라 컴파일러가 생성자 자동 삽입 여부 |
| ex3-7 | 소멸자 | `~Circle()` 사용, 객체 메모리 해제 시 자동 호출 |
| ex3-8 | 생성자/소멸자 호출 순서 | 전역 vs 지역 객체의 생성/소멸 시점 비교 |
| ex3-9 | 접근 지정자, 인라인 함수 | `private`, `public`, `inline` 키워드 정리 |
| ex3-10 | 구조체 vs 클래스 | `struct`에서도 생성자/함수 사용 가능. 기본 접근자는 `public` |

---

## 🧱 클래스 선언 및 정의

```cpp
class Circle {
public:
  int radius;
  double getArea();
};
double Circle::getArea() {
  return 3.14 * radius * radius;
}
```

---

## 🧪 생성자 (Constructor)

```cpp
class Circle {
public:
  Circle();          // 기본 생성자
  Circle(int r);     // 오버로딩 생성자
};
Circle::Circle() : radius(1) {}
Circle::Circle(int r) : radius(r) {}
```

### ✅ 위임 생성자 (C++11)

```cpp
Circle::Circle() : Circle(1) {}
```

---

## ♻️ 소멸자 (Destructor)

```cpp
class Circle {
public:
  ~Circle(); // 소멸자
};
Circle::~Circle() {
  std::cout << "객체 소멸\n";
}
```

---

## 🔐 접근 지정자

```cpp
class MyClass {
private:
  int a;         // 클래스 내부에서만 접근 가능
protected:
  int b;         // 파생 클래스에서도 접근 가능
public:
  int c;         // 외부에서도 접근 가능
};
```

---

## 🧠 구조체(struct)와 클래스(class)의 차이

```cpp
struct StructCircle {
  int radius;
  double getArea();
  StructCircle(int r);
};
```

- 구조체도 생성자, 멤버 함수, 접근 제어자 가능
- **기본 접근 지정자만 다름**:  
  - `struct` → 기본 `public`  
  - `class` → 기본 `private`

---

## ⚡ 인라인 함수 (inline)

```cpp
inline double getArea() {
  return 3.14 * radius * radius;
}
```

- **간단한 함수**를 컴파일 타임에 펼쳐서 성능 향상
- `클래스 선언부에서 구현된 함수`는 자동으로 인라인 처리됨

---

