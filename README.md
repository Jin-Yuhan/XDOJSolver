# 自动提交 XDOJ 题目
你已经是一个成熟的 OJ 了，该学会自己交题了。

# 文件用途
* **duiCeFuKu.js**

    打开对策府库公众号的 C 语言 OJ 答案的网页。在浏览器控制台中执行代码，然后可以得到一段 json 文本。json 中包含了当前页面中所有代码及对应题目 id。

* **generator.py**

    将之前得到的 json 文本粘贴到文件后保存到 `generator_configs` 文件夹中。执行 `generator.py` 会在 `solutions` 文件夹中生成对应 C 语言代码文件。

* **uploader.py**

    修改代码中的配置后，执行该文件，即可开始摸鱼~

* **solutions 文件夹**

    保存了 OJ 题目的答案。文件命名规则：`题目id.cpp`。目前只有部分题目的答案，且都直接来自对策府库，正确性无法保证。

# 写在最后
欢迎 PR！让我们一起摸鱼！

**注意要在自己题目都会做的前提下使用哦（小声**

**声明：使用该程序造成的一切不良后果由使用者承担，与该程序作者以及贡献者无关。**