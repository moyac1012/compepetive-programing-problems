# UnionFind(Disjoint Set Union)

<details><summary>UnionFindについて</summary>
N個の要素がそれぞれ単独で存在している状態から開始して、mergeが呼ばれるたびにグループが大きくなっていく。
mergeとsameが非常に高速に判定できる。
</details>

```c++
atcoder::dsu uf(n);
```

- merge(u,v): uを含むグループと、vを含むグループを統合して1つの大きなグループを作る
- same(u,v): u,vが同一のグループに属しているかどうかを判定する

各クエリの計算量は$O(\alpha(N))$。$\alpha(N)$はアッカーマン関数の逆関数。

# Fenwick Tree (BIT: Binary Indexed Tree)

<details><summary>BITについて</summary>
長さNの数列$a_0,...,a_{N-1}$が与えられたときに、ある区間の総和と数列中の値に値を加算するデータ構造。
</details>

```c++
atcoder::fenwick_tree uf(n);
```

- add(p,x): p番目にxを加算
- sum(l,r): [l, r)の区間の総和を返す

配列の要素数をnとして時に、各クエリ、$O(\log(n))$

# floor sum

<details><summary>floor sumについて</summary>
項数N、初項B, 公差Aの等差数列をMで割った商を足し合わせたものを高速に求める。

嬉しさがあまりわからなかったが、直線y=(Ax+B)/Mの下にある格子点の個数を数えているのと同じと言われて、少し腑に落ちた。

あとは問題ごとの考察力が足りればここの帰着できるね。それが簡単にできれば苦労しないんですが。

https://x.com/kyopro_friends/status/1304063876019793921?ref_src=twsrc%5Etfw%7Ctwcamp%5Etweetembed%7Ctwterm%5E1304063876019793921%7Ctwgr%5E2619d7e52086337e2ff8006c618ad9737924df46%7Ctwcon%5Es1_&ref_url=https%3A%2F%2Fdrken1215.hatenablog.com%2Fentry%2F2022%2F12%2F14%2F235718

</details>

項数N、初項B, 公差Aの等差数列をMで割った商を足し合わせたものを高速に求める。

```c++
atcoder::floor_sum(N, M, A, B)
```

データ構造ではなく関数なので、そのまま使える。

- ```atcoder::floor_sum(N, M, A, B)```: 項数N、初項B, 公差Aの等差数列をMで割った商を足し合わせたものを返す

$O(N+M+A+B)$で計算できる。