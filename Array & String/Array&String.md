# 第一节 数组和字符串

## 1. 字符串匹配问题

两种比较容易实现的字符串比较算法：

* Brute-Force算法：顺序遍历母串，将每一个字符作为匹配的起始字符，判断是否匹配子串。时间负责度o(m*n)
  ```cpp
  // Brute - Force
  char * StrStr (const cahr * str, const char * target)
  {
      if (!*target)
  }
  