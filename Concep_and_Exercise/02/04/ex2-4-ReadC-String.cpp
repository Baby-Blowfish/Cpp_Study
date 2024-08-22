
#include <iostream>
using namespace std;

int main() {
	cout << "Enter your name >> ";

	char name[11];
	// 마지막 문자는 null무자인 '\0'이 들어가야 하므로 한글은 5개 글자, 영문은 10까지 저장할 수 있다.
	cin >> name; // 키보드로부터 문자열을 읽는다.
	// 만약 크기를 넘는다면 runtime error :stack smashing detected

	cout << "name is " << name; // 이름을 출력한다.

}

// Enter your name >> kim
// name is kim



// ### C-String
// C-String은 C 언어에서부터 사용된 전통적인 문자열 표현 방식입니다. C-String은 null-terminated 문자열로, 문자 배열에 문자열 데이터를 저장하고 마지막에 null 문자(`'\0'`)로 끝을 표시하는 방식입니다.

// #### 주요 특징:
// 1. **문자 배열**: C-String은 문자 배열입니다. 예를 들어:
//    ```cpp
//    char str[] = "Hello, World!";
//		char str2[5] = {'G','r','a','c','e'};
//    ```
//    `str`은 길이가 14인 문자열(`'\0'` 포함).
// 		'str2'는 단순 문자 배열

// 2. **Null-terminated**: 문자열의 끝은 항상 null 문자(`'\0'`)로 표시됩니다. 이것은 문자열의 길이를 알기 위해 매우 중요합니다. C-String을 다룰 때는 null 문자가 없으면 문자열을 제대로 인식하지 못합니다.

// 3. **메모리 관리**: C-String은 고정된 크기의 배열이므로, 크기가 넘치면 버퍼 오버플로우가 발생할 수 있습니다. 또한, 동적 할당을 사용하는 경우에는 수동으로 메모리를 해제해야 합니다.
//    ```cpp
//    char* str = new char[20];
//    strcpy(str, "Hello, World!");
//    // 이후 메모리를 해제해야 함
//    delete[] str;
//    ```

// 4. **표준 라이브러리 함수**: C-String은 C 표준 라이브러리의 다양한 함수와 함께 사용됩니다. 예를 들어, `strcpy`, `strlen`, `strcmp` 등이 있습니다.
//    ```cpp
//    char dest[20];
//    strcpy(dest, "Copy this!");
//    ```

// 5. **비교 및 조작**: C-String은 기본적으로 배열이므로, 비교(`strcmp`)와 결합(`strcat`) 등은 표준 라이브러리 함수에 의존합니다.

// ### `std::string` 클래스
// C++에서 제공하는 `std::string` 클래스는 C-String의 불편함과 안전성 문제를 개선하기 위해 설계되었습니다. `std::string` 클래스는 C++ 표준 라이브러리의 일부로, 동적 문자열 관리 및 다양한 유용한 기능을 제공합니다.

// #### 주요 특징:
// 1. **동적 크기 조정**: `std::string`은 내부적으로 동적 메모리 할당을 사용하여 문자열의 크기를 자동으로 조정합니다. 따라서 크기를 미리 지정할 필요가 없으며, 메모리 오버플로우의 위험이 줄어듭니다.
//    ```cpp
//    std::string str = "Hello, World!";
//    str += " Nice to meet you!";
//    ```

// 2. **편리한 연산자**: `std::string`은 `+`, `+=`, `==`, `!=`와 같은 연산자를 지원하여 문자열 결합, 비교 등이 매우 간단합니다.
//    ```cpp
//    std::string s1 = "Hello";
//    std::string s2 = "World";
//    std::string s3 = s1 + ", " + s2 + "!";
//    ```

// 3. **메모리 관리 자동화**: `std::string`은 RAII(Resource Acquisition Is Initialization) 원칙을 따르기 때문에, 메모리 관리가 자동으로 이루어집니다. 메모리 해제나 크기 조정에 대해 신경 쓸 필요가 없습니다.
//    ```cpp
//    std::string str = "This is a string.";
//    // 메모리는 자동으로 관리됩니다.
//    ```

// 4. **다양한 메서드**: `std::string` 클래스는 문자열 길이를 구하는 `size()`나 `length()` 메서드, 특정 위치의 문자를 반환하는 `at()` 메서드, 부분 문자열을 추출하는 `substr()` 메서드 등 다양한 유용한 기능을 제공합니다.
//    ```cpp
//    std::string str = "Hello, World!";
//    std::string sub = str.substr(7, 5); // "World"
//    ```

// 5. **STL과의 호환성**: `std::string`은 C++ 표준 템플릿 라이브러리(STL)의 다른 요소들과 잘 통합됩니다. 예를 들어, 벡터나 맵 같은 컨테이너에서 `std::string`을 쉽게 사용할 수 있습니다.
//    ```cpp
//    std::vector<std::string> vec;
//    vec.push_back("Hello");
//    vec.push_back("World");
//    ```