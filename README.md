# 「複数言語でプログラミング」学習用元ネタ
かなりメモちっくです。  
あとで、もうちょいと直す…と思います(苦笑

## プログラムの実行方法
何となく推測してください(あとで補足説明付け足すかも…)

gcc t.c  
./a.out

g++ t.cpp  
./a.out

javac t.java  
java t

php t.php

ruby t.rb

./t.pl

./t.py

bash ./t.sh

bf ./t.bf

go build t.go  
./t


## 環境準備時の元ネタ
めずらしくyum。…時間が無かったんだよ orz  
＆ 精査してないんで「間違えたコマンド」も載ってます…これも今度整理しまふ orz

yum install php  
yum install perl  
yum install java  
yum install java-1.7.0-openjdk-devel.x86_64  
yum install ruby  
type python  
yum -y install gcc-objc  
yum install git
yum install make
git clone https://github.com/kgabis/brainfuck-c.git
cd brainfuck-c/
make
ln -s /root/Programming_in_multiple_languages/brainfuck-c/bf  /usr/bin/
cd /usr/src
yum install wget
wget https://storage.googleapis.com/golang/go1.8.3.src.tar.gz
tar zvxf go1.8.3.src.tar.gz
cd go/src
mkdir tmp
wget https://storage.googleapis.com/golang/go1.4.2.linux-amd64.tar.gz
tar zxvf go1.4.2.linux-amd64.tar.gz -C tmp/
mv tmp/go ~/go1.4
./all.bash
 /usr/src/go/bin/go /usr/bin/





