<div align="center">
  <h1>C++ Module 02</h1> <img src="https://cdn-icons-png.flaticon.com/512/6132/6132222.png" alt="C++ Logo" width="65"></br></br>
</div>
<p align="center">Bu proje, C++ dilinde temel programlama becerilerini geliştirmek için hazırlanmıştır.</p>

---

## İçindekiler

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
 
---

<h2 align="center">Sabit Noktalı Sayılar (Fixed Point Numbers)</h2> 

**Sabit Noktalı Sayılar (Fixed Point Numbers)**, gerçek sayıların bilgisayar ortamında temsil edilme yöntemlerinden biridir. Bu yöntemde, bir sayının kesirli ve tam sayı kısımları belirli bir noktada sabitlenir. Kayan noktalı sayılarda (floating-point numbers) ondalık nokta "yüzerken", sabit noktalı sayılarda bu nokta belirli bir konumda sabit kalır. Bu yöntem, performans, doğruluk ve aralık arasında bir denge sunar.

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

C++ dilinde **copy constructor** (kopya kurucu), bir nesnenin başka bir nesne kullanılarak oluşturulmasını sağlayan özel bir kurucudur. Copy constructor, bir nesnenin kopyalanmasını, yani orijinal nesnenin üye değişkenlerinin yeni nesneye aynen aktarılmasını sağlar.

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

-- **obj1** nesnesi oluşturulduğunda, parametreli kurucu çağrılır ve value değişkenine 10 atanır.
-- **obj2** nesnesi obj1 kullanılarak oluşturulduğunda, copy constructor çağrılır ve obj1'in value değeri obj2'ye kopyalanır.

---

### Varsayılan Copy Constructor

Eğer bir sınıfta copy constructor tanımlanmazsa, C++ derleyicisi otomatik olarak bir varsayılan copy constructor oluşturur. Bu varsayılan copy constructor, sınıfın tüm üye değişkenlerini basit bir kopyalama işlemiyle yeni nesneye aktarır. Ancak, dinamik bellek yönetimi veya kaynak yönetimi gibi özel durumlar için özelleştirilmiş bir copy constructor tanımlamak gerekebilir.

---

### Özelleştirilmiş Copy Constructor

Özelleştirilmiş bir copy constructor, özellikle aşağıdaki durumlarda gereklidir:

- Dinamik Bellek Yönetimi: Eğer sınıf içerisinde dinamik olarak ayrılmış bellek kullanılıyorsa, shallow copy yerine deep copy yapmak gerekebilir.
- Kaynak Yönetimi: Dosya tanıtıcıları, ağ bağlantıları veya diğer sistem kaynakları gibi nesnelerin doğru bir şekilde kopyalanması gerektiğinde.

---

### Sonuç

Copy constructor, bir nesnenin kopyalanma şeklini kontrol etmenin kritik bir yoludur. Özellikle performans ve kaynak yönetimi açısından önemli olan bu özellik, C++ dilinde sıkça kullanılan temel bir yapıdır.

---
