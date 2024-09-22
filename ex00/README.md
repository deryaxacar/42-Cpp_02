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
        
        int getRawBits(void) const;  // Nesnenin ham sabit nokta değerini döndürür. (getter)
        void setRawBits(int const raw);  // Nesnenin sabit nokta değerini ayarlar. (setter)
};

```

Bu sınıf Ortodoks Kanonik Form'daki dört temel fonksiyonu içerir: Varsayılan yapıcı, yıkıcı, kopya yapıcı ve kopya atama operatörü. Yorum satırları bu fonksiyonların ne yaptığını açıklamak için eklenmiştir.

---
