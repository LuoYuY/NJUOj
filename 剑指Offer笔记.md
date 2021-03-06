# 剑指Offer笔记

## JZ1 二维数组中的查找 - 数组

### 题目描述

在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

| type | 特征 | 思路               |
| ---- | ---- | ------------------ |
| 数组 | 有序 | 遍历每行，二分查找 |

- tip：二维数组注意判空

> [JZ1 二维数组中的查找](https://www.nowcoder.com/practice/abc3fe2ce8e146608e868a70efebf62e?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1)

## JZ2 替换空格 - 字符串

### 题目描述

请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

| type   | 特征                                                         | 思路                 |
| ------ | ------------------------------------------------------------ | -------------------- |
| 字符串 | 1. 不能直接使用java中的replace（）2.提供了可变字符串StringBuffer 3.在原字符串上替换 | 扩容后，从后往前遍历 |

- StringBuffer方法 ： .length() 获取长度 . charAt(index) 获取字符 .setLength(newLen) 扩容 .setCharAt(index,'c') 设置字符 .toString() 转字符串

> [JZ2 替换空格](https://www.nowcoder.com/practice/4060ac7e3e404ad1a894ef3e17650423?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1)

## JZ3 从尾到头打印链表 - 链表 

### 题目描述

输入一个链表，按链表从尾到头的顺序返回一个ArrayList。

| type | 特征 | 思路                           |
| ---- | ---- | ------------------------------ |
| 链表 | 链表 | 1.存入栈 2.存入数组翻转 3.递归 |

- ListNode数据结构 int val； ListNode next；

> [JZ3 从尾到头打印链表](https://www.nowcoder.com/practice/d0267f7f55b3412ba93bd35cfa8e8035?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1)

## JZ4 重建二叉树 - 树 dfs 递归

### 题目描述

输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。

| type | 特征         | 思路           |
| ---- | ------------ | -------------- |
| 树   | 重复建树动作 | 深度遍历，递归 |

- null/0 -> null ; 1/叶子节点 ->new node ; 其他：建立rootNode，计算left 与 right ，返回root
- Arrays.copyOfRange(pre,1,rootIndex+1) ： 复制的是 pre数组的 [1，rootIndex]  返回int []

> [JZ4 重建二叉树](https://www.nowcoder.com/practice/8a19cbe657394eeaac2f6ea9b0f6fcf6?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1)

## JZ5 用两个栈实现队列 - 栈 队列

### 题目描述

用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。

| type    | 特征     |                                                              |
| ------- | -------- | ------------------------------------------------------------ |
| 栈 队列 | 数据结构 | 入队列时存在stack1，出队列时，将stack1倒序存入stack2. stack2的pop()即为队列的pop(). 出栈为空时，从stack1中取数（ 出stack2= 供方） |

> [JZ5 用两个栈实现队列](https://www.nowcoder.com/practice/54275ddae22f475981afa2244dd448c6?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1&tab=answerKey)

## JZ6 旋转数组的最小值 - 二分

### 题目描述

把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。

| type | 特征 |                                                        |
| ---- | ---- | ------------------------------------------------------ |
| 数组 | 有序 | 二分查找。确定target，确定target必然在的范围（左，右） |

- mid指向两个数中的左数
- 二分查找的规律：
  1. 有target: 三个条件判断，mid 与target比较 
  2. 无target：找到缩小范围的规律，三个条件判断为 mid与left和right比较，其中mid=left/right时，考虑元素重复，利用有序规律right--或left++

> [JZ6 旋转数组的最小值](https://www.nowcoder.com/practice/9f3231a991af4f55b95579b44b7a01ba?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1&tab=answerKey)

## JZ7 斐波那契数列 - 递归

### 题目描述

大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项（从0开始，第0项为0，第1项是1）。F(n) = F(n-1) + F(n-2)  0 1 1 2 3 5 

- 迭代和递归两种方式，考虑到栈溢出 使用迭代

> [JZ7 斐波那契数列](https://www.nowcoder.com/practice/c6c7742f5ba7442aada113136ddea0c3?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1&tab=answerKey)

## JZ8 青蛙跳台阶 - 动态规划？

### 题目描述

一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。

| type     | 特征       |      |
| -------- | ---------- | ---- |
| 动态规划 | ”有多少种“ |      |

- 

## JZ9 变态跳台阶 - 贪心

### 题目描述

一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。

| type | 特征       |      |
| ---- | ---------- | ---- |
| 贪心 | ”有多少种“ | 递归 |

> [JZ9 变态跳台阶](https://www.nowcoder.com/practice/22243d016f6b47f2a6928b4313c85387?tpId=13&tqId=11162&rp=1&ru=%2Fta%2Fcoding-interviews&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking&tab=answerKey)

## JZ10 矩阵覆盖 - 递归

> [JZ10 矩阵覆盖](https://www.nowcoder.com/practice/72a5a919508a4251859fb2cfb987a0e6?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1&tab=answerKey)

## JZ11 二进制中1的个数 - 位运算

### 题目描述

输入一个整数，输出该数32位二进制表示中1的个数。其中负数用补码表示。

| type   | 特征     |                              |
| ------ | -------- | ---------------------------- |
| 位运算 | 二进制数 | 位运算。二进制数的逐位读取。 |

- 常识1：在Java中，数值一律用补码来表示和存储。

- 常识2：正数的原码、反码、补码都是其本身。

- [位运算符号](https://blog.csdn.net/ytulnj/article/details/103808904)

- 二进制数的逐位读取：

  ```java
  //方法1 移动flag，判断n的各位 flag = 00000001
  while(flag!=0){
      //判断最后一位是否为1 
      if( (n&flag) != 0 ) {
          //为1
          count++;
      }
      flag = flag << 1;
  }
  ```

  ```java
  //方法2 移动test，判断test的各位 n = 10010011
  while(test!=0){
  	//判断最后一位为1 
  	if( (n&flag) != 0 ) {
  		count++;
  	}
  	test = test >> 1;
  }
  ```

  

> [JZ11 二进制中1的个数](https://www.nowcoder.com/practice/8ee967e43c2c4ec193b040ea7fbb10b8?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1&tab=answerKey)

## JZ12 数值的整数次方 - 快速幂算法、位运算

### 题目描述

给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。

保证base和exponent不同时为0

| type         | 特征   |                                        |
| ------------ | ------ | -------------------------------------- |
| 数学，快速幂 | 位运算 | 位运算。二进制数的逐位读取。快速幂算法 |

- [快速幂算法](https://oi-wiki.org/math/quick-pow/)
- 经典题型2 ：次方取余

> [JZ12 数值的整数次方](https://www.nowcoder.com/practice/1a834e5e3e1a4b7ba251417554e07c00?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1&tab=answerKey)



## JZ13 调整数组顺序使奇数位于偶数前面 - 数组

输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。

| type | 特征                             |                                                              |
| ---- | -------------------------------- | ------------------------------------------------------------ |
| 数组 | 数组顺序，前半后半，相对位置不变 | 1 快速排序的变种？-只能保证‘前半后半’ 2 插入排序-能够保持稳定，相对位置不变 |

- 数组有关 - 排序算法
- 稳定的排序算法：冒泡 插排 归并 桶排序 基数排序
- 其他：选择排序 快排
- [排序算法](https://www.runoob.com/w3cnote/ten-sorting-algorithm.html)

> [JZ13 调整数组顺序使奇数位于偶数前面](https://www.nowcoder.com/practice/beb5aa231adc45b2a5dcc5b62c93f593?tpId=13&tqId=11166&rp=1&ru=%2Fta%2Fcoding-interviews&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking&tab=answerKey)

## JZ14 链表中的倒数第k个节点 - 链表 双指针

输入一个链表，输出该链表中倒数第k个结点。

| type | 特征 |                                                              |
| ---- | ---- | ------------------------------------------------------------ |
| 链表 | 链表 | 经典双指针思路：p1先走k步，p1 p2一起走，p2到链表尾时，p1即为需要的节点 |

- 双指针+链表

> [JZ14 链表中的倒数第k个节点](https://www.nowcoder.com/practice/529d3ae5a407492994ad2a246518148a?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1&tab=answerKey)

## JZ15 反转链表 - 链表

输入一个链表，反转链表后，输出新链表的表头。

| type | 特征 |                               |
| ---- | ---- | ----------------------------- |
| 链表 | 链表 | 反转链表思路：1 三指针 2 递归 |

- 三指针
- 先写循环体 再定义变量
- 注意：链表尾置null

> [JZ15 反转链表](https://www.nowcoder.com/practice/75e878df47f24fdc9dc3e400ec6058ca?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1&tab=answerKey)

## JZ16 合并两个有序链表 - 链表

输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。

| type | 特征       |              |
| ---- | ---------- | ------------ |
| 链表 | 链表，有序 | 普通归并思想 |

- new ListNode(1)

> [JZ16 合并两个有序链表](https://www.nowcoder.com/practice/d8b6b4358f774294a89de2a6ac4d9337?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1&tab=answerKey)

## JZ17 树的子结构 - 树 深度遍历

输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）

| type | 特征   |                                                              |
| ---- | ------ | ------------------------------------------------------------ |
| 树   | 两棵树 | 熟练使用递归思想。子树和子结构的思路相同。先在大树中深度遍历，找到相同的根节点，然后再比较两棵树是否完全相同 |

- 依然使用递归

> [JZ17 树的子结构](https://www.nowcoder.com/practice/6e196c44c7004d15b1610b9afca8bd88?tpId=13&tqId=11170&rp=1&ru=%2Fta%2Fcoding-interviews&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking&tab=answerKey)

## JZ18 树的镜像 - 树

操作给定的二叉树，将其变换为源二叉树的镜像。

| type | 特征   |              |
| ---- | ------ | ------------ |
| 树   | 一棵树 | 左右子树交换 |

- 依然使用递归

> [JZ18 树的镜像](https://www.nowcoder.com/practice/564f4c26aa584921bc75623e48ca3011?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1&tab=answerKey)

## JZ19 顺时针打印矩阵 - 数组

输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字，例如，如果输入如下4 X 4矩阵： 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 则依次打印出数字1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.

| type | 特征     |                 |
| ---- | -------- | --------------- |
| 数组 | 二维数组 | 二维数组 = 遍历 |

-  

> 



JZ18



## JZ20 包含min函数的栈 - 数据结构 栈

定义栈的数据结构，请在该类型中实现一个能够得到栈中所含最小元素的min函数（时间复杂度应为O（1））。

| type     | 特征             |            |
| -------- | ---------------- | ---------- |
| 数据结构 | 改造栈（优化栈） | 增加辅助栈 |

-  

> [JZ20 包含min函数的栈](https://www.nowcoder.com/practice/4c776177d2c04c2494f2555c9fcc1e49?tpId=13&tqId=11173&rp=1&ru=%2Fta%2Fcoding-interviews&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking&tab=answerKey)





## JZ21 栈的压入、弹出序列 - 数据结构 栈

输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是否可能为该栈的弹出顺序。假设压入栈的所有数字均不相等。例如序列1,2,3,4,5是某栈的压入顺序，序列4,5,3,2,1是该压栈序列对应的一个弹出序列，但4,3,5,1,2就不可能是该压栈序列的弹出序列。（注意：这两个序列的长度是相等的）

| type     | 特征                   |                      |
| -------- | ---------------------- | -------------------- |
| 数据结构 | 压入弹出序列的判断条件 | 增加辅助栈，模拟入栈 |

-  与栈有关 - 增加一个辅助栈
-  多利用增加空间的方法

> [JZ21 栈的压入压出序列](https://www.nowcoder.com/practice/d77d11405cc7470d82554cb392585106?tpId=13&rp=1&ru=%2Fta%2Fcoding-interviews&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking&tab=answerKey)



## JZ22 从上往下打印二叉树 - 树的层序遍历 队列

从上往下打印出二叉树的每个节点，同层节点从左至右打印。

| type | 特征 |                  |
| ---- | ---- | ---------------- |
| 树   |      | 利用队列层序遍历 |

-  Queue<TreeNode> q = new LinkedList();
- q.add("j") q.poll()

> [JZ22 树的层序遍历](https://www.nowcoder.com/practice/7fe2212963db4790b57431d9ed259701?tpId=13&tqId=11175&rp=1&ru=%2Fta%2Fcoding-interviews&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking&tab=answerKey)

## JZ23 二叉搜索树的后序遍历序列 - BST 后序遍历

输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。如果是则返回true,否则返回false。假设输入的数组的任意两个数字都互不相同。

| type | 特征       |                                                              |
| ---- | ---------- | ------------------------------------------------------------ |
| 树   | 二叉搜索树 | BST的后序序列的合法序列是，对于一个序列S，最后一个元素是x （也就是根），如果去掉最后一个元素的序列为T，那么T满足：T可以分成两段，前一段（左子树）小于x，后一段（右子树）大于x，且这两段（子树）都是合法的后序序列。----- 每个子树都是BST树，符合BST树的特点。 |

- 二叉搜索树的特征： 左子树小于顶点，右子树大于顶点。
- 二叉搜索树的遍历序列有明显的特征。可以分为两段（小于顶点和大于顶点）

> [JZ23 二叉搜索树的后序遍历](https://www.nowcoder.com/practice/a861533d45854474ac791d90e447bafd?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1&tab=answerKey)

## JZ24 二叉树中和为某一值的路径 - 带记忆的DFS-！！！反复学习

输入一颗二叉树的根节点和一个整数，按字典序打印出二叉树中结点值的和为输入整数的所有路径。路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径

| type | 特征 |      |
| ---- | ---- | ---- |
| 树   | 树   |      |

- 

> [JZ24 二叉树中和为某一值的路径](https://www.nowcoder.com/practice/b736e784e3e34731af99065031301bca?tpId=13&tags=&title=&diffculty=0&judgeStatus=0&rp=1&tab=answerKey)



## JZ25 复杂链表的复制 - 数据结构 链表

输入一个复杂链表（每个节点中有节点值，以及两个指针，一个指向下一个节点，另一个特殊指针random指向一个随机节点），请对此链表进行深拷贝，并返回拷贝后的头结点。（注意，输出结果中请不要返回参数中的节点引用，否则判题程序会直接返回空

| type     | 特征                   |                      |
| -------- | ---------------------- | -------------------- |
| 数据结构 | 压入弹出序列的判断条件 | 增加辅助栈，模拟入栈 |

-  与栈有关 - 增加一个辅助栈
-  多利用增加空间的方法

> [JZ21 栈的压入压出序列](



## JZ25 字符串的排列

输入一个字符串,按字典序打印出该字符串中字符的所有排列。例如输入字符串abc,则按字典序打印出由字符a,b,c所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。

| type     | 特征     |                      |
| -------- | -------- | -------------------- |
| 动态规划 | 排列组合 | 动态规划：递归三部曲 |

递归三部曲：

1. 递归函数的功能：`dfs(int pos, string s)`, 表示固定字符串`s`的`pos`下标的字符`s[pos]`
2. 递归终止条件：当`pos+1 == s.length()`的时候，终止，表示对最后一个字符进行固定，也就说明，完成了一次全排列
3. 下一次递归：`dfs(pos+1, s)`, 很显然，下一次递归就是对字符串的下一个下标进行固定







## JZ38 二叉树的深度 - 递归/层序遍历 ！！

输入一棵二叉树，求该树的深度。从根结点到叶结点依次经过的结点（含根、叶结点）形成树的一条路径，最长路径的长度为树的深度。

| type | 特征 |          |
| ---- | ---- | -------- |
| 树   | 树   | 树的深度 |

- 

> [JZ38 二叉树的深度](https://www.nowcoder.com/practice/435fb86331474282a3499955f0a41e8b?tpId=13&tqId=11191&rp=1&ru=%2Fta%2Fcoding-interviews&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking&tab=answerKey)
