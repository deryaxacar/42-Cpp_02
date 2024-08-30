<div align="center">
  <h1>C++ Module 02</h1> <img src="https://cdn-icons-png.flaticon.com/512/6132/6132222.png" alt="C++ Logo" width="65"></br></br>
</div>
<p align="center">Bu proje, C++ dilinde temel programlama becerilerini geliştirmek için hazırlanmıştır.</p>

---

## İçindekiler

- [#](#)

 
---

<h2 align="center">Sabit Noktalı Sayılar (Fixed Point Numbers)</h2> 

**Sabit Noktalı Sayılar (Fixed Point Numbers)**, gerçek sayıların bilgisayar ortamında temsil edilme yöntemlerinden biridir. Bu yöntemde, bir sayının kesirli ve tam sayı kısımları belirli bir noktada sabitlenir. Kayan noktalı sayılarda (floating-point numbers) ondalık nokta "yüzerken", sabit noktalı sayılarda bu nokta belirli bir konumda sabit kalır. Bu yöntem, performans, doğruluk ve aralık arasında bir denge sunar.

Sabit noktalı aritmetik, performans ve kaynak verimliliğinin kritik olduğu gömülü sistemler, dijital sinyal işleme (DSP) ve gerçek zamanlı uygulamalarda yaygın olarak kullanılır.

---

<h2 align="center">Sabit Noktalı Sayıların Avantajları ve Dezavantajları</h2> 


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
