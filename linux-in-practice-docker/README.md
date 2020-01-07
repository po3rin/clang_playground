# 「Linuxの仕組み」本の実験用 Dockerfile

Linuxの仕組み (武内　覚　著)
https://www.amazon.co.jp/dp/477419607X/ref=cm_sw_r_tw_dp_U_x_dsmfEbHGAX4XD

Linuxの仕組み のコードを動かすための Ubuntu 環境 Dockerfile を準備しています。

本のサンプルコード
https://github.com/satoru-takeuchi/linux-in-practice

```bash
# Ubuntuイメージのビルド
$ make build

# 実行用
$ make exec
```

ローカルのエディターでコードをかけるようにファイルをマウントしています。
