# tree-sitter-strace

## Developement

```
npm install
npx tree-sitter generate
npx tree-sitter test
npx tree-sitter parse examples/* --quiet --stat
```

## Use with helix
- add this to helix languages.toml
```toml
[[grammar]]
name = "strace"
source = {git = "https://github.com/sigmaSd/tree-sitter-strace", rev = "fbfcf5087e851bfe0094fcba04118c72992c7f26"} # use latest commit

[[language]]
name = "strace"
scope = "source.strace"
file-types = ["strace"]
roots = []
```
- `mkdir -p ~/.config/helix/runtime/queries/strace`
- `ln -s ~/.config/helix/runtime/grammars/sources/strace/queries/highlights.scm  ~/.config/helix/runtime/queries/strace/highlights.scm`
- `hx -g fetch && hx -g build`
- `hx test.strace # should work now`

## TODO

- [ ] figure out how to make first-line-regex work
- [ ] the tests still have some errors (grep for ERROR)


![image](https://github.com/sigmaSd/tree-sitter-strace/assets/22427111/de5a97b5-ad96-4057-9801-8db24a242d9d)
![image](https://github.com/sigmaSd/tree-sitter-strace/assets/22427111/eb2ddb87-e1ba-43f0-8273-204a834d2870)


