# IntroductionToAlgorithms_3_c_realize
##《算法导论》书籍第三版的C语言实现，包含详细的注释。

<img="OtherFiles/titlepic.png" alt="封面图片" width="300">

 ![封面图片](OtherFiles/titlepic.png)

渐进上界与渐进下界：

$\Theta(g(n))=\{f(n):存在正常量c_1,c_2,n_0,使得对所有的n\geq n_0,有0\leq c_1g(n)\leq f(n)\leq c_2g(n)\}$

渐进上界：

$O(g(n))=\{f(n):存在正常量c,n_0,使得对所有的n\geq n_0,有0\leq f(n)\leq cg(n)\}$

非渐进紧确的上界：

$\omicron(g(n))=\{f(n):对任意正常量c,存在正常量n_0,使得对所有的n\geq n_0,有0\leq f(n)\leq cg(n)\}$

渐进下界：

$\Omega(g(n))=\{f(n):存在正常量c,n_0,使得对所有的n\geq n_0,有0\leq cg(n)\leq f(n)\}$

非渐进紧确的下界：

$\omega(g(n))=\{f(n):对任意正常量c,存在正常量n_0,使得对所有的n\geq n_0,有0 \leq cg(n)\leq f(n)\}$

类似实数的性质，具有传递性，自反性，对称性，转置对称性等，但没有三分性
