# tree-sitter-strace

## Developement

```
npm install
npm generate
npm test
npm test:update # to update tests when developpping
npx tree-sitter parse examples/* --quiet --stat
```

## Use with helix

Add this to helix languages.toml
```toml
[[grammar]]
name = "strace"
source = {git = "https://github.com/sigmaSd/tree-sitter-strace", rev = "a0f6c50ae4087a9299f055d0f30fe94fd98189a4"} # use latest commit

[[language]]
name = "strace"
scope = "source.strace"
file-types = ["strace"]
roots = []
```
```
hx -g fetch && hx -g build
mkdir -p ~/.config/helix/runtime/queries/strace
ln -s ~/.config/helix/runtime/grammars/sources/strace/queries/highlights.scm  ~/.config/helix/runtime/queries/strace/highlights.scm
hx test.strace # should work now
```

![image](https://github.com/sigmaSd/tree-sitter-strace/assets/22427111/de5a97b5-ad96-4057-9801-8db24a242d9d)
![image](https://github.com/sigmaSd/tree-sitter-strace/assets/22427111/eb2ddb87-e1ba-43f0-8273-204a834d2870)


