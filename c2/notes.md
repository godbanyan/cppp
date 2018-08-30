## 2.4 const

c++中的const与c语言中的不完全相同

```c
    /*
     * 在C语言中始终为一个变量，不论是否声明在global scope
     */
    const int a = 10;

    /* 而且全局域只能赋予字面值, 以下语句会报错 */
    const int c = get_size();

    int main(void)
    {
        /* 还是在local scope */
        const int b = 10;

        /*
         * const的作用仅是指示对象无法修改
         * 对于变长数组的初始化可能会导致编译错误
         */
        int ary[a] = {0};
    }
```

```cpp
/* 在C++中，若对象可以在编译时确定，则它是一个真正的常量, 在编译时被替换 */
const int a = 10;
/* 等同于声明成 constexpr 类型 */
constexpr int b = 10;

/*
** 若size返回的是普通类型的变量，则c也仅是一个变量，
** 不过是所指向的数据对象无法修改而已
** 若size返回的是constexpr类型，则c依然是真正的常量
*/
const int c = size();
constexpr int d = size_const();

int main(void)
{
    /* 正确，a和b是都是常量，所以定义的数组不是变长数组 */
    int ary_a[a] = {0};
    int ary_b[b] = {0};

    /*
     * 错误，对于变长数组的初始化可能会导致编译错误
     * 至少是无法按预期进行整个数组的初始化, 一维有可能初始化成功
     * 但是2维的仅会初始化第一个数组元素的第一个元素
     */
    int ary_c[c] = {0};

    /* 正确 */
    int ary_d[d] = {0};
}
```

### 总之一点，c中没有真正的常量，const只是确保变量不被修改，而c++中
### 标识符所代表的是否是真正的常量，可以依靠“是否能在编译时得到”进行判断

