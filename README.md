<div align="center">
  <h1>C++ Module 02</h1> <img src="https://cdn-icons-png.flaticon.com/512/6132/6132222.png" alt="C++ Logo" width="65"></br></br>
</div>

<p align="center">Bu proje, C++ dilinde temel programlama becerilerini geliştirmek için tasarlanmıştır. Proje, sabit noktalı sayılar (fixed-point numbers), copy constructor, operatör aşırı yükleme (operator overloading), geçici polimorfizm (temporary polymorphism), cmath kütüphanesi ve increment/decrement operatörleri gibi önemli C++ konularını kapsamlı bir şekilde ele alır.</p>

---

## İçindekiler 🔗

- [Sabit Noktalı Sayılar (Fixed Point Numbers)](#sabit-noktalı-sayılar-fixed-point-numbers)
  - [Avantajları ve Dezavantajları](#avantajları-ve-dezavantajları)
  - [Kullanım Alanları](#kullanım-alanları)
  - [Sabit Noktalı Sayılarla Örnekler](#sabit-noktalı-sayılarla-örnekler)
- [Copy Constructor (Kopya Kurucu)](#copy-constructor-kopya-kurucu)
  - [Copy Constructor Tanımı](#copy-constructor-tanımı)
  - [Copy Constructor Kullanımı](#copy-constructor-kullanımı)
  - [Varsayılan Copy Constructor](#varsayılan-copy-constructor)
  - [Özelleştirilmiş Copy Constructor](#özelleştirilmiş-copy-constructor)
  - [Sonuç](#sonuç)
- [Operator Overload Nedir?](#operator-overload-nedir)
  - [Örnek Kod](#örnek-kod)
  - [Operator Overloading Notlar](#operator-overloading-notlar)
  - [Kısaca Özet](#kısaca-özet)
- [Geçici Polimorfizm nedir?](#geçici-polimorfizm-nedir)
  - [Geçici Polimorfizm Türleri](#geçici-polimorfizm-türleri)
  - [Geçici Polimorfizmin Özellikleri](#geçici-polimorfizmin-özellikleri)
- [Cmath Kütüphanesi Nedir?](#cmath-kütüphanesi-nedir)
  - [Sağladığı Bazı Fonksiyonlar](#sağladığı-bazı-fonksiyonlar)
  - [Kullanım Örneği](#kullanım-örneği)
- [Increment Decrement Prefix ve Postfix Nedir?](#increment-decrement-prefix-ve-postfix-nedir)
  - [Increment (Arttırma) ve Decrement (Azaltma) Operatörleri](#increment-arttırma-ve-decrement-azaltma-operatörleri)
- [C++ Ortodoks Kanonik Formu (Orthodox Canonical Form)](#c++-ortodoks-kanonik-formu-orthodox-canonical-form)
  - [Ortodoks Kanonik Formu Neden Önemlidir?](#ortodoks-kanonik-formu-neden-önemlidir)
 
---

<h2 align="center">Sabit Noktalı Sayılar (Fixed Point Numbers)</h2> 

**Sabit Noktalı Sayılar (Fixed Point Numbers)**, gerçek sayıların bilgisayar ortamında temsil edilme yöntemlerinden biridir. Bu yöntemde, bir sayının kesirli ve tam sayı kısımları belirli bir noktada sabitlenir. Kayan noktalı sayılarda (floating-point numbers) ondalık nokta değeriyle birlikte hareket ederken, sabit noktalı sayılarda bu nokta belirli bir konumda sabit kalır. Bu yöntem, performans, doğruluk ve aralık arasında bir denge sunar.

Sabit noktalı aritmetik, performans ve kaynak verimliliğinin kritik olduğu gömülü sistemler, dijital sinyal işleme (DSP) ve gerçek zamanlı uygulamalarda yaygın olarak kullanılır.

---

<h2 align="center">Avantajları ve Dezavantajları</h2> 


| **Avantajlar**                                          | **Dezavantajlar**                                       |
| ------------------------------------------------------- | ------------------------------------------------------ |
| **Performans:** Sabit noktalı işlemler, özellikle kayan noktalı birimlere (FPU) sahip olmayan donanımlarda, kayan noktalı işlemlerden genellikle daha hızlıdır. | **Sınırlı Aralık:** Temsil edilebilecek sayıların aralığı, kayan noktalı sayılara göre daha dardır. Bu sınırlama, dikkatli bir şekilde yönetilmelidir. |
| **Doğruluk:** Kayan noktalı sayılara kıyasla kesirli kısımlarda daha yüksek doğruluk sağlar, bu da yuvarlama hatalarının kabul edilemez olduğu uygulamalarda kritiktir. | **Esneklik Eksikliği:** Sabit bir noktaya sahip olmak, sayının temsil edilebileceği aralık ve doğruluğu sınırlar. |
| **Deterministik Davranış:** Sabit noktalı aritmetik, daha öngörülebilir olup, tutarlı performansın gerekli olduğu gerçek zamanlı sistemler için uygundur. | |

---

### Kullanım Alanları

- **Gömülü Sistemler:** Bellek ve işlemci gücünün sınırlı olduğu cihazlarda, sabit noktalı sayılar kayan noktalı sayılara göre daha verimli olabilir.
  
- **Dijital Sinyal İşleme (DSP):** Sabit noktalı sayılar, ses ve görüntü işleme uygulamalarında düşük gecikme süreleri ve yüksek doğruluk sunar.
  
- **Finansal Uygulamalar:** Parasal değerler ve finansal verilerin doğru ve hassas bir şekilde temsil edilmesi için uygundur.

---

<h2 align="center">Sabit Noktalı Sayılarla Örnekler</h2> 

**Örnek 1: Basit Sabit Noktalı Sayı Temsili**

- Bir 16 bitlik sabit noktalı sayıda:
  - 8 bit tam sayı kısmını (integer part) temsil eder.
  - 8 bit kesirli kısmını (fractional part) temsil eder.

- Eğer sayımız `0101 0010 1100 0000` ise:
  - Tam sayı kısmı: `0101 0010` (82)
  - Kesirli kısım: `1100 0000` (0.75)

Bu sayının değeri: **82.75**

---

**Örnek 2: Sabit Noktalı Sayılarla Aritmetik İşlemler**

- İki sabit noktalı sayıyı toplarken:

  - Sayı 1: `0011 1100` (3.75)
  - Sayı 2: `0001 0010` (1.125)

Toplam: `0101 1110` (4.875)

---

<h2 align="center">Copy Constructor (Kopya Kurucu)</h2> 

C++ dilinde `copy constructor` (kopya kurucu), bir nesnenin başka bir nesne kullanılarak oluşturulmasını sağlayan özel bir kurucudur. Copy constructor, bir nesnenin kopyalanmasını, yani Orijinal nesnenin üye değişkenlerini yeni bir nesneye kopyalar ve iki farklı nesne oluşturur, ancak bu iki nesnenin üye değişkenlerinin aynı değerlere sahip olduğu anlamına gelir. Yani:

- İki nesne de birbirinden bağımsızdır.
- Her nesne, kendi belleğinde yer tutar.
- Eğer orijinal nesnede bir değişiklik yaparsanız, bu yeni nesneye etki etmez. Aynı şekilde, yeni nesnede bir değişiklik yaparsanız, orijinal nesne bundan etkilenmez.

Örneğin, bir sınıfta bir `int` değişkeni varsa ve bir nesnenin kopyasını oluşturduğunuzda, her iki nesne de o değişkenin aynı değere sahip bağımsız kopyalarını içerir. Ancak, eğer o değişkenin değeri bir nesnede değişirse, diğer nesnenin değişkeni bundan etkilenmez. Kısacası, copy constructor ile `fiziksel olarak ayrı` iki nesne oluşur, ancak bu iki nesnenin üye değişkenlerinin başlangıçta aynı değerleri vardır.
Copy constructor genellikle şu durumlarda kullanılır:

- Bir nesne başka bir nesne kullanılarak başlatıldığında.
- Bir nesne fonksiyona değer olarak geçirildiğinde.
- Bir fonksiyon bir nesne döndürdüğünde.

---

### Copy Constructor Tanımı

Bir sınıfta copy constructor aşağıdaki gibi tanımlanır:

```cpp
class ClassName {
public:
    ClassName(const ClassName &other); // Copy constructor
};
```

- **ClassName:** Sınıfın adı.
- **const ClassName &other:** Aynı sınıftan bir başka nesneyi (referans olarak) parametre olarak alan copy constructor.

---

### Copy Constructor Kullanımı

Aşağıda, copy constructor'un nasıl çalıştığını gösteren bir örnek bulunmaktadır:

```cpp
#include <iostream>

class MyClass {
public:
    int value;

    // Parametreli kurucu
    MyClass(int v) : value(v) {}

    // Copy constructor
    MyClass(const MyClass &other) : value(other.value) {
        std::cout << "Copy constructor called!" << std::endl;
    }
};

int main() {
    MyClass obj1(10);           // Parametreli kurucu çağrılır
    MyClass obj2 = obj1;        // Copy constructor çağrılır

    std::cout << "obj1.value: " << obj1.value << std::endl;
    std::cout << "obj2.value: " << obj2.value << std::endl;

    return 0;
}

```

- `obj1` nesnesi oluşturulduğunda, parametreli kurucu çağrılır ve value değişkenine 10 atanır.
- `obj2` nesnesi `obj1` kullanılarak oluşturulduğunda, copy constructor çağrılır ve `obj1`'in value değeri `obj2`'ye kopyalanır.

---

### Varsayılan Copy Constructor

Eğer bir sınıfta copy constructor tanımlanmazsa, C++ derleyicisi otomatik olarak bir varsayılan copy constructor oluşturur. Bu varsayılan copy constructor, sınıfın tüm üye değişkenlerini basit bir kopyalama işlemiyle yeni nesneye aktarır. Ancak, dinamik bellek yönetimi veya kaynak yönetimi gibi özel durumlar için özelleştirilmiş bir copy constructor tanımlamak gerekebilir.

---

### Özelleştirilmiş Copy Constructor

Özelleştirilmiş bir copy constructor, özellikle aşağıdaki durumlarda gereklidir:

- `Dinamik Bellek Yönetimi`: Eğer sınıf içerisinde dinamik olarak ayrılmış bellek kullanılıyorsa, shallow copy yerine deep copy yapmak gerekebilir.
- `Kaynak Yönetimi`: Dosya tanıtıcıları, ağ bağlantıları veya diğer sistem kaynakları gibi nesnelerin doğru bir şekilde kopyalanması gerektiğinde.

---

### Sonuç

Copy constructor, bir nesnenin kopyalanma şeklini kontrol etmenin kritik bir yoludur. Özellikle performans ve kaynak yönetimi açısından önemli olan bu özellik, C++ dilinde sıkça kullanılan temel bir yapıdır.

---

<h2 align="center">Operator Overload Nedir?</h2> 

`Operator overloading` (Operatör aşırı yükleme), C++ gibi nesne yönelimli programlama dillerinde mevcut olan bir özelliktir. Bu özellik, kullanıcı tanımlı sınıflar ve veri türleri için mevcut C++ operatörlerinin anlamını yeniden tanımlamaya veya genişletmeye olanak tanır. Bu sayede, standart operatörlerin (örneğin, `+`, `-`, `*`, `==`) farklı veri türleriyle çalışabilmesi sağlanır.

---

### Örnek kod

```cpp

#include <iostream> // Giriş/çıkış işlemleri için gerekli kütüphane

// Karmaşık sayıları temsil eden bir sınıf tanımlıyoruz
class ComplexNumber {
public:
    int real, imag; // Karmaşık sayının gerçek ve sanal kısımlarını temsil eden üye değişkenler

    // Yapıcı fonksiyon: Karmaşık sayının gerçek ve sanal kısımlarını alır, varsayılan olarak 0 kabul edilir
    ComplexNumber(int r = 0, int i = 0) : real(r), imag(i) {}

    // + operatörünün aşırı yüklenmesi: İki karmaşık sayıyı toplamak için kullanılır
    ComplexNumber operator + (const ComplexNumber& obj) {
        ComplexNumber temp; // Sonucu saklamak için geçici bir ComplexNumber nesnesi oluşturulur
        temp.real = real + obj.real; // Gerçek kısımlar toplanır
        temp.imag = imag + obj.imag; // Sanal kısımlar toplanır
        return temp; // Sonuç döndürülür
    }
};

int main() {
    // İki karmaşık sayı tanımlıyoruz: c1 (3 + 4i), c2 (1 + 2i)
    ComplexNumber c1(3, 4), c2(1, 2);
    
    // c1 ve c2'nin toplamını c3'e atıyoruz
    ComplexNumber c3 = c1 + c2;

    // Sonucu ekrana yazdırıyoruz: "c3 = 4 + 6i"
    std::cout << "c3 = " << c3.real << " + " << c3.imag << "i" << std::endl;

    return 0; // Programın sonlanması
}


```

---

**Açıklama:**`
- `ComplexNumber Sınıfı`: Bu sınıf, karmaşık sayıları temsil eder. `real` ve `imag` adında iki üye değişkene sahiptir.
- `operator + Fonksiyonu`: `+ operatörü`, `ComplexNumber` sınıfı için yeniden tanımlanmıştır. Bu, iki karmaşık sayıyı toplamak için kullanılır.
- `Kullanım`: `c1 + c2` ifadesi, `operator +` fonksiyonunu çağırır ve iki karmaşık sayıyı toplar.

---

### Operator Overloading Notlar
- Sadece Mevcut Operatörler: C++'da yeni operatörler tanımlanamaz; ancak mevcut operatörler aşırı yüklenebilir.
- Anlamlı Kullanım: Operatör aşırı yüklemesi, yalnızca mantıklı olduğu durumlarda kullanılmalıdır. Örneğin, `+` operatörü toplama işlemi için uygunken, anlamsız veya karmaşık kullanım durumlarından kaçınılmalıdır.
- Varsayılan Davranış: Bazı operatörler (örneğin, `=`) varsayılan olarak aşırı yüklenmiştir, ancak bu davranış özelleştirilebilir.

---

### Kısaca Özet

Operator overloading, C++'da sınıfları ve veri türlerini daha esnek ve kullanıcı dostu hale getirmek için kullanılan güçlü bir özelliktir. Bu özellik, programın daha okunabilir ve anlaşılır olmasına katkı sağlar, çünkü karmaşık işlemler basit operatörlerle ifade edilebilir.

---

<h2 align="center">Geçici Polimorfizm nedir?</h2> 


Geçici polimorfizm (ad-hoc polymorphism), programlama dillerinde aynı isimdeki fonksiyonların veya operatörlerin, farklı veri tipleriyle veya farklı sayıda parametrelerle çalışabilmesini sağlayan bir polimorfizm türüdür. Bu tür polimorfizm, genellikle iki temel teknikle gerçekleştirilir: fonksiyon aşırı yükleme **(function overloading)** ve operatör aşırı yükleme **(operator overloading)**.

---

### Geçici Polimorfizm Türleri

**1 - Fonksiyon Aşırı Yükleme (Function Overloading):**
  - Aynı isimde birden fazla fonksiyon tanımlayarak gerçekleştirilir.
  - Bu fonksiyonlar farklı sayıda veya türde parametreler alır.
  - Derleyici, fonksiyon çağrısı sırasında parametrelerin türüne ve sayısına bakarak hangi fonksiyonun çağrılacağını belirler.

**örnek:**
```cpp
void print(int i) {
    std::cout << "Tam sayı: " << i << std::endl;
}

void print(double d) {
    std::cout << "Kayan noktalı sayı: " << d << std::endl;
}

void print(std::string s) {
    std::cout << "Metin: " << s << std::endl;
}

int main() {
    print(10);          // "Tam sayı: 10"
    print(3.14);        // "Kayan noktalı sayı: 3.14"
    print("Merhaba");   // "Metin: Merhaba"
    return 0;
}
```

---

**Açıklama:** Aynı isimdeki print fonksiyonunu üç farklı veri türü için aşırı yükleyerek (`int`, `double`, ve `string`), her bir tür için farklı bir mesajla birlikte ekrana yazdırma işlemi gerçekleştirir. main fonksiyonunda sırasıyla bir tam sayı, bir kayan noktalı sayı ve bir metin (string) için print fonksiyonu çağrılır ve uygun mesajlar ekrana yazdırılır.

---

**2 - Operatör Aşırı Yükleme (Operator Overloading):**
  - Standart operatörlerin kullanıcı tanımlı veri türleri için yeniden tanımlanmasıdır.
  - Bu sayede, standart operatörler kullanıcı tanımlı veri türleri ile mantıklı bir şekilde çalışabilir.

**örnek:**
```cpp
class ComplexNumber {
public:
    int real, imag;
    ComplexNumber(int r = 0, int i = 0) : real(r), imag(i) {}
    ComplexNumber operator + (const ComplexNumber& obj) {
        return ComplexNumber(real + obj.real, imag + obj.imag);
    }
};

int main() {
    ComplexNumber c1(3, 4), c2(1, 2);
    ComplexNumber c3 = c1 + c2;
    // c3.real = 4, c3.imag = 6
    return 0;
}

```

---

**Açıklama:** `ComplexNumber` adında bir sınıf tanımlar ve bu sınıfın nesneleri üzerinde toplama `(+)` operatörünü aşırı yükler. main fonksiyonunda iki ComplexNumber nesnesi `(c1 ve c2)` tanımlanır ve bunlar toplandıktan sonra sonuç `c3` nesnesine atanır. Sonuç olarak, `c3` nesnesi `c1` ve `c2`'nin gerçek ve sanal kısımlarının toplamını içerir.

---

### Geçici Polimorfizmin Özellikleri
- **Derleme Zamanında Belirlenir:** Hangi fonksiyonun veya operatörün kullanılacağı, derleme zamanında belirlenir. Bu nedenle, geçici polimorfizm statik polimorfizm olarak da bilinir.
- **Esneklik:** Aynı işlevselliği farklı türlerle kullanma esnekliği sağlar.
- **Performans:** Dinamik polimorfizmden farklı olarak, çalışma zamanı maliyeti yoktur, çünkü her şey derleme zamanında çözülür.

Geçici polimorfizm, C++ gibi dillerde kodun esnekliğini artıran önemli bir özelliktir. Farklı türlerdeki verilere aynı isimdeki fonksiyonlarla işlem yapmayı sağlar ve bu da kodun daha okunabilir ve sürdürülebilir olmasına katkıda bulunur.

---

<h2 align="center">Cmath Kütüphanesi Nedir?</h2> 

`<cmath>` kütüphanesi, C++ programlama dilinde matematiksel işlemleri gerçekleştirmek için kullanılan bir standart kütüphanedir. Bu kütüphane, temel aritmetik işlemlerden, trigonometrik fonksiyonlara, üs ve logaritma hesaplamalarına kadar geniş bir yelpazede matematiksel fonksiyonlar sunar.

---

### Sağladığı Bazı Fonksiyonlar


<div align="center">

| **Fonksiyon Türü**       | **Fonksiyonlar**                    | **Açıklama**                                        |
|--------------------------|-------------------------------------|-----------------------------------------------------|
| **Trigonometri**          | `sin(x)`, `cos(x)`, `tan(x)`        | Sinüs, kosinüs, tanjant hesaplar.                   |
|                          | `asin(x)`, `acos(x)`, `atan(x)`     | Ark sinüs, ark kosinüs, ark tanjant hesaplar.       |
| **Üs ve Karekök**         | `pow(x, y)`                         | `x` üssü `y` değerini hesaplar.                     |
|                          | `sqrt(x)`, `cbrt(x)`                | Karekök ve küpkök hesaplar.                         |
| **Logaritma**             | `log(x)`, `log10(x)`                | Doğal ve 10 tabanında logaritma hesaplar.           |
| **Yuvarlama**             | `ceil(x)`, `floor(x)`, `round(x)`   | Yuvarlama işlemleri yapar.                          |
| **Mutlak Değer**          | `fabs(x)`                           | Mutlak değer hesaplar.                              |
| **Üssel ve Hiperbolik**   | `exp(x)`, `sinh(x)`, `cosh(x)`, `tanh(x)` | Üssel ve hiperbolik fonksiyonlar hesaplar.     |

</div>

---

### Kullanım Örneği

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 9.0;
    double y = 2.0;

    std::cout << "sqrt(x) = " << std::sqrt(x) << std::endl; // x'in karekökü
    std::cout << "pow(x, y) = " << std::pow(x, y) << std::endl; // x üssü y
    std::cout << "sin(x) = " << std::sin(x) << std::endl; // x'in sinüsü
    std::cout << "log(x) = " << std::log(x) << std::endl; // x'in doğal logaritması

    return 0;
}
```

---

<h2 align="center">Increment Decrement Prefix ve Postfix Nedir?</h2>

C++'da **increment (arttırma)** ve **decrement (azaltma)** işlemleri, bir değişkenin değerini arttırmak veya azaltmak için kullanılır. **Prefix** ve **postfix** işlemleri ise bu arttırma veya azaltma işlemlerinin uygulanma zamanını belirler. İşte bu kavramlar:

### Increment (Arttırma) ve Decrement (Azaltma) Operatörleri

- **Increment (Arttırma) Operatörü (++):**
  - x++ (Postfix): Önce mevcut değeri kullanır, sonra arttırır.
  - ++x (Prefix): Önce arttırır, sonra yeni değeri kullanır.

- **Decrement (Azaltma) Operatörü (--):**
  - x-- (Postfix): Önce mevcut değeri kullanır, sonra azaltır.
  - --x (Prefix): Önce azaltır, sonra yeni değeri kullanır.
 
---

### Prefix ve Postfix Kullanımı

- **Prefix Arttırma/Azaltma:** Değişkenin değeri önce değiştirilir (artırılır veya azaltılır), sonra sonuç kullanılır.

```cpp
int x = 5;
int y = ++x; // x önce 6'ya artırılır, sonra y'ye atanır. Sonuç: x=6, y=6
```

- **Postfix Arttırma/Azaltma:** Değişkenin mevcut değeri önce kullanılır, sonra değiştirilir.

```cpp
int x = 5;
int y = x++; // y'ye mevcut değer (5) atanır, sonra x 6'ya artırılır. Sonuç: x=6, y=5

```

---

<h2 align="center">C++ Ortodoks Kanonik Formu (Orthodox Canonical Form)</h2>

C++'da **Ortodoks Kanonik Form (Orthodox Canonical Form)**, bir sınıfın temel kural ve fonksiyonlarını tanımlamak için kullanılan bir terimdir. Bu form, bir sınıfın güvenli bir şekilde kopyalanması, taşınması ve yok edilmesi için gerekli olan dört temel fonksiyonu içerir:

1. **Varsayılan Yapıcı (Default Constructor)**
2. **Kopya Yapıcı (Copy Constructor)**
3. **Kopya Atama Operatörü (Copy Assignment Operator)**
4. **Yıkıcı (Destructor)**

Bu dört fonksiyon, bir sınıfın nesneleri arasında güvenli kopyalama, ömür yönetimi ve temiz bir kaynak kontrolü sağlamak amacıyla kullanılır. Aşağıda her bir fonksiyonun detaylı açıklaması verilmiştir.

---

### 1. Varsayılan Yapıcı (Default Constructor)

Varsayılan yapıcı, bir nesne oluşturulduğunda çalıştırılan ve sınıfın üye değişkenlerini başlatan fonksiyondur. Eğer sınıfta herhangi bir yapıcı tanımlanmadıysa, C++ tarafından otomatik olarak oluşturulur. Ancak, bir sınıfın manuel olarak başlatılması gereken kaynakları varsa, bu fonksiyonun kendiniz tarafından tanımlanması gerekebilir.

```cpp
class MyClass {
public:
    MyClass() {
        // Varsayılan başlatma işlemleri burada yapılır.
    }
};
```

---

### 2. Kopya Yapıcı (Copy Constructor)

Kopya yapıcı, bir nesne başka bir nesnenin kopyası olarak yaratıldığında çağrılır. Genellikle bir nesnenin başka bir nesneye kopyalanmasında kullanılan sınıflarda tanımlanır. Derleyici, eğer tanımlanmadıysa otomatik olarak bir kopya yapıcı oluşturur. Ancak, sınıfın özel kaynakları (dinamik bellek, dosya tanıtıcıları, vb.) yönetiyorsa, bu fonksiyonun özelleştirilmesi gerekebilir.

```cpp
class MyClass {
public:
    MyClass(const MyClass& other) {
        // Kopyalama işlemleri burada yapılır.
    }
};
```

---

### 3. Kopya Atama Operatörü (Copy Assignment Operator)

Kopya atama operatörü, bir nesnenin başka bir nesneye kopya yoluyla atanmasını sağlar. Bu operatör genellikle, mevcut bir nesnenin üzerine başka bir nesnenin kopyalanması gerektiğinde kullanılır. Derleyici tarafından otomatik olarak tanımlanabilir, ancak manuel kaynak yönetimi gerektiren sınıflarda özel olarak yazılmalıdır.

```cpp
class MyClass {
public:
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            // Mevcut kaynağın serbest bırakılması ve
            // diğer nesnenin kopyalanması burada yapılır.
        }
        return *this;
    }
};
```

---

### 4. Yıkıcı (Destructor)

Yıkıcı, bir nesne ömrünü tamamladığında ve bellekten silindiğinde çalıştırılan fonksiyondur. Özellikle dinamik bellek yönetimi gibi manuel kaynak yönetimi yapan sınıflarda, kaynakların serbest bırakılması için önemlidir. Bir yıkıcı tanımlanmadığında, C++ derleyicisi varsayılan bir yıkıcı oluşturur.

```cpp
class MyClass {
public:
    ~MyClass() {
        // Kaynakları serbest bırakma işlemleri burada yapılır.
    }
};
```

---

<h2 align="center">Ortodoks Kanonik Formu Neden Önemlidir?</h2>

C++'da Ortodoks Kanonik Form, bir sınıfın ömrü boyunca güvenli ve hatasız bir şekilde işleyebilmesi için kritik öneme sahiptir. Bu dört temel fonksiyon, nesne ömrü yönetimini doğru bir şekilde yapabilmeyi sağlar ve özellikle dinamik bellek yönetimi gibi karmaşık işlemleri doğru bir şekilde uygulamaya olanak tanır.

Eğer bir sınıf, kaynak yönetimi (dinamik bellek, dosyalar, vb.) gibi manuel işlemler gerektiriyorsa, bu formun tam ve doğru bir şekilde uygulanması gerekir. Bu sayede bellek sızıntıları ve diğer hatalar önlenir.

**Örnek:**
Aşağıda Ortodoks Kanonik Form'u uygulayan bir sınıf örneği yer alıyor:

```cpp
class Fixed
{
    private:
        int fixed;  // Sabit nokta değeri, dahili olarak tam sayı formatında saklanır.
        static const int _fixed = 8;  // Sabit bir kesirli kısım bit sayısı, yani sabit nokta aritmetiği için kullanılan hassasiyet.

    public:
        Fixed();  // Varsayılan yapıcı: Nesneyi başlatır.
        ~Fixed();  // Yıkıcı: Nesne ömrü sona erdiğinde çağrılır, kaynakları serbest bırakır.
        
        Fixed(const Fixed &);  // Kopya yapıcı: Mevcut bir nesneden yeni bir nesne oluşturur.
        
        Fixed &operator=(const Fixed &);  // Kopya atama operatörü: Mevcut bir nesneyi başka bir nesneyle değiştirir.
        
        int getRawBits(void) const;  // Nesnenin ham sabit nokta değerini döndürür.
        void setRawBits(int const raw);  // Nesnenin sabit nokta değerini ayarlar.
};

```

Bu sınıf Ortodoks Kanonik Form'daki dört temel fonksiyonu içerir: Varsayılan yapıcı, yıkıcı, kopya yapıcı ve kopya atama operatörü. Yorum satırları bu fonksiyonların ne yaptığını açıklamak için eklenmiştir.

---

Bu README dosyası Derya ACAR tarafından hazırlanmıştır.
