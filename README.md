# AtCoder-Practice
AtCoder個人練習用  
solvedの中に解いた問題を入れていきます。

## startContest.sh
コンテスト開始時に使用。コンテスト名を引数に取る。A〜Fのファイルを自動で作成する。

```
$ ./startContest.sh ABC141
```

## cdo（sh）
コンパイル＋テスト用。cppファイルを引数に取る。  
該当のファイルをコンパイルし、自動でtestを標準入力として受け取り、実行する。

```
$ ./cdo ABC141_A.cpp
```

