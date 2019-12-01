#include <iostream> // C++中用于数据的流式输入与输出的头文件
/* C++ 头文件没有 .h 后缀
一般情况下 C 语言中的头文件可以直接在名字前面加个 c ，末尾去掉 .h 后缀使用
*/
#include <cstdio> // #include <stdio.h>
#include <cctype>

#include <vector> // 动态数组头文件
#include <set>    // 集合 set 头文件
#include <map>    // 映射 map 头文件
#include <stack>  // 栈 stack 头文件
#include <queue>  // 队列 queue 头文件
#include <bitset> // 位运算 bitset 头文件
#include <algorithm>
#include <string>

// 使用“std”这个名称空间，避免函数名称冲突
// 也可以在方法名钱买了加上 std:: 来使用，例如 std::cin >> n
using namespace std;

/* 引用&和传值 */
/* & 符号不同于 C 中的取地址符，C++ 中的引用是指在变量名之前加一个 & 符号，方便直接对传入的原变量进行操作 */
void func(int &a) // 传入的是 k 的引用，相当与对 k 的值直接修改
{
    a = 99;
};

bool cmp(int a, int b)
{                 //cmp 函数用于 sort 函数排序
    return a > b; // 从大到小排列
}

int main()
{
    int n; // C++ 变量只需要在首次使用之前定义，其实 C 也可以，但较早版本的 C 语言编译器尚不支持
    // scanf("%d",&n);箭头向右，表示将内容输入到 n 中
    cin >> n;
    // cout << n 等同于 printf("%d",n)
    // endl 全称为 end of line,表示一行输出结束，然后输出下一行，等同于 "\n"
    cout << "Hello,World!" << n + 1 << endl;
    cout << "Hello,N\n"; // 也可以直接使用 "\n" 来换行
    /*cin 和 cout 使用方便，但输入输出效率不如 scanf 和 printf*/

    /* bool变量 */
    /* bool 变量有两个值，true 和 false，C++ 将所有非 0 值解释为 true，0 值为 false */
    bool flag = true;
    bool flag1 = -2; // true
    bool flag2 = 0;  // false

    /* const 常量 */
    const int a = 1024;

    /* string 类 */
    string s = "Hello,World!"; // 字符串赋值
    string s2 = s;
    string s3 = s + s2; // 字符串拼接
    string s4;
    s.length(); // 获取字符串长度
    cin >> s4;  // 读入字符串，使用 cin 读入字符串时，以空格为分隔符，如果要读入一整行字符串，需要使用 getline
    cout << s;  // 输出字符串
    string s5;
    getline(cin, s5); // 读入一行的字符串，包含空格
    /* substr 用于截取字符串 */
    s2 = s.substr(4);    // 从下标 4 开始到结束
    s3 = s.substr(5, 3); // 从下标 5 开始，3 个字符

    /* 结构体 */
    struct stu
    {
        int grade;
        float score;
    };
    stu arr2[10]; // 使用结构体，不需要在前面加 struct

    // 调用 func 函数
    int k = 0;
    func(k);

    /* 动态数组 vector（矢量） */
    /* 
    vector 能够在运行阶段设置数组的长度、在末尾增加新的数据、在中间插值、长度任意改变 
    它在头文件 vector 中
    #include <vector>
    */
    vector<int> v1;         // 定义一个数组 v1 ,定义的时候没有分配大小
    cout << v1.size();      // 输出 v1 的大小，此时应该为 0
    vector<int> v(10);      // 定义一个长度为 10 的 int 数组，默认 10 个元素都为 0
    v1.resize(8);           // 为已经定义的数组设置长度为 8 ，8 个元素默认值都为 0
    vector<int> v3(100, 9); // 一个长度为 100 的数组，所有元素初始值为 9
    v[1] = 2;               // 可以使用 [] 下标来访问数组
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i); // 在 v1 的末尾添加一个元素 i
    }
    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        // 使用迭代器访问vector
        // v1.begin() 和 v1.end() 都是指针，分别指向容器的第一个元素和最后一个元素的后面一个位置
        cout << *it << " ";
    }

    /* 集合 set 的使用 */
    /*
    set 是集合，一个 set 内的元素是各不相同的，而且 set 会按照元素进行从小到大排序
    #include <set>
    */
    set<int> se;                  // 定义⼀个空集合se
    se.insert(1);                 // 向集合插入值 1
    cout << *(s.begin()) << endl; // 输出集合的第一个元素
    for (auto it = se.begin(); it != se.end(); it++)
    { // 用迭代器遍历se
        cout << *it << " ";
    }
    se.find(2); // find 方法，用于查找集合内元素，返回迭代器
    cout << endl
         << (se.find(2) != se.end()) << endl; // 如果结果等于 se.end() 表示没找到
    se.erase(1);                              // 删除 1 这个元素

    /* 映射 map */
    /*
    map 是键值对
    #include <map>
    */
    map<string, int> ma;         // 定义一个 map ，key 是 string 类型， value 是 int 类型
    ma["hello"] = 2;             // 存入 key 为 hello，value 为 2 的键值对
    cout << ma["hello"] << endl; // 访问 key 为 hello 的 value，key 不存在则返回 0
    ma["hello"] = 3;             // 修改值为 3
    for (auto it = ma.begin(); it != ma.end(); it++)
    {
        // 用迭代器遍历，key 用 it->first 访问，value 用 it->second 访问
        cout << it->first << " " << it->second << endl;
        cout << ma.rbegin()->first << " " << ma.rbegin()->second << endl; // 访问map的最后⼀个元素，输出它的键和值
        cout << ma.size() << endl;                                        // 输出 map 的元素个数
    }

    /* 栈 stack */
    /*
    #include <stack>
    */
    stack<int> st; // 定义一个空栈 st
    for (int i = 0; i < 10; i++)
    {
        st.push(i); // 将 i 压入栈 s 中
    }
    cout << st.top() << endl;  // 访问栈顶元素
    cout << st.size() << endl; // 输出元素个数
    st.pop();                  // 移除栈顶元素

    /* 队列 queue */
    /*
    #include <queue>
    */
    queue<int> q; // 定义一个空队列
    for (int i = 0; i < 6; i++)
    {
        q.push(i); // 将 i 压入队列
    }
    cout << q.front() << " " << q.back() << endl; // 访问队列的队首元素和队尾元素
    cout << q.size() << endl;                     // 输出队列的元素个数
    q.pop();                                      // 移除队首元素

    /* unordered_map 和 unordered_set */
    /*
    #include <unordered_map>
    #include <unordered_set>
    unordered_map 和 map （或者 unordered_set 和 set ）的区别是:
    map 会按照键值对的键 key 进⾏排序（ set ⾥⾯会按照集合中的元素⼤⼩进⾏排序，从⼩到⼤顺序）
    */

    /* 位运算 bitset */
    /*
   bitset 用来处理二进制非常方便
   #include <bitset>
   */
    bitset<5> b("11");               // 5 表示 5 个二进制位
                                     /*
    初始化方式：
    bitset<5>b; // 都为 0;
    bitset<5>b(u); // u 为 unsigned int，如果 u = 1，则初始化为 10000
    bitset<5>b(s); // s 为 string，如"1101"->"10110"
    bitset<5>b(s,pos,n); // 从字符串的 s[pos] 开始，n 位长度
    */
    b.any();                         // b 中是否存在 1 的二进制位
    b.none();                        // b 中不存在 1 吗？
    b.count();                       // b 中 1 的二进制的个数
    b.size();                        // b 中二进制位个数
    b.test(2);                       // 测试下标位 2 处是否二进制位为 1
    b.set(4);                        // 把下标为 4 处置 1
    b.reset();                       // 所有位归零
    b.reset(3);                      // 下标 3 出归零
    b.flip();                        // 所有二进制位逐位取反
    unsigned long ab = b.to_ulong(); // b 转换为 unsigned long 类型

    /* sort 函数 */
    /*
    sort 函数主要是对一个数组排序
    #include <algorithm>
    */
    vector<int> ve;
    for (int i = 0; i < 10; i++)
    {
        cin >> ve[i];
    }
    sort(ve.begin(), ve.end());      // 没有 cmp 函数时默认按照从小到大排列
    sort(ve.begin(), ve.end(), cmp); // 指定 cmp 函数，按 cmp 函数规则排列

    /* cctype */
    /*
    即 C 中的 ctype.h 
    #include <cctype>
    */
    char c;
    cin >> c;
    if (isalpha(c))
    {
        // 判断是否是字符串
        cout << "c is alpha";
    }
    /*
   islower 小写字母
   issupper 大写字母
   isalnum 字母大小写 + 数字
   isblank space 和 \t
   isspace space、\t、\r、\n
   */
    char sup = 'A';
    char t = tolower(sup); // 将 sup 转换为小写后赋值给 t

    /* C++11 新特性 */
    /* 使用 C++11 的特性，可能需要在编译参数里加上 -std=c++11 */

    // auto 可以让编译器根据初始类型判断变量类型
    auto x = 100; // int
    auto y = 1.5; // double

    // 基于范围的 for 循环
    int arr[4] = {0, 1, 2, 3};
    for (int i : arr)
        cout << i << endl; // 输出数组中每一个元素的值

    for (int &i : arr) // i 为引用变量
        i = i * 2;     // 数组中没个元素乘以 2

    /* to_string 特性 */
    /*
    #include <string>
    */
    string ts1 = to_string(123); // 将 123 转换成字符串
    printf("%s\n", ts1.c_str()); // 使用 printf 输出 string 需要加上 .c_str()

    /* stoi 和 stod */
    /*
    使⽤ stoi(string to int)、 stod(string to double) 可以将字符串 string 转化为对应的 int 型、 double 型变量
    stoi如果遇到的是⾮法输⼊:
    会⾃动截取最前⾯的数字，直到遇到不是数字为⽌
    如果最前⾯不是数字，会运⾏时发⽣错误
    stod如果是⾮法输⼊:
    会⾃动截取最前⾯的浮点数，直到遇到不满⾜浮点数为⽌
    如果最前⾯不是数字或者⼩数点，会运⾏时发⽣错误
    如果最前⾯是⼩数点，会⾃动转化后在前⾯补0

    stof (string to float)
    stold (string to long double)
    stol (string to long)
    stoll (string to long long)
    stoul (string to unsigned long)
    stoull (string to unsigned long long)
    */
    string str = "123";
    int oi = stoi(str);
    str = "3.1415";
    double od = stod(str);

    return 0;
}