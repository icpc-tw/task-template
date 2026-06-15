# The 2026 ICPC Asia Yunlin Regional Contest — Problem Set

## Directory Structure

```
<ProblemDir>/
├── problem.tex           # \problem{dir}{title}{time}{memory}，由 main.tex include
├── statement.tex         # 題目敘述
├── input.tex             # 輸入格式
├── output.tex            # 輸出格式
├── spec.tex              # 限制條件
├── hint.tex              # 解題提示（不放入題本）
├── code/                 # verifyproblem 的 submissions 目錄
│   ├── accepted/         # AC code
│   └── wrong_answer/     # WA code (其餘錯誤可自行增加其他資料夾)
└── dom/                  # DOMjudge 格式，供 verifyproblem 使用
    ├── problem.yaml
    ├── problem.ini
    ├── data/
    │   ├── sample/       # 範例測資 (1.in / 1.ans)
    │   └── secret/       # 隱藏測資 (001-name.in / .ans)
    ├── input_validators/cpp_validator/
    │   ├── validator.cpp
    │   └── testlib.h
    └── submissions/          # 可省略，改以 code/ 指定（見 task-template）
        ├── accepted/
        └── wrong_answer/
```

## 編譯題本 PDF

```bash
docker run --rm -v "$(pwd)":/work -w /work \
  finnlidbetter/problemtools-arm-full \
  pdflatex main.tex
```

## 驗證題目（verifyproblem）

```bash
docker run --rm -v "$(pwd)":/work -w /work \
  finnlidbetter/problemtools-arm-full \
  verifyproblem /work/<ProblemDir>/dom /work/<ProblemDir>/code
```
