<br />
<p align="center">
  <a href="https://raw.githubusercontent.com/othneildrew/Best-README-Template/master/images/logo.png">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/1200px-42_Logo.svg.png" alt="Logo" width="250" height="250">
  </a>

  <h3 align="center">42-Libft</h3>

  <p align="center">
    Project libft of 42 school
    <br />
    <br />
  </p>
</p>

# :pushpin: Index

* [List of Functions](#bookmark_tabs-List-of-Fucntions)
* [Technologies](#computer-Technologies)
* [How to Run](#construction_worker-How-to-Run)
* [Find a Bug? Or somenthing need to change?](#bug-Issues)

# :sparkles: What is Libft?

Libft is an individual project at 42 that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.

---

# :bookmark_tabs: List of Functions

## Functions from `<ctype.h>`

- [x] [`ft_isalpha`](ft_isalpha.c)	- checks for an alphabetic character.
- [x] [`ft_isdigit`](ft_isdigit.c)	- check for a digit (0 through 9).
- [x] [`ft_isalnum`](ft_isalnum.c)	- checks for an alphanumeric character.
- [x] [`ft_isascii`](ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [x] [`ft_isprint`](ft_isprint.c)	- checks for any printable character.
- [x] [`ft_toupper`](ft_toupper.c)	- convert char to uppercase.
- [x] [`ft_tolower`](ft_tolower.c)	- convert char to lowercase.

## Functions from `<string.h>`

- [x] [`ft_strlen`](ft_strlen.c)	- calculate the length of a string.
- [x] [`ft_memset`](ft_memset.c)	- fill memory with a constant byte.
- [x] [`ft_bzero`](ft_bzero.c)	- zero a byte string.
- [x] [`ft_memcpy`](ft_memcpy.c)	- copy memory area.
- [x] [`ft_memmove`](ft_memmove.c)	- copy memory area.
- [x] [`ft_strlcpy`](ft_strlcpy.c)	- copy string to a specific size.
- [x] [`ft_strlcat`](ft_strlcat.c)	- concatenate a string to a specific size.
- [x] [`ft_strchr`](ft_strchr.c)	- locate character in a string.
- [x] [`ft_strrchr`](ft_strrchr.c)	- locate character in a string.
- [x] [`ft_strncmp`](ft_strncmp.c)	- compare two strings.
- [x] [`ft_memchr`](ft_memchr.c)	- scan memory for a character.
- [x] [`ft_memcmp`](ft_memcmp.c)	- compare memory areas.
- [x] [`ft_strnstr`](ft_strnstr.c)	- locate a substring in a string.
- [x] [`ft_strdup`](ft_strdup.c)	- creates a duplicate for the string passed as a parameter.

## Functions from `<stdlib.h>`
- [x] [`ft_atoi`](ft_atoi.c)	- convert a string to an integer.
- [x] [`ft_calloc`](ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

## Non-standard functions
- [x] [`ft_substr`](ft_substr.c)	- returns a substring from a string.
- [x] [`ft_strjoin`](ft_strjoin.c)	- concatenates two strings.
- [x] [`ft_strtrim`](ft_strtrim.c)	- trims the beginning and end of a string with a specific set of chars.
- [x] [`ft_split`](ft_split.c)	- splits a string using a char as parameter.
- [x] [`ft_itoa`](ft_itoa.c)	- converts a number into a string.
- [x] [`ft_strmapi`](ft_strmapi.c)	- applies a function to each character of a string.
- [x] [`ft_striteri`](ft_striteri.c)	- applies a function to each character of a string.
- [x] [`ft_putchar_fd`](ft_putchar_fd.c)	- output a char to a file descriptor.
- [x] [`ft_putstr_fd`](ft_putstr_fd.c)	- output a string to a file descriptor.
- [x] [`ft_putendl_fd`](ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [x] [`ft_putnbr_fd`](ft_putnbr_fd.c)	- output a number to a file descriptor.

## Linked list functions

- [x] [`ft_lstnew`](ft_lstnew.c)	- creates a new list element.
- [x] [`ft_lstadd_front`](ft_lstadd_front.c)	- adds an element at the beginning of a list.
- [x] [`ft_lstsize`](ft_lstsize.c)	- counts the number of elements in a list.
- [x] [`ft_lstlast`](ft_lstlast.c)	- returns the last element of the list.
- [x] [`ft_lstadd_back`](ft_lstadd_back.c)	- adds an element at the end of a list.
- [x] [`ft_lstclear`](ft_lstclear.c)	- deletes and free list.
- [x] [`ft_lstiter`](ft_lstiter.c)	- applies a function to each element of a list.
- [x] [`ft_lstmap`](ft_lstmap.c)	- applies a function to each element of a list.

---

# :computer: Technologies

This Project was made with:

* [C](https://devdocs.io/)
* [Makefile](https://www.gnu.org/software/make/manual/make.html)
* [Shell](https://unixguide.readthedocs.io/en/latest/unixcheatsheet/)
* [gcc](https://terminaldeinformacao.com/2015/10/08/como-instalar-e-configurar-o-gcc-no-windows-mingw/)

# :construction_worker: How to Run
```bash
# *************COMMANDS************ #
# run - run compile all the libtest with the your libft and run the all tests
$ make all
# clean - remove the .o and .c files 
$ make clean
# fclean - remove the .o and .c files and the .a
$ make fclean
# re - remove all files and remake all
$ make re

# after run one time the the comand all 
# you can use compile others files .c using this lib 
# and using the function of then.
$ gcc main.c -L . -lft

```


# :bug: Issues

Please feel free **to create a new issue** with its title and description on the issues page of the [Libft](https://github.com/emretemirdev/libft/issues) Repository. If you have already found the solution to the problem, **I would love to review your pull request**!




# 42 İstanbul Libft Proje Notları

## Fonksiyonların Kodları Ve Detaylı İşlevleri

### Karakter işlemleri

- `ft_isalpha` - Bir karakterin alfabetik olup olmadığını kontrol eder.

```c
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

#include <stdio.h>
int main()
{
	int c = 'a';
	printf("%d\n", ft_isalpha(c));
}
```

> Bu kod, "libft.h" başlık dosyasını içe aktarır ve ft_isalpha fonksiyonunu tanımlar. ft_isalpha fonksiyonu, verilen karakterin bir harf olup olmadığını belirler.

Daha sonra, "stdio.h" başlık dosyasını içe aktaran ve main fonksiyonunu tanımlayan bir kaynak dosyası vardır. Bu dosyada, c değişkenine 'a' karakteri atanır ve ft_isalpha fonksiyonu ile bu karakterin bir harf olup olmadığı kontrol edilir. Sonuç olarak, 1 yazdırılır, çünkü 'a' bir harftir.
> 
- `ft_isdigit` - Bir karakterin sayı olup olmadığını kontrol eder (0 ile 9 arasında).

```c
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

#include <stdio.h>
int main()
{
int c = 'a';
printf("%d\n", ft_isdigit(c));
}
```

> Bu kod, "libft.h" başlık dosyasını içe aktarır ve ft_isdigit fonksiyonunu tanımlar. ft_isdigit fonksiyonu, verilen karakterin bir sayı olup olmadığını belirler.

Daha sonra, "stdio.h" başlık dosyasını içe aktaran ve main fonksiyonunu tanımlayan bir kaynak dosyası vardır. Bu dosyada, c değişkenine 'a' karakteri atanır ve ft_isdigit fonksiyonu ile bu karakterin bir sayı olup olmadığı kontrol edilir. Sonuç olarak, 0 yazdırılır, çünkü 'a' bir sayı değildir.
> 
- `ft_isalnum` - Bir karakterin alfasayısal (alfabetik veya sayısal) olup olmadığını kontrol eder.

```c
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

#include <stdio.h>
int main()
{
	int c = '2';
	int a = ft_isalnum(c);
	printf("%d\n",a);
}
```

> Bu kod, "libft.h" başlık dosyasını içe aktarır ve ft_isalnum fonksiyonunu tanımlar. ft_isalnum fonksiyonu, verilen karakterin bir harf veya sayı olup olmadığını belirler.

ft_isalnum fonksiyonu, ft_isalpha ve ft_isdigit fonksiyonlarını kullanarak çalışır. ft_isalpha fonksiyonu, verilen karakterin bir harf olup olmadığını belirler. ft_isdigit fonksiyonu ise verilen karakterin bir sayı olup olmadığını belirler. Bu iki fonksiyonun sonuçları "||" operatörü ile birleştirilir ve ft_isalnum fonksiyonunun sonucu olarak döndürülür.

Daha sonra, "stdio.h" başlık dosyasını içe aktaran ve main fonksiyonunu tanımlayan bir kaynak dosyası vardır. Bu dosyada, c değişkenine '2' karakteri atanır ve ft_isalnum fonksiyonu ile bu karakterin bir harf veya sayı olup olmadığı kontrol edilir. Sonuç olarak, 1 yazdırılır, çünkü '2' bir sayıdır ve ft_isalnum fonksiyonu tarafından algılanır.
> 
- `ft_isascii` - Bir karakterin ASCII karakter kümesine uyup uymadığını kontrol eder.

```c
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

#include <stdio.h>
int main()
{
	int a = 123322;
	printf("%d\n",ft_isascii(a));
}
```

> Bu kod, "libft.h" başlık dosyasını içe aktarır ve ft_isascii fonksiyonunu tanımlar. ft_isascii fonksiyonu, verilen karakterin ASCII karakter setinde olup olmadığını belirler.

ft_isascii fonksiyonu, verilen karakterin 0 ile 127 arasında bir değer olup olmadığını kontrol eder. Eğer öyleyse, 1 değerini döndürür. Aksi takdirde, 0 değerini döndürür.

Daha sonra, "stdio.h" başlık dosyasını içe aktaran ve main fonksiyonunu tanımlayan bir kaynak dosyası vardır. Bu dosyada, a değişkenine 123322 değeri atanır ve ft_isascii fonksiyonu ile bu değerin ASCII karakter setinde olup olmadığı kontrol edilir. Sonuç olarak, 0 yazdırılır, çünkü 123322 sayısı ASCII karakter setinde yer almaz.
> 
- `ft_isprint` - Bir karakterin yazdırılabilir olup olmadığını kontrol eder.

```c
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

#include <stdio.h>
int main()
{
	int a = 11;
	printf("%d\n",ft_isprint(a));
}
```

> Bu kod, "libft.h" başlık dosyasını içe aktarır ve ft_isprint fonksiyonunu tanımlar. ft_isprint fonksiyonu, verilen karakterin yazdırılabilir bir karakter olup olmadığını belirler.

ft_isprint fonksiyonu, verilen karakterin 32 ile 126 arasında bir değer olup olmadığını kontrol eder. Bu aralık, ASCII karakter setindeki yazdırılabilir karakterlerin aralığıdır. Eğer öyleyse, 1 değerini döndürür. Aksi takdirde, 0 değerini döndürür.

Daha sonra, "stdio.h" başlık dosyasını içe aktaran ve main fonksiyonunu tanımlayan bir kaynak dosyası vardır. Bu dosyada, a değişkenine 11 değeri atanır ve ft_isprint fonksiyonu ile bu değerin yazdırılabilir bir karakter olup olmadığı kontrol edilir. Sonuç olarak, 0 yazdırılır, çünkü 11 sayısı yazdırılabilir bir karakter değildir.
> 
- `ft_toupper` - Bir karakteri büyük harfe dönüştürür.

```c
#include "libft.h"
#include <stdio.h>

int	ft_toupper(int b)
{
	if (b >= 'a' && b <= 'z')
	{
		b -= 32;
	}
	return (b);
}

int main()
{
	int a = 'b';
	printf("%c\n", ft_toupper(a));
	return (0);
}
```

> Bu kod, "libft.h" başlık dosyasını içe aktarır ve ft_toupper fonksiyonunu tanımlar. ft_toupper fonksiyonu, verilen karakterin küçük harf olup olmadığını kontrol eder ve küçük harf ise büyük harfe dönüştürür.

Daha sonra, "stdio.h" başlık dosyasını içe aktaran ve main fonksiyonunu tanımlayan bir kaynak dosyası vardır. Bu dosyada, a değişkenine 'b' karakteri atanır ve ft_toupper fonksiyonu ile bu karakterin büyük harfe dönüştürülmesi sağlanır.
> 
- `ft_tolower` - Bir karakteri küçük harfe dönüştürür.

```c
#include "libft.h"
#include <stdio.h>
int	ft_tolower(int b)
{
	if (b >= 'A' && b <= 'Z')
	{
		b += 32;
	}
	return (b);
}

int main()
{
	int b = 'A';
	printf("%c\n", ft_tolower(b));
}
```

> Bu kod, "libft.h" başlık dosyasını içe aktarır ve ft_tolower fonksiyonunu tanımlar. ft_tolower fonksiyonu, verilen karakterin büyük harf olup olmadığını kontrol eder ve büyük harf ise küçük harfe dönüştürür.

Daha sonra, "stdio.h" başlık dosyasını içe aktaran ve main fonksiyonunu tanımlayan bir kaynak dosyası vardır. Bu dosyada, b değişkenine 'A' karakteri atanır ve ft_tolower fonksiyonu ile bu karakterin küçük harfe dönüştürülmesi sağlanır.

Son olarak, printf fonksiyonu kullanılarak küçük harfe dönüştürülmüş karakter yazdırılır. "%c" format belirteci kullanılarak yazdırılan değer karakter olarak algılanır ve ekrana 'a' yazdırılır.
> 

### String İşlevleri

- `ft_strlen` - Bir dizenin uzunluğunu hesaplar.

```c
#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

		i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}
```

> `ft_strlen` işlevi, bir C dizesinin uzunluğunu hesaplayan bir işlevdir. Parametre olarak bir `const char *` işaretçisi alır, bu da bir karakter dizisinin başlangıcını gösterir.

İşlev içindeki kod, bir döngü kullanarak dizenin karakterlerini kontrol eder. Döngü, `c[i]` ifadesiyle belirtilen karakterin nul (`'\\0'`) karakterine kadar devam eder. Bu nul karakteri, bir C dizesinin sonunu belirtir.

Her döngü adımında, `i` değişkeni bir artırılarak bir sonraki karaktere geçilir. Bu sayede, döngü sonlandığında `i` değişkeni, dizenin uzunluğunu temsil eder.

Son olarak, işlev `i` değişkenini döndürerek dizenin uzunluğunu geri verir.

`size_t`, bellek bloklarının veya dizelerin boyutlarını temsil etmek için sıklıkla kullanılan bir unsigned integer türüdür. Bu tür, en az 16 bitlik bir tamsayı boyutunu temsil eder ve platforma bağlı olarak genellikle 32 veya 64 bitlik bir tamsayı boyutuna sahiptir. `size_t`, bellek yönetimi ve dizi indeksleme gibi durumlarda taşma hatalarını önlemek için tercih edilir.
> 
- `ft_memset` - Belleği belirli bir sabit byte ile doldurur.

```c
void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
#include <stdio.h>
 
 int main()
 {
	char *str = malloc(sizeof(char)*10);
	ft_memset(str,'A', 4);
	printf("%s",str);
 }
```

> Parametreler:

b: Değerlerin atanacağı bellek bloğunun başlangıç adresini temsil eden
 bir void pointer.
c: Atanacak değeri temsil eden bir tamsayı.
n: Atanacak değerin uzunluğunu temsil eden bir size_t değeri.
İşlevin geri dönüş değeri void * türündedir, yani bir işaretçi döndürür. 
Bu, işlevin bellek bloğunun başlangıç adresini geri döndürdüğü anlamına gelir.

İşlev içindeki kod, bir döngü kullanarak bellek bloğunu doldurur. 
İlk olarak, i adlı bir sayaç değişkeni oluşturulur ve 0 olarak başlatılır. 
Ardından, **str adlı bir char pointer'ı, void pointer b'yi 
char pointer'a dönüştürerek** başlangıç adresine atar.

Döngü, i değişkeni n değerinden küçük olduğu sürece devam eder. 
Her döngü adımında, str[i] ifadesi kullanılarak bellek bloğunun 
ilgili elemanına (unsigned char)c değeri atanır. (unsigned char) ifadesi,
 c değişkeninin değerini unsigned char türüne dönüştürmek için kullanılır. 
Bu, negatif sayılar için olası genişletmeleri önlemek için yapılır.

Döngü tamamlandığında, bellek bloğu belirtilen değerle doldurulur. 
Son olarak, işlev, orijinal bellek bloğunun başlangıç adresini
(b) döndürerek işlevi tamamlar.

Bu işlev genellikle bellek bloklarını sıfırlamak veya belirli
bir değerle doldurmak için kullanılır. Örneğin, bellek bloğunu 
sıfırlamak için **ft_memset**(ptr, 0, size) şeklinde kullanabilirsiniz.

Bu kodda, malloc fonksiyonu kullanarak 10 adet char veri tipi için bellekte yer ayırdık. Daha sonra bu bellek bloğunu kullanarak bir dizi oluşturduk. sizeof(char) ifadesi, char veri tipinin bellekte kapladığı byte sayısını verir. Bizim durumumuzda, her bir eleman 1 byte olduğundan sizeof(char) ifadesi 1'e eşittir. Bu nedenle, sizeof(char) * 10 ifadesi ile 10 byte'lık bir bellek bloğu ayırmış olduk.
> 
- `ft_bzero` - Bir byte dizisini sıfırlar.

```c
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

#include <stdio.h>
int main()
{
	char *str = malloc(10);
	str = ft_memset(str, 'A', 5);
	printf("%s\n", str);
	size_t n = 10;
	ft_bzero(str,n);
	printf("%s\n", str);
}
```

> Bu örnek, hafızada belirli bir bölgeyi sıfırlamak için kullanılan ft_bzero fonksiyonunu içerir. ft_bzero fonksiyonu, **ft_memset** fonksiyonunu kullanarak, verilen bellek bölgesini sıfırlar.

İlk olarak, "**libft.h**" kütüphanesi dahil edilir. Bu kütüphane, birçok farklı C fonksiyonu içerir. Daha sonra, ft_bzero fonksiyonu tanımlanır ve sıfırlama işlemi için **ft_memset** fonksiyonu kullanılır.

Bu kodun ana fonksiyonunda, bir karakter dizisi (string) için 10 bayt boyutunda bellek ayrılır. Daha sonra, **ft_memset** fonksiyonu kullanılarak, bu bellek bölgesi ilk 5 baytı 'A' karakteriyle doldurulur ve ekrana yazdırılır. Ardından, **ft_bzero** fonksiyonu kullanılarak, bellek bölgesi tamamen sıfırlanır ve tekrar ekrana yazdırılır.
> 
- `ft_memcpy` - Bellek alanını kopyalar.

```c
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	char	*src2;
	size_t	i;

	i = 0;
	str = (char *)dst;
	src2 = (char *)src;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		str[i] = src2[i];
		i++;
	}
	return (dst);
}

#include<stdio.h>
int main()
{
	char src[] = "EmreKing";
	char dst[15];
	ft_memcpy(dst,src,14); 
	printf("%s", dst); 
}
```

- `ft_memmove` - Bellek alanını kopyalar.

```c
#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	char	*d;
	char	*s;

	d = (char *)destination;
	s = (char *)source;
	if (destination == source)
	{
		return (destination);
	}
	if (s < d)
	{
		while (num--)
			*(d + num) = *(s + num);
		return (destination);
	}
	while (num--)
		*d++ = *s++;
	return (destination);
}

#include <stdio.h>
int main()
{
	char src[] = "Emre King";
	char dst[15];
	ft_memmove(dst,src,2); 
	printf("%s", dst); 
}
```

> Kod, "libft.h" kütüphanesini dahil ederek başlıyor. Bu kütüphane, birçok farklı C fonksiyonunu içerir. Daha sonra, ft_memmove fonksiyonu tanımlanır. Bu fonksiyon, bellekteki bir bölgeyi başka bir bölgeye kopyalamak için kullanılır.

Fonksiyonun ilk parametresi, kopyalanacak verinin hedefi olan bellek bölgesini temsil eder. İkinci parametresi, kopyalanacak verinin kaynağı olan bellek bölgesini temsil eder. Üçüncü parametresi ise kopyalanacak verinin boyutunu temsil eder.

Fonksiyon içinde, önce hedef ve kaynak bellek bölgeleri için iki adet karakter dizisi tanımlanır. Daha sonra, bellek bölgelerinin boş olup olmadığı kontrol edilir. Eğer bellek bölgeleri aynıysa, hedef bellek bölgesi döndürülür. Eğer kaynak bellek bölgesi hedef bellek bölgesinden önce başlıyorsa, bellek bölgesindeki veriler ters sırayla kopyalanır.

Daha sonra, while döngüsü kullanılarak kaynak bellek bölgesindeki veriler hedef bellek bölgesine kopyalanır. Bu işlem sırasında, kaynak ve hedef bellek bölgelerinin adresleri karşılaştırılır ve kaynak bellek bölgesi hedef bellek bölgesinden önce başlıyorsa, veriler ters sırayla kopyalanır.

Son olarak, hedef bellek bölgesi döndürülür ve ft_memmove fonksiyonu tamamlanır.

Ana fonksiyonda ise, bir karakter dizisi (string) tanımlanır ve src adı altında saklanır. Daha sonra, boş bir hedef karakter dizisi olan dst tanımlanır. ft_memmove fonksiyonu kullanılarak, src karakter dizisi dst karakter dizisine kopyalanır. Son olarak, kopyalanan karakter dizisi ekrana yazdırılır
> 
- `ft_strlcpy` - Diziyi belirli bir boyuta kopyalar.

```c
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

#include <stdio.h>
int main()
{
	char src[] = "Emre";
	char dst[12];
	size_t destsize = 14;
	ft_strlcpy(dst,src,6);
	printf("%s",dst);
}
```

> Kod, "libft.h" kütüphanesini dahil ederek başlıyor. Bu kütüphane, birçok farklı C fonksiyonunu içerir. Daha sonra, ft_strlcpy fonksiyonu tanımlanır. Bu fonksiyon, bir karakter dizisini başka bir karakter dizisine kopyalamak için kullanılır.

Fonksiyonun ilk parametresi, kopyalanacak verinin hedefi olan bellek bölgesini temsil eder. İkinci parametresi, kopyalanacak verinin kaynağı olan bellek bölgesini temsil eder. Üçüncü parametresi ise kopyalanacak verinin boyutunu temsil eder.

Fonksiyon içinde, önce kaynak bellek bölgesinin uzunluğu hesaplanır ve srcsize değişkenine atanır. Daha sonra, i değişkeni sıfırlanır ve dstsize parametresi kontrol edilir. Eğer dstsize parametresi sıfıra eşitse, fonksiyon hiçbir işlem yapmadan srcsize değişkenini döndürür.

Eğer dstsize parametresi sıfırdan farklı ise, while döngüsü kullanılarak kaynak bellek bölgesindeki veriler hedef bellek bölgesine kopyalanır. Bu işlem sırasında, kaynak ve hedef bellek bölgelerinin adresleri karşılaştırılır ve kaynak bellek bölgesi hedef bellek bölgesinden önce başlıyorsa, veriler ters sırayla kopyalanır.

Son olarak, hedef bellek bölgesi döndürülür ve ft_strlcpy fonksiyonu tamamlanır.

Ana fonksiyonda ise, bir karakter dizisi (string) tanımlanır ve src adı altında saklanır. Daha sonra, boş bir hedef karakter dizisi olan dst tanımlanır. ft_strlcpy fonksiyonu kullanılarak, src karakter dizisi dst karakter dizisine kopyalanır. dstsize parametresi, hedef karakter dizisinin boyutunu belirler ve bu örnekte 6 olarak ayarlanmıştır.
> 
- `ft_strlcat` - Diziyi belirli bir boyuta birleştirir.

```c

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;
	size_t	sizedst;
	size_t	sizesrc;

	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	a = ft_strlen(dst);
	if (dstsize <= sizedst)
		return (dstsize + sizesrc);
	i = 0;
	while (src[i] != '\0' && a < dstsize - 1)
	{
		dst[a] = src[i];
		a++;
		i++;
	}
	dst[a] = '\0';
	return (sizedst + sizesrc);
}

#include<stdio.h>
int main()
{
	char source[] = "Emre Temir";
	char dest[12] ="Kral";
	size_t a = 7;
	ft_strlcat(dest,source,a);
	printf("%s", dest); 
}
```

> Kod, "libft.h" kütüphanesini dahil ederek başlıyor. Bu kütüphane, birçok farklı C fonksiyonunu içerir. Daha sonra, ft_strlcat fonksiyonu tanımlanır. Bu fonksiyon, bir karakter dizisine başka bir karakter dizisini eklemek için kullanılır.

Fonksiyonun ilk parametresi, hedef karakter dizisini temsil eder. İkinci parametresi, eklenen karakter dizisini temsil eder. Üçüncü parametresi ise hedef karakter dizisinin boyutunu temsil eder.

Fonksiyon içinde, önce hedef karakter dizisinin uzunluğu hesaplanır ve sizedst değişkenine atanır. Daha sonra, eklenen karakter dizisinin uzunluğu hesaplanır ve sizesrc değişkenine atanır. Ayrıca, a değişkeni sizedst değişkenine eşitlenir.

Eğer dstsize parametresi sizedst değişkeninden küçük veya eşitse, fonksiyon dstsize + sizesrc değerini döndürür. Bu durumda, hedef karakter dizisinin boyutu yeterli değildir ve eklenen karakter dizisi tamamen eklenemez.

Eğer dstsize parametresi sizedst değişkeninden büyükse, while döngüsü kullanılarak eklenen karakter dizisi hedef karakter dizisine eklenir. Bu işlem sırasında, a değişkeni kullanılarak hedef karakter dizisinin sonuna kadar gezilir ve eklenen karakter dizisi hedef karakter dizisine eklenir. Ayrıca, son karakter olarak '\0' karakteri eklenir.

Son olarak, sizedst + sizesrc değeri döndürülür ve ft_strlcat fonksiyonu tamamlanır.

Ana fonksiyonda ise, bir karakter dizisi (string) tanımlanır ve source adı altında saklanır. Daha sonra, boş bir hedef karakter dizisi olan dest tanımlanır. Ayrıca, hedef karakter dizisinin boyutu 7 olarak ayarlanır. ft_strlcat fonksiyonu kullanılarak, source karakter dizisi dest karakter dizisine eklenir ve sonuç ekrana yazdırılır.
> 
- `ft_strchr` - Bir karakteri bir dizide bulur.

```c
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
		if (*str++ == '\0')
			return (NULL);
	return (str);
}

#include <stdio.h>
int main()
{
	char str[] = "EmreTemir";
	int c = 'm';
	printf("%s",ft_strchr(str,c));
}
```

> Kod, "libft.h" kütüphanesini dahil ederek başlıyor. Bu kütüphane, birçok farklı C fonksiyonunu içerir. Daha sonra, ft_strchr fonksiyonu tanımlanır. Bu fonksiyon, bir karakter dizisinde belirli bir karakterin konumunu bulmak için kullanılır.

Fonksiyonun ilk parametresi, aranacak karakter dizisini temsil eder. İkinci parametresi, aranacak karakteri temsil eder.

Fonksiyon içinde, önce s parametresi str değişkenine atanır. Daha sonra, while döngüsü kullanılarak karakter dizisi taranır ve aranan karakter bulunana kadar devam edilir. Eğer aranan karakter bulunamazsa, NULL değeri döndürülür.

Eğer aranan karakter bulunursa, karakterin adresi döndürülür. Bu adres, karakter dizisinin başlangıcından itibaren kaçıncı konumda olduğunu belirtir.

Ana fonksiyonda ise, bir karakter dizisi (string) tanımlanır ve str adı altında saklanır. Daha sonra, aranacak karakter 'm' olarak belirlenir ve c adı altında saklanır.

ft_strchr fonksiyonu kullanılarak, str karakter dizisinde c karakteri aranır. Eğer c karakteri bulunamazsa, NULL değeri döndürülür. Eğer c karakteri bulunursa, karakterin adresi döndürülür ve sonuç ekrana yazdırılır.

Bu örnekte, 'm' karakteri "EmreTemir" karakter dizisinde bulunur ve sonuç olarak "mreTemir" yazdırılır.
> 
- `ft_strrchr` - Bir karakteri bir dizide sondan bulur.

```c
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
#include <stdio.h>
int main()
{
	char str[] = "HelloWorldHll";
	int c = 'W';
	printf("%s",ft_strrchr(str,c));
}
```

> Kod, "libft.h" kütüphanesini dahil ederek başlıyor. Bu kütüphane, birçok farklı C fonksiyonunu içerir. Daha sonra, ft_strrchr fonksiyonu tanımlanır. Bu fonksiyon, bir karakter dizisinde belirli bir karakterin son bulunduğu konumu bulmak için kullanılır.

Fonksiyonun ilk parametresi, aranacak karakter dizisini temsil eder. İkinci parametresi, aranacak karakteri temsil eder.

Fonksiyon içinde, önce i değişkeni 0 olarak atanır ve while döngüsü kullanılarak karakter dizisinin uzunluğu hesaplanır. Daha sonra, i değişkeni kullanılarak karakter dizisi sondan başa doğru taranır ve aranan karakter bulunana kadar devam edilir. Eğer aranan karakter bulunamazsa, NULL değeri döndürülür.

Eğer aranan karakter bulunursa, karakterin adresi döndürülür. Bu adres, karakter dizisinin başlangıcından itibaren kaçıncı konumda olduğunu belirtir.

Ana fonksiyonda ise, bir karakter dizisi (string) tanımlanır ve str adı altında saklanır. Daha sonra, aranacak karakter 'W' olarak belirlenir ve c adı altında saklanır.

ft_strrchr fonksiyonu kullanılarak, str karakter dizisinde c karakteri aranır. Eğer c karakteri bulunamazsa, NULL değeri döndürülür. Eğer c karakteri bulunursa, karakterin adresi döndürülür ve sonuç ekrana yazdırılır.

Bu örnekte, 'W' karakteri "HelloWorldHll" karakter dizisinde bulunur ve sonuç olarak "WorldHll" yazdırılır.
> 
- `ft_strncmp` - İki diziyi karşılaştırır ve farkını yazdırır.

```c
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	char a[] = "Emrea";
	char b[] = "Emre";
	size_t ab = 5;
	printf("%d", ft_strncmp(a,b,ab));
	
}
```

> Kod, "libft.h" kütüphanesini dahil ederek başlıyor. Bu kütüphane, birçok farklı C fonksiyonunu içerir. Daha sonra, ft_strncmp fonksiyonu tanımlanır. Bu fonksiyon, iki karakter dizisini belirli bir uzunlukta karşılaştırmak için kullanılır.

Fonksiyonun ilk parametresi, karşılaştırılacak ilk karakter dizisini temsil eder. İkinci parametresi, karşılaştırılacak ikinci karakter dizisini temsil eder. Üçüncü parametresi ise karşılaştırma yapılacak karakter sayısını belirtir.

Fonksiyon içinde, önce i değişkeni 0 olarak atanır ve while döngüsü kullanılarak s1 ve s2 karakter dizileri karşılaştırılır. Eğer i değişkeni size değişkenine eşit veya daha büyükse, fonksiyon 0 değerini döndürür.

Eğer s1 ve s2 karakter dizileri farklıysa, farklı olan karakterlerin ASCII değerleri farkı hesaplanarak döndürülür. Eğer s1 ve s2 karakter dizileri aynıysa, fonksiyon 0 değerini döndürür.

Ana fonksiyonda ise, iki karakter dizisi (string) tanımlanır ve a ile b adı altında saklanır. Daha sonra, karşılaştırma yapılacak karakter sayısı 5 olarak belirlenir ve ab adı altında saklanır.

ft_strncmp fonksiyonu kullanılarak, a ve b karakter dizileri karşılaştırılır. Sonuç olarak, a karakter dizisi "Emrea" ve b karakter dizisi "Emre" olduğu için sonuç 97 olacaktır. Bu sonuç ekrana yazdırılır.
> 
- `ft_memchr` - Bellekte bir karakter arar.

```c

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)str + i);
			i++;
	}
	return (NULL);
}

#include <stdio.h>
int main()
{
	char str[] = "Hello World!";
	int c = 'o';
	void *result = ft_memchr(str,c,sizeof(str));
	printf("%s",result);
}
```

> Kod, "libft.h" kütüphanesini dahil ederek başlıyor. Bu kütüphane, birçok farklı C fonksiyonunu içerir. Daha sonra, ft_memchr fonksiyonu tanımlanır. Bu fonksiyon, bir bellek bölgesinde belirli bir karakterin ilk bulunduğu konumu bulmak için kullanılır.

Fonksiyonun ilk parametresi, aranacak bellek bölgesini temsil eder. İkinci parametresi, aranacak karakteri temsil eder. Üçüncü parametresi ise arama yapılacak bellek bölgesinin boyutunu belirtir.

Fonksiyon içinde, önce i değişkeni 0 olarak atanır ve while döngüsü kullanılarak bellek bölgesi taranır. Eğer aranan karakter bulunursa, karakterin adresi döndürülür. Eğer aranan karakter bulunamazsa, NULL değeri döndürülür.

Ana fonksiyonda ise, bir karakter dizisi (string) tanımlanır ve str adı altında saklanır. Daha sonra, aranacak karakter 'o' olarak belirlenir ve c adı altında saklanır.

ft_memchr fonksiyonu kullanılarak, str karakter dizisinde c karakteri aranır. Eğer c karakteri bulunursa, karakterin adresi döndürülür ve sonuç ekrana yazdırılır. Eğer c karakteri bulunamazsa, NULL değeri döndürülür ve ekrana yazdırılmaz.

Bu örnekte, 'o' karakteri "Hello World!" karakter dizisinde bulunur ve sonuç olarak "orld!" yazdırılır. Ancak sonucun tamamını yazdırmak yerine sadece adresini yazdırdığımız için, bu adresin işaret ettiği bellek bölgesindeki verileri yazdırmak mümkün değildir.
> 
- `ft_memcmp` - Bellek alanlarını karşılaştırır.

```c
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*p1;

	p = (unsigned char *)s1;
	p1 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((p[i] == p1[i]) && i < n - 1)
		i++;
	return (p[i] - p1[i]);
}
#include <stdio.h>
int main()
{
	char s1[] = "EmreTemir";
	char s2[] = "EmreTemira";
	size_t  b = 5;
	printf("%d",ft_memcmp(s1,s2,b));
}
```

> Kod, "libft.h" kütüphanesini dahil ederek başlıyor. Bu kütüphane, birçok farklı C fonksiyonunu içerir. Daha sonra, ft_memcmp fonksiyonu tanımlanır. Bu fonksiyon, iki bellek bölgesinin belirli bir uzunlukta karşılaştırılması için kullanılır.

Fonksiyonun ilk parametresi, karşılaştırılacak ilk bellek bölgesini temsil eder. İkinci parametresi, karşılaştırılacak ikinci bellek bölgesini temsil eder. Üçüncü parametresi ise karşılaştırma yapılacak bellek bölgesinin boyutunu belirtir.

Fonksiyon içinde, önce i değişkeni 0 olarak atanır ve if koşulu ile n değeri 0 ise fonksiyon 0 değerini döndürür. Ardından, while döngüsü kullanılarak bellek bölgeleri karşılaştırılır.

Eğer bellek bölgeleri aynıysa, i değişkeni artırılır ve döngü devam eder. Eğer bellek bölgeleri farklıysa, farklı olan karakterlerin ASCII değerleri farkı hesaplanarak döndürülür.

Ana fonksiyonda ise, iki karakter dizisi (string) tanımlanır ve s1 ile s2 adı altında saklanır. Daha sonra, karşılaştırma yapılacak bellek bölgesinin boyutu 5 olarak belirlenir ve b adı altında saklanır.

ft_memcmp fonksiyonu kullanılarak, s1 ve s2 bellek bölgeleri karşılaştırılır. Sonuç olarak, s1 karakter dizisi "EmreTemir" ve s2 karakter dizisi "EmreTemira" olduğu için sonucun 5 karakterlik kısmı karşılaştırılacaktır. Bu kısımda s1 ile s2 arasında farklılık olduğu için sonuç 0'dan farklı bir değer olacaktır ve sonuç olarak -1 yazdırılacaktır.
> 
- `ft_strnstr` - Bir dizide bir alt dizgeyi bulur.

```c
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == 0)
		return ((char *)big);
	n = ft_strlen(little);
	while (*big && n <= len)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}
#include <stdio.h>
int main()
{
	char big[] = "EMRETEMİR";
	char lt[] = "İ";
	size_t len = sizeof(lt);
	printf("%s",ft_strnstr(big,lt,len));
}
```

> Kod, "libft.h" kütüphanesini dahil ederek başlıyor. Bu kütüphane, birçok farklı C fonksiyonunu içerir. Daha sonra, ft_strnstr fonksiyonu tanımlanır. Bu fonksiyon, büyük bir karakter dizisi içinde belirli bir alt dizi (küçük bir karakter dizisi) aramak için kullanılır.

Fonksiyonun ilk parametresi, büyük karakter dizisini temsil eder. İkinci parametresi, aranacak küçük karakter dizisini temsil eder. Üçüncü parametresi ise arama yapılacak bellek bölgesinin boyutunu belirtir.

Fonksiyon içinde, önce n değişkeni küçük karakter dizisinin uzunluğuna atanır. Eğer küçük karakter dizisi boş ise, büyük karakter dizisi geri döndürülür. Ardından, while döngüsü kullanılarak büyük karakter dizisi taranır.

Eğer büyük karakter dizisi boş değilse ve küçük karakter dizisinin uzunluğu arama yapılacak bellek bölgesinin boyutundan küçük veya eşitse, döngü devam eder. Eğer büyük karakter dizisi ve küçük karakter dizisinin ilk karakterleri eşitse ve ft_strncmp fonksiyonu kullanılarak karşılaştırma yapıldığında her iki karakter dizisi de aynıysa, büyük karakter dizisinin başlangıç adresi geri döndürülür.

Ana fonksiyonda ise, iki karakter dizisi (string) tanımlanır ve big ile lt adı altında saklanır. Daha sonra, arama yapılacak bellek bölgesinin boyutu lt karakter dizisinin boyutu kadar belirlenir ve len adı altında saklanır.

ft_strnstr fonksiyonu kullanılarak, big karakter dizisinde lt karakter dizisi aranır. Sonuç olarak, big karakter dizisi "EMRETEMİR" ve lt karakter dizisi "İ" olduğu için sonuç NULL değerini döndürür.
> 
- `ft_strdup` - Parametre olarak verilen dizinin bir kopyasını oluşturur.

```c
char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(str);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (0);
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
#include<stdio.h>
int main()
{
	char str[] = "Emre";
	printf("%s", ft_strdup(str));
}
```

> Kod, ft_strdup fonksiyonunu tanımlar. Bu fonksiyon, bir karakter dizisinin kopyasını oluşturmak için kullanılır.

Fonksiyonun parametresi, kopyalanacak karakter dizisini temsil eder.

Fonksiyon içinde, önce len değişkenine kopyalanacak karakter dizisinin uzunluğu atanır. Daha sonra, s adında bir karakter dizisi tanımlanır ve bellekten len+1 byte boyutunda yer ayrılır. Eğer bellek ayrılamazsa, NULL değeri döndürülür.

While döngüsü kullanılarak, kopyalanacak karakter dizisi s karakter dizisine kopyalanır. Döngü her bir karakter için çalışır ve sonunda s karakter dizisinin sonuna null karakteri eklenir.

Daha sonra, s karakter dizisi geri döndürülür.

Ana fonksiyonda ise, "Emre" karakter dizisi tanımlanır ve str adı altında saklanır. Daha sonra, ft_strdup fonksiyonu kullanılarak str karakter dizisinin kopyası oluşturulur ve sonuç ekrana yazdırılır.

Bu örnekte, "Emre" karakter dizisinin kopyası oluşturulur ve sonuç olarak "Emre" yazdırılır.
> 

### Standart Olmayan İşlevler

- `ft_substr` - Bir karakter dizisinden belirli bir alt dizi (substring) çıkarmak için kullanılan bir fonksiyondur.

```c
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	len_str;

	len_str = ft_strlen(s);
	if (start >= len_str)
	{
		dst = (char *)malloc(sizeof(char));
		if (!dst)
			return (NULL);
		*dst = '\0';
	}
	else
	{	
		if ((len_str - start) < len)
			len = len_str - start;
		if (len_str >= len)
			dst = (char *)malloc(len + 1);
		else
			dst = (char *)malloc(len_str + 1);
		if (dst == NULL)
			return (NULL);
		ft_strlcpy(dst, s + start, len + 1);
	}
	return (dst);
}
#include <stdio.h>
int main()
{
	char s[] = "Emre Temir";
	printf("%s",ft_substr(s,2,3));
}
```

> Kod, ft_substr fonksiyonunu tanımlar. Bu fonksiyon, bir karakter dizisinin belirtilen pozisyondan başlayarak belirtilen uzunlukta bir alt dizisini oluşturmak için kullanılır.

Fonksiyonun ilk parametresi, oluşturulacak alt dizi için kullanılacak karakter dizisini temsil eder. İkinci parametresi, oluşturulacak alt dizi için başlangıç pozisyonunu temsil eder. Üçüncü parametresi ise oluşturulacak alt dizi için uzunluğu belirtir.

Fonksiyon içinde, len_str değişkenine s karakter dizisinin uzunluğu atanır. Eğer başlangıç pozisyonu len_str'den büyükse, dst adında bir karakter dizisi tanımlanır ve bellekten 1 byte boyutunda yer ayrılır. Eğer bellek ayrılamazsa, NULL değeri döndürülür. Aksi takdirde, belirtilen uzunluk, s karakter dizisinin uzunluğundan başlangıç pozisyonu çıkarılarak hesaplanır ve len değişkenine atanır.

Daha sonra, oluşturulacak alt dizi için gereken bellek boyutu hesaplanır ve dst adında bir karakter dizisi için bellekten yer ayrılır. Eğer bellek ayrılamazsa, NULL değeri döndürülür.

Son olarak, ft_strlcpy fonksiyonu kullanılarak oluşturulan alt dizi dst karakter dizisine kopyalanır ve dst karakter dizisi geri döndürülür.

Ana fonksiyonda ise, "Emre Temir" karakter dizisi tanımlanır ve s adı altında saklanır. Daha sonra, ft_substr fonksiyonu kullanılarak s karakter dizisinin 2. indeksinden başlayarak 3 karakterlik bir alt dizi oluşturulur ve sonuç olarak "re " yazdırılır.
> 
- `ft_strjoin` - İki diziyi birleştirir.

```c
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		i2;

	new = malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!new)
		return (NULL);
	i = 0;
	i2 = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[i2])
	{
		new[i] = s2[i2];
		i++;
		i2++;
	}
	new[i] = '\0';
	return (new);
}
#include<stdio.h>
int main()
{
	char s1[] = "Emre";
	char s2[] = "Temir";
	printf("%s",ft_strjoin(s1,s2));
}
```

> Kod, ft_strjoin fonksiyonunu tanımlar. Bu fonksiyon, iki karakter dizisini birleştirmek için kullanılır.

Fonksiyonun ilk parametresi, birleştirilecek ilk karakter dizisini temsil eder. İkinci parametresi ise birleştirilecek ikinci karakter dizisini temsil eder.

Fonksiyon içinde, new adında bir karakter dizisi tanımlanır ve bellekten s1 ve s2 karakter dizilerinin toplam uzunluğu kadar yer ayrılır. Eğer bellek ayrılamazsa, NULL değeri döndürülür.

Daha sonra, while döngüsü kullanılarak, s1 karakter dizisi new karakter dizisine kopyalanır. Döngü her bir karakter için çalışır ve sonunda s1 karakter dizisi tamamen kopyalanır.

Ardından, ikinci while döngüsü kullanılarak, s2 karakter dizisi new karakter dizisine kopyalanır. Döngü her bir karakter için çalışır ve sonunda s2 karakter dizisi tamamen kopyalanır.

Son olarak, new karakter dizisinin sonuna null karakteri eklenir ve new karakter dizisi geri döndürülür.

Ana fonksiyonda ise, "Emre" ve "Temir" karakter dizileri tanımlanır ve s1 ve s2 adı altında saklanır. Daha sonra, ft_strjoin fonksiyonu kullanılarak s1 ve s2 karakter dizileri birleştirilir ve sonuç ekrana yazdırılır. Bu örnekte, "EmreTemir" yazdırılır.
> 
- `ft_strtrim` - Bir dizinin başını ve sonunu belirli karakterlerle kırpar.

```c
#include "libft.h"

static int	ft_char_in_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, const char *set)
{
	char	*mystr;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	while (s1[start] && ft_char_in_set(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(set, s1[end - 1]))
		end--;
	mystr = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!mystr)
		return (NULL);
	i = 0;
	while (start < end)
		mystr[i++] = s1[start++];
	mystr[i] = '\0';
	return (mystr);
}

#include <stdio.h>
int main()
{
	char s1[] = "EmrE";
	char set[] = "E";
	printf("%s",ft_strtrim(s1,set));
}
```

> Kod, ft_strtrim fonksiyonunu tanımlar. Bu fonksiyon, bir karakter dizisinden belirtilen karakter kümesindeki karakterleri çıkarmak için kullanılır.

Fonksiyonun ilk parametresi, işlem yapılacak karakter dizisini temsil eder. İkinci parametresi ise çıkarılacak karakter kümesini temsil eder.

Fonksiyon içinde, ft_char_in_set adlı yardımcı bir fonksiyon kullanılır. Bu fonksiyon, belirtilen karakter kümesindeki bir karakterin olup olmadığını kontrol eder.

Daha sonra, while döngüsü kullanılarak, s1 karakter dizisinin başındaki ve sonundaki belirtilen karakter kümesindeki karakterler çıkarılır. Döngü her bir karakter için çalışır ve sonunda s1 karakter dizisi belirtilen karakter kümesindeki tüm karakterlerden arındırılır.

Son olarak, yeni oluşan karakter dizisi mystr adında bir değişkene atanır ve geri döndürülür.

Ana fonksiyonda ise, "EmrE" ve "E" karakter dizileri tanımlanır ve s1 ve set adı altında saklanır. Daha sonra, ft_strtrim fonksiyonu kullanılarak s1 karakter dizisinden set karakter kümesindeki tüm karakterler çıkarılır ve sonuç ekrana yazdırılır. Bu örnekte, "mr" yazdırılır.
> 
- `ft_split` - Bir diziyi belirli bir karaktere göre böler.

```c
#include "libft.h"

static int	ft_word_count(char const *str, char c)
{
	int	index;
	int	word_counter;

	index = 0;
	word_counter = 0;
	while (str[index])
	{
		if (str[index] == c)
			index++;
		else
		{
			word_counter++;
			while (str[index] && str[index] != c)
				index++;
		}
	}
	return (word_counter);
}

static char	*ft_putword(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **new_str,
		int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			word_len++;
			i++;
		}
		new_str[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!new_str)
			return (NULL);
		ft_putword(new_str[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	new_str[word] = NULL;
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	char	**final_str;
	size_t	num_words;

	if (!s)
		return (0);
	num_words = ft_word_count(s, c);
	final_str = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!final_str)
		return (0);
	ft_split_words(s, c, final_str, num_words);
	return (final_str);
}
#include <stdio.h>
#include <stdio.h>

int main ()
{
    char **s;
    s = ft_split("1244272882", '2');
    while(*s)
        printf("%s\n", *(s++));
}
```

> Bu kod, bir karakter dizisini belirli bir karaktere göre ayırarak her bir kelimeyi ayrı bir karakter dizisi olarak saklayan bir ft_split fonksiyonu içerir. Bu fonksiyon, verilen karakter dizisini ve ayırıcı karakteri kullanarak bir kelime listesi oluşturur.

ft_word_count fonksiyonu, verilen karakter dizisindeki kelime sayısını hesaplar. Bu fonksiyon, bir döngü kullanarak karakter dizisindeki her bir karakteri kontrol eder ve ayırıcı karakteri bulduğunda kelime sayısını artırır.

ft_putword fonksiyonu, verilen kelimeyi yeni bir karakter dizisine kopyalar. Bu fonksiyon, belirli bir konumda başlayarak belirli bir uzunluktaki bir kelimeyi alır ve yeni bir karakter dizisinde saklar.

ft_split_words fonksiyonu, verilen karakter dizisini belirli bir ayırıcı karaktere göre ayırarak her bir kelimeyi ayrı bir karakter dizisi olarak saklar. Bu fonksiyon, bir döngü kullanarak karakter dizisindeki her bir karakteri kontrol eder. Ayırıcı karakter bulunduğunda, bir kelime tamamlanmıştır ve ft_putword fonksiyonu kullanılarak yeni bir karakter dizisi oluşturulur.

ft_split fonksiyonu, verilen karakter dizisini belirli bir ayırıcı karaktere göre ayırarak her bir kelimeyi ayrı bir karakter dizisi olarak saklar. Bu fonksiyon, önce ft_word_count fonksiyonunu kullanarak kelime sayısını hesaplar ve ardından ft_split_words fonksiyonunu kullanarak her bir kelimeyi ayrı bir karakter dizisi olarak saklar.

Ana fonksiyonda ise, "1244272882" ve '2' karakteri tanımlanır ve s adı altında saklanır. Daha sonra, ft_split fonksiyonu kullanılarak s karakter dizisi 2 karakterine göre ayrıştırılır ve her bir kelime ayrı bir karakter dizisi olarak s değişkeninde saklanır. Daha sonra, while döngüsü kullanılarak her bir kelime ekrana yazdırılır.
> 
- `ft_itoa` - Bir sayıyı dizgeye dönüştürür.

```c
#include <stdlib.h>
#include "libft.h"

static size_t	count_digits(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n = (n / 10) * -1;
		i += 2;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static size_t	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static int	fill_string(char *str, int n)
{
	int	i;

	i = 0;
	if (n / 10 != 0)
		i = fill_string(str, n / 10);
	else if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	str[i] = ft_abs(n % 10) + '0';
	i++;
	str[i] = '\0';
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;

	len = count_digits(n);
	if (len == 0)
		len = 1;
	ptr = (char *) malloc ((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	fill_string(ptr, n);
	return (ptr);
}

#include <stdio.h>
int main()
{
	int a = 123213;
	printf("%s",ft_itoa(a)); 
}
```

> Programın içinde yer alan ft_itoa fonksiyonu, integer tipindeki bir sayıyı karakter dizisine dönüştüren bir fonksiyondur. Bu fonksiyonun içinde yer alan count_digits ve fill_string fonksiyonları ise dönüştürme işlemini gerçekleştirmek için kullanılır.

count_digits fonksiyonu, sayının kaç basamaklı olduğunu hesaplar. Bu hesaplama işlemi için öncelikle bir tane size_t tipinde değişken tanımlanır. Bu değişken, sayının kaç basamaklı olduğunu tutar. Fonksiyona gelen sayı negatif ise, sayının mutlak değerinin basamak sayısına 2 eklenir çünkü sonuçta eksi işareti de karakter dizisi içerisinde yer alacak. Daha sonra bir while döngüsü içerisinde sayının her bir basamağına ulaşmak için sayının 10'a bölümünden kalan alınır ve değişkenin değeri bir artırılır. Bu işlem, sayı sıfıra eşit olana kadar devam eder. Son olarak, hesaplanan basamak sayısı döndürülür.

fill_string fonksiyonu, sayının her bir basamağını tek tek alarak karakter dizisi haline getirir. Fonksiyona gelen iki parametre vardır: bir tane karakter dizisi ve bir tane integer sayı. Fonksiyon, sayının son basamağına kadar tekrarlanarak her basamağı karakter dizisine ekler. Eğer sayı negatif ise, eksi işareti de karakter dizisi içerisinde yer alacak şekilde eklenir. Fonksiyonun geri dönüş değeri ise, karakter dizisinin son indeksi + 1'dir.

ft_itoa fonksiyonu, öncelikle sayının kaç basamaklı olduğunu hesaplamak için count_digits fonksiyonunu çağırır ve hesaplanan basamak sayısına göre bir karakter dizisi için bellek ayırır. Eğer bellek ayırma işlemi başarısız olursa NULL değeri döndürülür. Daha sonra fill_string fonksiyonu çağırılarak sayının her bir basamağı karakter dizisine eklenir. Fonksiyonun geri dönüş değeri ise, oluşturulan karakter dizisidir.

main fonksiyonu ise, ft_itoa fonksiyonunu kullanarak bir integer sayıyı karakter dizisine dönüştürür ve ekrana yazdırır. Örneğin, int a = 123213; printf("%s", ft_itoa(a)); kodları çalıştırıldığında ekrana "123213" yazısı yazdırılır.
> 
- `ft_strmapi` - bir karakter dizisindeki her bir karakter için verilen bir fonksiyonu çağırarak yeni bir karakter dizisi oluşturur.

```c
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
#include <stdio.h>

char my_func(unsigned int i, char str)
{
	return(str - 32);
}

int main()
{
	char s[] = "emre";
	printf("%s\n",s);
	char *result = ft_strmapi(s, my_func);
	printf("%s",result);
}
```

> Bu koddaki ft_strmapi fonksiyonu, bir karakter dizisindeki her bir karakter için verilen bir fonksiyonu çağırarak yeni bir karakter dizisi oluşturur. Fonksiyon, iki parametre alır: bir tane karakter dizisi ve bir tane de işlem yapmak için kullanılacak fonksiyon. Fonksiyon, yeni oluşacak karakter dizisini malloc fonksiyonu ile oluşturur. Ardından, karakter dizisindeki her bir karakter için verilen fonksiyonu çağırır ve sonuçları yeni karakter dizisine ekler. Son olarak, oluşan yeni karakter dizisi geri döndürülür.

Bu koddaki main fonksiyonunda öncelikle bir tane karakter dizisi tanımlanır ve bu karakter dizisi "emre" olarak atanır. Sonra, my_func fonksiyonu tanımlanır. Bu fonksiyon, verilen bir karakterin ASCII değerinden 32 çıkarak büyük harfe dönüştürür.

Daha sonra, ft_strmapi fonksiyonu kullanılarak "emre" karakter dizisindeki her bir karakter my_func fonksiyonuna gönderilerek büyük harfe dönüştürülür. Oluşan yeni karakter dizisi result değişkenine atanır ve ekrana yazdırılır.

Sonuç olarak, bu kod "emre" karakter dizisini büyük harfe dönüştürerek "EMRE" şeklinde ekrana yazdıracaktır.
> 
- `ft_striteri` - Bir dizinin her karakterine bir işlev uygular.

```c
#include "libft.h"
#include<stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}
void my_func (unsigned int i, char *str)
{
    char str2;
    str2= *str;
    str2 -= 32;
    printf("%c\n",str2);
}

int main ()
{
    char *s = "deneme";
    ft_striteri(s,my_func);
}
```

> ft_striteri fonksiyonu, verilen bir karakter dizisindeki her bir karakter için verilen bir fonksiyonu çağırır. Fonksiyon iki parametre alır: bir tane karakter dizisi ve bir tane de işlem yapmak için kullanılacak fonksiyon. Fonksiyon, karakter dizisindeki her bir karakter için verilen fonksiyonu çağırır ve bu fonksiyona hem karakterin indeksi hem de adresi gönderilir.Bu koddaki main fonksiyonunda öncelikle bir tane karakter dizisi tanımlanır ve bu karakter dizisi "deneme" olarak atanır. Sonra, my_func fonksiyonu tanımlanır. Bu fonksiyon, verilen bir karakterin adresini kullanarak bu karakteri büyük harfe dönüştürür ve ekrana yazdırır.

Daha sonra, ft_striteri fonksiyonu kullanılarak "deneme" karakter dizisindeki her bir karakter my_func fonksiyonuna gönderilir ve bu fonksiyonda işlem yapılır.

Sonuç olarak, bu kod "deneme" karakter dizisindeki her bir karakteri büyük harfe dönüştürerek ekrana yazdıracaktır.
> 
- `ft_putchar_fd` - Bir karakteri bir dosya tanımlayıcısına yazar.

```
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
```

- `ft_putstr_fd` - Bir diziyi bir dosya tanımlayıcısına yazar.

```
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
```

- `ft_putendl_fd` - Bir diziyi bir dosya tanımlayıcısına ve ardından bir satır sonuna yazar.

```c
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
```

- `ft_putnbr_fd` - Bir sayıyı bir dosya tanımlayıcısına yazar.

```
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -n;
	}
	else
		nb = n;
	if ((nb / 10) > 0)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + 48, fd);
}
```

### Bağlı Liste İşlevleri

- `ft_lstnew` - Yeni bir liste öğesi oluşturur.

```c
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = (NULL);
	return (new);
}

#include <stdio.h>

int main()
{
	t_list *node = ft_lstnew("Hello World");
	printf("%s\n", (char *)node->content);
	printf("%p\n", node->next);
}
```

> Bu koddaki ft_lstnew fonksiyonu, yeni bir düğüm oluşturmak için kullanılır. Fonksiyon, bir tane içerik parametresi alır ve bu içeriği yeni bir düğümün içeriği olarak ayarlar. Fonksiyon, yeni bir düğüm oluşturmak için önce malloc fonksiyonu ile bellekten yer ayırır. Ardından, bellek ayrımı başarısız olursa **NULL** döndürür. Yeni düğümün içeriği, verilen içerik parametresi ile ayarlanır ve bağlantı noktası (next) **NULL** olarak ayarlanır. Son olarak, oluşturulan yeni düğüm geri döndürülür.

koddaki **main** fonksiyonu, öncelikle **ft_lstnew** fonksiyonunu kullanarak "Hello World" içeriği için yeni bir düğüm oluşturur. Sonra, bu düğümün içeriğini ekrana yazdırır ve bağlantı noktasının (next) adresini ekrana yazdırır.

Sonuç olarak, bu kod "Hello World" içeriği için yeni bir düğüm oluşturacak ve bu düğümün içeriğini ve bağlantı noktasının adresini ekrana yazdıracaktır.
> 
- `ft_lstadd_front` - Bir öğeyi listenin başına ekler.

```c
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = (*lst);
	(*lst) = new;
}

#include <stdio.h>

int main()
{
    t_list *list = NULL;
    ft_lstadd_front(&list, ft_lstnew("Hello, world!"));
    printf("%s\n", (char *)list->content);
}
```

> Bu koddaki ft_lstadd_front fonksiyonu, yeni bir düğüm oluşturup bu düğümü verilen listenin başına eklemek için kullanılır. Fonksiyon, iki tane parametre alır: lst ve new. lst, başlangıçta boş bir liste olabilir veya daha önce oluşturulmuş bir liste de olabilir. new ise yeni bir düğüm oluşturmak için kullanılır. Fonksiyon, önce yeni düğümün bağlantı noktasını (next) mevcut listenin başına ayarlar. Ardından, lst parametresinin değerini yeni düğümün adresi ile değiştirir. Son olarak, yeni düğüm listenin başına eklenmiş olur. Bu koddaki main fonksiyonu, öncelikle ft_lstnew fonksiyonunu kullanarak "Hello, world!" içeriği için yeni bir düğüm oluşturur. Daha sonra, ft_lstadd_front fonksiyonunu kullanarak bu yeni düğümü başlangıçta boş bir liste olan list listesinin başına ekler. Son olarak, düğümün içeriği ekrana yazdırılır.

Sonuç olarak, bu kod "Hello, world!" içeriği için yeni bir düğüm oluşturacak ve bu düğümü başlangıçta boş bir liste olan list listesinin başına ekleyecektir. Sonra, düğümün içeriği "Hello, world!" olarak ekrana yazdırılacaktır.
> 
- `ft_lstsize` - Bir listedeki öğelerin sayısını sayar.

```c
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst)
	{
		++counter;
		lst = lst->next;
	}
	return (counter);
}
#include <stdio.h>
int main()
{
    t_list *list = NULL;
    ft_lstadd_front(&list, ft_lstnew("Hello, world!"));
	ft_lstadd_front(&list, ft_lstnew("Hello, world!"));
	ft_lstadd_front(&list, ft_lstnew("Hello, world!"));
	ft_lstadd_front(&list, ft_lstnew("Hello, world!"));
	ft_lstadd_front(&list, ft_lstnew("Hello, world!"));
	int size = ft_lstsize(list);
    printf("List size: %d\n", size);
}
```

> Bu koddaki ft_lstsize fonksiyonu, bir bağlı listenin boyutunu hesaplamak için kullanılır. Fonksiyon, tek bir parametre alır: lst. Bu parametre, başlangıçta boş bir liste olabilir veya daha önce oluşturulmuş bir liste de olabilir. Fonksiyon, listenin her düğümünü ziyaret ederek sayacı (counter) artırır ve sonunda sayacın değerini döndürür.

Bu koddaki main fonksiyonu, öncelikle ft_lstnew fonksiyonunu kullanarak "Hello, world!" içeriği için beş yeni düğüm oluşturur. Daha sonra, ft_lstadd_front fonksiyonunu kullanarak bu yeni düğümleri başlangıçta boş bir liste olan list listesinin başına ekler. Son olarak, ft_lstsize fonksiyonu kullanarak listenin boyutu hesaplanır ve ekrana yazdırılır.

Sonuç olarak, bu kod "Hello, world!" içeriği için beş yeni düğüm oluşturacak ve bunları başlangıçta boş bir liste olan list listesinin başına ekleyecektir. Sonra, liste boyutu 5 olarak hesaplanacak ve ekrana yazdırılacaktır.
> 
- `ft_lstlast` - Listenin son öğesini döndürür.

```c
t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
#include <stdio.h>
int main()
{
    t_list *list = NULL;

    t_list *node1 = ft_lstnew("Node 1");
    ft_lstadd_front(&list, node1);

    t_list *node2 = ft_lstnew("Node 2");
    ft_lstadd_front(&list, node2);

    t_list *node3 = ft_lstnew("Node 3");
    ft_lstadd_front(&list, node3);

    t_list *last_node = ft_lstlast(list);
    printf("Last node content: %s\n", (char *)last_node->content);
    return (0);
}
```

> Bu koddaki ft_lstlast fonksiyonu, bir bağlı listenin son düğümünü bulmak için kullanılır. Fonksiyon, tek bir parametre alır: lst. Bu parametre, başlangıçta boş bir liste olabilir veya daha önce oluşturulmuş bir liste de olabilir. Fonksiyon, listenin son düğümüne kadar gezinir ve son düğüme ulaştığında onu döndürür.

Bu koddaki main fonksiyonu, öncelikle ft_lstnew fonksiyonunu kullanarak "Node 1", "Node 2" ve "Node 3" içerikli üç yeni düğüm oluşturur. Daha sonra, ft_lstadd_front fonksiyonu kullanılarak bu yeni düğümler başlangıçta boş bir liste olan list listesinin başına eklenir. Son olarak, ft_lstlast fonksiyonu kullanılarak listenin son düğümü bulunur ve içeriği ekrana yazdırılır.

Sonuç olarak, bu kod "Node 3", "Node 2" ve "Node 1" içerikli üç düğüm oluşturacak ve bunları başlangıçta boş bir liste olan list listesinin başına ekleyecektir. Sonra, ft_lstlast fonksiyonu kullanılarak listenin son düğümü bulunacak ve içeriği ekrana yazdırılacaktır
> 
- `ft_lstadd_back` - Bir öğeyi listenin sonuna ekler.

```c
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}

#include <stdio.h>

int main()
{
    t_list *list = NULL;
    ft_lstadd_back(&list, ft_lstnew("Hello, world!"));
    printf("%s\n", (char *)list->content);
}
```

> Bu koddaki ft_lstadd_back fonksiyonu, bir bağlı listenin sonuna yeni bir düğüm eklemek için kullanılır. Fonksiyon, iki parametre alır: lst ve new. lst parametresi, başlangıçta boş bir liste olabilir veya daha önce oluşturulmuş bir liste de olabilir. new parametresi ise, eklenecek yeni düğümü temsil eder. Fonksiyon, önce listenin son düğümünü bulur ve sonra bu düğümün next işaretçisini new düğümüne ayarlar.

Bu koddaki main fonksiyonu, öncelikle ft_lstnew fonksiyonunu kullanarak "Hello, world!" içeriği için yeni bir düğüm oluşturur. Daha sonra, ft_lstadd_back fonksiyonu kullanılarak bu yeni düğüm listenin sonuna eklenir. Son olarak, eklendikten sonra listenin ilk düğümünün içeriği ekrana yazdırılır.

Sonuç olarak, bu kod "Hello, world!" içeriği için yeni bir düğüm oluşturacak ve bu düğümü başlangıçta boş bir liste olan list listesinin sonuna ekleyecek. Daha sonra, listenin ilk düğümünün içeriği ekrana yazdırılacak. Bu durumda çıktı, "Hello, world!" olacak.
> 
- `ft_lstclear` - Listeyi siler ve belleği serbest bırakır.

```c
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

#include <stdio.h>

void	del(void *str)
{
    free(str);
}

int main()
{
    t_list *list = ft_lstnew(strdup("Node 1"));
    ft_lstadd_front(&list, ft_lstnew(strdup("Node 2")));
    ft_lstadd_front(&list, ft_lstnew(strdup("Node 3")));
    ft_lstclear(&list, del);
    return (0);
}
```

> Bu fonksiyon, iki parametre alır: lst ve del. lst parametresi, serbest bırakılacak bağlı listeyi temsil eder. del parametresi ise, her düğümün içeriğini serbest bırakmak için kullanılacak bir işlev işaretçisidir.

Fonksiyonun çalışması şu şekildedir:

İlk olarak, del veya lst veya *lst NULL ise, fonksiyon hemen sona erer.
Daha sonra, bir döngü başlatılır. Bu döngü, listenin tüm düğümlerini tek tek dolaşır.
Her döngü adımında, mevcut düğümün next işaretçisi geçici bir değişkene (tmp) kopyalanır.
Daha sonra, ft_lstdelone fonksiyonu kullanılarak mevcut düğüm serbest bırakılır.
Son olarak, lst işaretçisi geçici değişken olan tmp ile güncellenir ve döngü devam eder.   
Bu kodda, öncelikle "Node 1" içeriği için yeni bir düğüm oluşturulur ve bu düğüm başlangıçta boş bir liste olan list listesinin başına eklenir. Daha sonra, "Node 2" ve "Node 3" içerikli iki düğüm daha oluşturulur ve bunlar da sırasıyla listenin başına eklenir.
> 
- `ft_lstiter` - Bir fonksiyonu bir listenin her öğesine uygular.

```c
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
#include <stdio.h>
void	print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main()
{
    t_list *list = ft_lstnew(strdup("Node 1"));
    ft_lstadd_front(&list, ft_lstnew(strdup("Node 2")));
    ft_lstadd_front(&list, ft_lstnew(strdup("Node 3")));
    ft_lstiter(list, print_content);
    return (0);
}
```

> Bu fonksiyon, iki parametre alır: lst ve f. lst parametresi, dolaşılacak bağlı listeyi temsil eder. f parametresi ise, her düğümün içeriğini işlemek için kullanılacak bir işlev işaretçisidir.

Fonksiyonun çalışması şu şekildedir:

İlk olarak, f NULL ise, fonksiyon hemen sona erer.
Daha sonra, bir döngü başlatılır. Bu döngü, listenin tüm düğümlerini tek tek dolaşır.
Her döngü adımında, mevcut düğümün içeriği f işlevi kullanılarak işlenir.
Son olarak, lst işaretçisi bir sonraki düğüme (next) güncellenir ve döngü devam eder.   Bu kod, yukarıda açıklanan şekilde çalışır. Başlangıçta "Node 1" içeriği için yeni bir düğüm oluşturulur ve ft_lstadd_front fonksiyonu kullanılarak daha sonra "Node 2" ve "Node 3" içerikli düğümler başlangıçta boş bir liste olan list listesinin başına eklenir. Daha sonra, ft_lstiter fonksiyonu kullanılarak listenin tüm düğümleri dolaşılır ve her düğümün içeriği print_content işlevi kullanılarak ekrana yazdırılır.
> 
- `ft_lstmap` - Bir fonksiyonu bir listenin her öğesine uygular.

```c
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*buffer;
	t_list	*temp;

	if (lst == NULL || f == NULL)
		return (NULL);
	buffer = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&buffer, del);
			free(temp);
			return (NULL);
		}
		ft_lstadd_back(&buffer, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (buffer);
}

#include <stdio.h>

void	*add_one(void *content)
{
	int	*num;

	num = (int *)content;
	*num += 1;
	return (num);
}

void	del(void *content)
{
	free(content);
}

int main()
{
	t_list *list = ft_lstnew(ft_strdup("Node 1"));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Node 2")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Node 3")));
	ft_lstmap(list, add_one, del);
	ft_lstiter(list, print_content);
	ft_lstclear(&list, del);
	return (0);
}
```

> Bu fonksiyon, üç parametre alır: lst, f ve del. lst parametresi, kopyalanacak bağlı listeyi temsil eder. f parametresi ise, her düğümün içeriğini değiştirmek için kullanılacak bir işlev işaretçisidir. del parametresi ise, herhangi bir hata durumunda serbest bırakılacak belleği temizlemek için kullanılacak bir işlev işaretçisidir.

Fonksiyonun çalışması şu şekildedir:

İlk olarak, lst veya f NULL ise, fonksiyon hemen NULL döndürür.
Daha sonra, bir döngü başlatılır. Bu döngü, listenin tüm düğümlerini tek tek dolaşır.
Her döngü adımında, mevcut düğümün içeriği f işlevi kullanılarak değiştirilir ve yeni bir düğüm oluşturulur.
Yeni düğüm oluşturulamazsa, ft_lstclear fonksiyonu kullanılarak kopyalanan liste serbest bırakılır ve NULL döndürülür.
Aksi takdirde, yeni düğüm kopyalanan listenin sonuna eklenir ve döngü devam eder.
Şimdi detaylı olarak fonksiyonun çalışma mantığını inceleyelim:

İlk olarak, lst veya f NULL ise, fonksiyon hemen NULL döndürür.
Daha sonra, iki adet boş işaretçi (buffer ve temp) tanımlanır. Bu işaretçiler daha sonra kullanılacak yeni düğümlerin ve kopyalanan listenin başını temsil ederler.
Döngü başlatılır. Bu döngü, listenin tüm düğümlerini tek tek dolaşır.
Her döngü adımında, mevcut düğümün içeriği f işlevi kullanılarak değiştirilir ve yeni bir düğüm oluşturulur. Yeni düğüm, ft_lstnew fonksiyonu kullanılarak oluşturulur ve içeriği değiştirilmiş mevcut düğümün içeriği ile aynıdır.
Yeni düğüm oluşturulamazsa, ft_lstclear fonksiyonu kullanılarak kopyalanan liste serbest bırakılır ve NULL döndürülür.
Aksi takdirde, yeni düğüm kopyalanan listenin sonuna eklenir (ft_lstadd_back) ve döngü devam eder.
Döngü bittiğinde, kopyalanan liste buffer işaretçisi ile geri döndürülür.                                         Bu kod, ft_lstmap fonksiyonunu kullanarak bir bağlı listenin tüm düğümlerini kopyalar ve her düğümün içeriğini 1 artırır. Daha sonra, ft_lstiter fonksiyonu kullanılarak değiştirilmiş liste ekrana yazdırılır. Son olarak, ft_lstclear fonksiyonu kullanılarak bellek serbest bırakılır.

add_one işlevi, her düğümün içeriğini değiştirmek için kullanılır. Bu işlev, bir tamsayı göstericisi alır ve bu göstericiyi 1 artırır.

del işlevi ise, herhangi bir hata durumunda serbest bırakılacak belleği temizlemek için kullanılır.
> 

<aside>
⚠️ Aşağıda bulunan rehber [Emre Akdik’e](https://www.notion.so/42-stanbul-Libft-Proje-Notlar-00f686937e5d4c468b7504b8a45a8d9e?pvs=21)  aittir!

</aside>

## Zorunlu Kisim Sözel Notlar

- Zorunlu kisimin bize temel beceri ve bilgi konusunda gelistirmeye calistigini dusunuyorum. Cunku libft'yi iyi sekilde anlamaya calismak ve hizli gecmemek siradaki projeleri anlamamda cok isime yaradi.
- Asagidaki notlar projeyi tamamlarken merak ettigim ve cevabini aradigim sorulardan olusuyor. Butunuyle libft vermenizi saglayacak notlar degil.

## Typedef Nedir?

"typedef" C dilinde bir anahtar kelimedir ve bir türden yeni bir tür adı tanımlar. Örneğin, aşağıdaki kod parçacığı "unsigned long" türüne "ul" adını verir:

```
typedef unsigned long ul;

```

Daha sonra, "ul" türünü kullanarak değişkenler tanımlayabilirsiniz:

```
ul sayi1, sayi2, toplam;

```

Bu, yazımı daha kolay hale getirir ve kodun anlaşılırlığını artırır.

## Size\_t Nedir?

- Bu veri tipi, genellikle bellekteki bir dizinin veya bir yapının boyutunu ifade etmek için kullanılır.
- Daha basitce anlatmak gerekirse, "size_t" veri tipi ozel bir veri tipi degildir basitce bir integer typedef'idir
    - 32 bit sistem icin unsigned int typedefidir
    - 64bit sistemlerde unsigned long long typedef'idir.

**Neden size_t kullaniyoruz?**

- 32bit ya da 64bit, iki sistemde de en fazla limite sahip int turlerinin typedef'ine donuserek kendi limitini asabilen bir boyut olamayacagini garanti eder.
- Herhangi bir nesnenin boyutu negatif olamayacagi icin, programin daha guvenli olmasi icin negatif almaz(unsigned).
- Okunabilirligi kolaylastirir, kodu yazan kisi disinda okuyan birisi size_t tipindeki degiskende bir boyut tutulacagini veya tutuldugunu kolayca anlayabilir.

```
size_t size; // size değişkeni, bir nesnenin boyutunu ifade eden bir tamsayıdır

```

## Const Nedir?

C dilinde, "*const*" anahtar kelimesi bir değişkenin değerinin değiştirilemeyeceğini belirtir. Bu, bir değişkenin bir kez atandıktan sonra değerinin değiştirilemeyeceği anlamına gelir.

Örneğin:

```
const int x = 5;
x = 10; // Bu satır hata verir, çünkü x değişkeninin değeri değiştirilemez

```

"*const*" anahtar kelimesi, bir değişkenin değerinin değiştirilemeyeceğini garanti eder ve bu, programınızın daha güvenli ve hatasız çalışmasını sağlar. Ayrıca, "const" değişkenler genellikle sabit değerleri temsil eder ve bu nedenle, sabit değerleri "const" değişkenlerle tanımlamanız tavsiye edilir.

```
const float pi = 3.14159; // pi değişkeni, pi sabitinin değerini temsil eder

```

"*const*" anahtar kelimesi, C dilinin önemli bir özelliğidir ve programlarınızda sıklıkla kullanılır. Değişkenlerin değerlerinin değiştirilememesi, programınızın daha güvenli ve hatasız çalışmasını sağlar ve ayrıca, kodunuzun okunabilirliğini ve anlaşılırlığını artırır.

### while (--n) Dongusu Nasil Calisir?

Klasik bir while dongusu, kosulu saglanamadigi zaman duran bir dongudur. Bu (--n) kosulu ise normalde dongunun icinde yaptigimiz iterasyonu (*iterasyon: degiskenleri artirip azaltmak icin kullandigimiz kisayollar n-- n++ vb*) kosulun icine tasimistir. Bu noktada kosul n degiskeni 0 degerine ulasana kadar false deger dondurmeyecektir. Yani iterasyonlarla kurdugumuz kosullarin asil mantigi degiskenin 0'a dusene kadar dongunun calismasini saglamaktir.
*- Bu noktada lutfen --n ve n-- iterasyonlarinin farkini unutmayin ve hesaplamalarinizi ona gore yapin.*

Örneğin:

```
int n = 5;
while (--n) {
    printf("%d\\n", n);
}

```

Bu örnekte, "while(--n)" ifadesi, "n" değişkeninin değerinin sıfıra ulaşana kadar döngüyü sürdürür ve bu nedenle, döngü 4 kez çalışır. Bu döngünün çalışma sırasında, "n" değişkeninin değeri sırasıyla 4, 3, 2 ve 1 olur ve döngü sona erdiğinde, "n" değişkeninin değeri 0 olur fakat 0 bastirilmaz.

## Cast Nedir ?

C dilinde "cast" (dönüştürme) işlemi, bir veri türünü başka bir veri türüne dönüştürmek için kullanılır. Örneğin, bir sayının tamsayı türünden ondalık türüne dönüştürülmesi gibi. Dönüştürme işlemi, verinin değerini değiştirmez, sadece verinin türünü değiştirir.

Cast işleminin kullanımı şöyle yapılır:

```
(veri_turu) veri

```

Örneğin:

```
int x = 5;
float y = (float) x;

```

Bu kod parçacığında, x değişkeni int türünde ve değeri 5'tir. Daha sonra, x değişkeni float türüne dönüştürülür ve y değişkenine atanır. Bu işlem sonucunda, y değişkeni float türünde ve değeri 5.0 olacaktır.

Cast işleminin dikkatli kullanılması gerekir, çünkü bazen verinin türü değiştirilemez veya verinin değeri anlamsız hale gelebilir. Örneğin, bir ondalık sayıyı tamsayı türüne dönüştürürken, ondalık kısım atılır ve sonuç ona göre oluşacaktır.

### "dst + i" Nedir?

"dst + i" ifadesi, C dilinde bir dizinin bir elemanına erişmek için kullanılabilir. "dst" dizi adıdır ve "i" değişkeni dizinin kaçıncı elemanına erişmek istediğimizi belirtir. Örneğin:

```
int dst[10];

// dst dizisinin 3. elemanına erişmek için
int x = dst[2];

// dst dizisinin 3. elemanına değer atamak için
dst[2] = 5;

// dst dizisinin 3. elemanına ulaşmanın farklı bir yolu.
int x = *(dst + 2);

```

Bu örneklerde görüldüğü gibi, dizinin bir elemanına erişmek için "dst\[i]" yapısı kullanılabilir veya "\*(dst + i)" yapısı da kullanılabilir. Bu ikisi arasında bir fark yoktur ve ikisi de aynı şeyi yapar.

Not: Dizinin ilk elemanı "dst\[0]" olarak, ikinci elemanı "dst\[1]" olarak, üçüncü elemanı "dst\[2]" olarak gibi tanımlanır. Bu nedenle, dizinin 3. elemanını "dst\[2]" yapısıyla erişiriz.

### strcpy ve memcpy farkı nedir?

C dilinde "strcpy" ve "memcpy" fonksiyonları, iki dizi arasında veri kopyalama işlemi yapar. Ancak, iki fonksiyon arasında bazı farklılıklar vardır:

- "strcpy" fonksiyonu, bir dizinin içeriğini başka bir diziye kopyalar. Bu fonksiyon, sadece karakter dizileri (string) için kullanılır ve son karaktere ('\0') kadar kopyalar.
- "memcpy" fonksiyonu ise, bir dizinin belirli bir bölümünü başka bir diziye kopyalar. Bu fonksiyon, tüm veri türleri için kullanılabilir ve belirtilen uzunlukta veri kopyalar.

Örnek olarak:

```
char str1[10] = "hello";
char str2[10];

// str1 dizisinin içeriğini str2 dizisine kopyalar
strcpy(str2, str1);

int arr1[5] = {1, 2, 3, 4, 5};
int arr2[5];

// arr1 dizisinin 2. ve 3. elemanlarını arr2 dizisine kopyalar
memcpy(arr2, &arr1[1], sizeof(int) * 2);

```

Bu örneklerde görüldüğü gibi, "strcpy" fonksiyonu sadece karakter dizileri için kullanılır ve son karaktere kadar kopyalar, iken "memcpy" fonksiyonu tüm veri türleri için kullanılabilir ve belirtilen uzunlukta veri kopyalar.

### is Fonksiyonlarında Neden Int Veri Tipi ile Argüman Alıyoruz?

C dilinde bilgisayar char veri tipini algılamak için dahi karakterlerin integer karşılıklarını hesaplayarak işlem yapar. C dilinde tüm veri tiplerinin integer karşılıkları vardır. Bu da en temel de int veri tipinin olduğunu gösteriyor.

Char veri tipi saklama konusunda sadece temel ascii tablosu ile sınırlıyken int tüm karakterleri saklayabilmektedir. Temel ascii tablosu dışındakiler dahil. Bu yüzden bu fonksiyonlarda int kullanarak var olan tüm karakterlerin argüman olarak girilebilmesini ve kontrol edilebilmesini sağlıyoruz.

### Overlap Nedir?

Memcpy gibi bir fonksiyonda kopyalanacak olan src'nin kopyalama esnasında bozulması ve sıradaki kopyalayacağı karakterlerin değişmesidir. Bunun yüzünden kopyalama doğru gerçekleşmez.

Overlap olması için src'nin bellekte dst değişkeninden önce konumlanmış olması gerekmektedir. Overlap *sadece* hem src'nin hem de  dst'nin aynı string'in içeriğinden oluştuğu zaman olmaz. Aynı zamanda src ve dst'nin peş peşe oluşmuş bellek bloklarında barınmasıyla gerçekleşebilir.

Örnek:

```
char src[] = "Emre Akdik";
char dest[100];

ft_memcpy(&src[2], src, 9);
printf("%s", dest);
```

- Bu örnekte src ve dst aynı string içinden oluşmuştur ve src'nin başlangıcı dst'nin başlangıcından daha önce olduğu için src'nin bellek bloğu dst'nin bellek bloğundan öndedir. Bu durumda overlap mümkündür. src'miz "Emre Akdik"dir, dest ise "re Akdik" dir.
- Dest ilk iki indeksin kopyalanması ile "em akdik"e dönüşür fakat aynı zamanda src'de "Emem Akdik"e dönüşür. İşte burada kopyalama esnasında karakterler üst üste binmiş olur.
- src'den kopyalama için alınacak sıradaki iki indeks re'den em'e dönüşmüş oldu ve dest'e "re" eklemesi gerekirken kopyalama esnasında src bozulduğu için "em" ekleyecek. Artık dest "ememkdik" olmuştur.
- Bundan sonraki tüm adımlarda her kopyalama işlemi yapıldığında sıradaki kopyalama için alınacak karakterleri değiştirecek ve istenilen sonucu alamayacağız.
- Ana mantık src'nin dst'den önce olması ve dst'ye src'den kopyalama yaparken dst ve src'nin üst üste binip srcnin bozulmasıdır. Çıktıyı örneği derleyerek kontrol edebilirsiniz.

### Bazı fonksiyonlarda değişkenleri nasıl karşılaştırıyoruz?

Örneğin memmove fonksiyonunda if(dst < src) gibi bir if koşulumuz var. Burada aslında dst ve src'nin adreslerinin integer karşılıklarını karşılaştırıyoruz. Eğer dst değişkeninin int adres karşılığı src değişkeninin int adres karşılığından küçükse dst değişkeni bellekte daha önde konumlanmış demektir. Bu koşul da memmove'un overlap'e karşı olan savunmasında yardımcı olacaktır.

### strnstr fonksiyonunda neden i < (len - len\_n) yapıyoruz?

- len-n burada arayacağımız string'in uzunluğunu tutuyor.
- bir string'i bir string'in içinde arıyorsak, aranacak alan uzunluğu (yani len) aranacak string'in uzunluğundan (yani len\_n) daha büyük olmak zorunda.

Örnek:

- Herhangi bir string içinde "Emre" stringini arayacağız. Ama fonksiyona araması için sadece 3 karakterlik bir alan verirsek, "Emre" stringi arama yapılacak string'in en başında olsa bile "Emr" bulup "Emre" bulamayacağı için bize doğru çıktıyı vermez.

### İki boyutlu dize nedir?

- bu soruyu splite gectigimde sormustum. cunku split basitce baktiginizda tek boyutlu bir dizeyi iki boyutlu bir dizeye ceviriyor.

İki boyutluyu açıklamadan önce tek boyutlu dizelerden bahsetmeliyim. Tek boyutlu dizeler aslında her zaman kullandığımız dizi tanımlama şeklimizdir.

Örneğin:

`veri-tipi dizi-ismi [dizinin-boyutu] = "dizinin-kendisi";`

\--> Üstteki örnekte genel olarak kullandığımız dizi tanımlamayı gördük. Bu dizi tanımlamasına tek boyutlu dizi tanımlaması denir.

Şimdi gelelim iki boyutlu dizelere. İki boyutlu dizelerde tek boyutlu dizelerden farklı olarak satır ve sütun konuları için içine giriyor.

Örneğin:

`veri-tipi dizi-ismi [satır-sayısı] [sütun-sayısı] = {satır0-sutun0,satır0-sutun1....};`

`Örnek bir tam sayı dizisi: int dizi[2][3] = {{12,34,22},{11,49,98}};`

Eğer üstteki tam sayı dizisini dizi\[1]\[1] şeklinde yazdırmak isteseydik bize çıkacak olan sonuç dizideki 2. satırın 2.sütunu olacaktır. Yani 49 ve 22 olacaktır.

## Bonus Kisim Sözel Notlar

- Bonus kisimin, yapi mantigini ve en cok kullanilan (sanirim) yapi turlerinden biri olan bagli listeyi ogrenmemizi amacladigini dusunuyorum.

### Nasıl Liste Oluşturulur? Struct Nedir?

C dilinde yapı/struct, veri yapılarının bir koleksiyonudur. Yapılar, birbirleriyle ilişkili verilerin bir arada saklanması için kullanılır. Yapılar, bir dizi değişkenin bir arada saklanmasını sağlar ve bu değişkenlerin her birine özel bir ad verilebilir. Örneğin, bir öğrenci yapısı oluşturarak, bir öğrencinin adını, numarasını ve notlarını saklayabilirsiniz.

Yapıları tanımlamak için "struct" anahtar kelimesi kullanılır. Örneğin, bir öğrenci yapısı tanımlamak için aşağıdaki gibi bir kod bloğu kullanabilirsiniz:

```
struct student {
    char name[50];
    int id;
    float grade;
};
```

Bu yapıyı kullanmak için, yapı türünden bir değişken oluşturmanız gerekir. Örneğin:

```
struct student s;
```

Bu değişkene, yapının içindeki değişkenlere ulaşmak için nokta (.) operatörü kullanılır. (Sanirim ayni islev icin "->" operatorunu de kullanabiliyoruz fakat ufak farklar varmis bu farklari tam olarak cozemedim) Örneğin:

```
s.name = "John";
s.id = 12345;
s.grade = 85.5;

```

## Bağlı Liste Nedir?

Bağlı listeler, birbirine "bağlı" veri yapılarıdır. Bu, bir elemanın bir sonraki elemanı işaret eden bir bağlantı içerdiği anlamına gelir. Bu yapı sayesinde, bir eleman eklenirken veya çıkarılırken, diğer elemanların yerleri değişmez ve sadece eklenen veya çıkarılan elemana bağlı olarak bağlantılar güncellenir.

Bağlı listeler, C dilinde "t_list" yapısı kullanılarak tanımlanabilir. Bu yapı, bir "content" öğesi ve bir "next" öğesi içerir. "content" öğesi, elemanın içeriğini tutar ve "next" öğesi, bir sonraki elemana işaret eden bir bağlantı içerir.

Bağlı listeler, çeşitli veri yapılarının oluşturulmasında kullanılabilir. Örneğin, bir kuyruk (queue) veya bir yığın (stack) gibi veri yapıları oluşturulabilir. Ayrıca, verilerin sıralı bir şekilde saklanması ve aranması gibi işlemlerde de kullanılabilir.

### Bonus Kısım da Libft'ye Eklenen Struct Yapısı Nedir?

typedef, C dilinde bir tür tanımlamayı yapmanızı sağlar. Örneğin, libft.h dosyasına eklediğimiz kod bloğunda "t_list" olarak bir tür tanımlanmıştır ve bu tür "struct s_list" yapısına eşitlenmiştir. Bu sayede, "t_list" türünü "struct s_list" yerine kullanabilirsiniz.

"t_list" yapısı, içeriği "void \*content" ve bir sonraki yapının adresini tutan "struct s_list *next" gibi iki özelliğe sahiptir. Bu yapı, bir veri yapısı olarak bir bağlı liste oluşturmak için kullanılabilir.

### "->" Operatörü Nedir?

C dilinde, -> işareti bir yapının özelliğine erişmek için kullanılır. Örneğin, aşağıdaki kod bloğunda "ogrenci" adlı bir yapı tanımlanmıştır ve bu yapının "ad" ve "yas" adlı iki özelliği vardır:

```
struct Ogrenci {
    char *ad;
    int yas;
};

int main(void) {
    struct Ogrenci ogrenci = {"Ali", 20};
    printf("Ad: %s, Yaş: %d\\n", ogrenci.ad, ogrenci.yas);
    return 0;
}

```

Bu örnekte, yapının özelliklerine . operatörüyle erişilebilir. Ancak, yapının bir adresine eriştiğinizde -> operatörünü kullanmanız gerekir. Örneğin:

```
struct Ogrenci *ogrenci_ptr = &ogrenci;
printf("Ad: %s, Yaş: %d\\n", ogrenci_ptr->ad, ogrenci_ptr->yas);

```

Bu kod bloğunda, ogrenci_ptr adlı bir yapı adresi oluşturulur ve bu adresin içindeki "ad" ve "yas" özelliklerine -> operatörüyle erişilir. Bu işaret, ogrenci_ptr adresindeki yapının özelliklerine erişmek için kullanılır ve çıktı olarak aynı sonucu verir.

### Malloc'ta Neden Tür Dönüşümü(Type Casting) Kullanırız?

Malloc fonksiyonu, bellekte yer açmak için kullanılan bir C fonksiyonudur ve void * tipinde bir değer döndürür. Bu, malloc fonksiyonunun hangi türde bir değişken için yer açtığını bilemediğimiz anlamına gelir. Bu nedenle, malloc fonksiyonunun döndürdüğü değerin bir tür belirtilmesi gerekir. Bu tür belirtimi tür dönüşümü ile yapılır. Örneğin:

```
int *ptr;
ptr = (int *) malloc(sizeof(int));

```

Bu örnekte, malloc fonksiyonu bir int değişkeni için gerekli olan bellek miktarını hesaplar ve bu miktar kadar bellek alanı ayırır. Daha sonra, malloc fonksiyonunun döndürdüğü değer int türüne dönüştürülerek ptr değişkenine atanır.

Not: Tür dönüşümünün kullanılması malloc fonksiyonunun döndürdüğü değerin bir tür belirtilmesini sağlar, ancak bu değerin gerçekten o türden bir değer olup olmadığını doğrulamaz. Bu nedenle, malloc fonksiyonunun döndürdüğü değeri kullanmadan önce mutlaka doğru türden bir değer olduğundan emin olunmalıdır.

### Del fonksiyonu ile nasıl bir linked list elemanı silerim?

del fonksiyonu, bir linked list elemanının içeriğini (content alanını) silmek için kullanılan bir fonksiyondur. Bu fonksiyon, bir void * tipinde bir parametre alır ve içeriği silmek için kullanılır. Örneğin, bir linked listte int türünde değerler tutuluyorsa, del fonksiyonu aşağıdaki gibi olabilir:

```
void del_int(void *content)
{
free(content);
}

```

Bu fonksiyon, void * tipinde bir değişkeni int türüne dönüştürerek free fonksiyonu ile bellekten siler.

Bu fonksiyonu kullanmak için, ft_lstdelone gibi bir fonksiyonda del fonksiyonunun adresini parametre olarak vermelisiniz. Örneğin:

ft_lstdelone(lst, del_int);

Bu örnekte, lst elemanının içeriği del_int fonksiyonu ile silinir.

### Node nedir?

Bilgisayar biliminde, bir node veri yapısının temel bir birimidir, örneğin bir bağlı liste veya ağaç veri yapısı gibi.

Bağlı liste, her elemanın ayrı bir nesne olarak adlandırılan bir node olduğu lineer bir veri yapısıdır. Her node'un iki alanı vardır: bir elemanı depolamak için bir veri alanı ve bir sonraki node'u gösteren bir sonraki alan. Liste sonundaki son node'un bir sonraki alanı null olarak ayarlanmıştır, bu da listenin sonunu gösterir.

Ağaç veri yapısında, bir node veri depolayan ve bir veya daha fazla çocuk node'a götüren bir referans olan bir nesnedir. Ağaçtaki en üst node root düğüm olarak adlandırılır ve çocukları olmayan düğümler ise leaf düğümler olarak adlandırılır.

Bağlı listelerde ve ağaç veri yapılarında, nodelar veriyi efektif bir şekilde ekleme, silme ve veriye erişim için depolamak ve düzenlemek için kullanılır.

## Makefile Sözel Notlar