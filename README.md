# studygit

练 Git 用的仓库。

## 连接信息

| 项目 | 值 |
| --- | --- |
| GitHub 地址 | https://github.com/Zeyu-Li2007/studygit |
| 远端地址 | `git@github.com:Zeyu-Li2007/studygit.git` |
| 连接方式 | SSH（密钥 `~/.ssh/id_ed25519`） |
| 默认分支 | `main` |
| 提交身份 | Zeyu Li &lt;3360289311@qq.com&gt; |

## 上传文件

**最简单**：文件放进仓库文件夹，双击 `push-to-github.bat`。

**命令行**：

```bash
git pull --rebase
git add .
git commit -m "说明"
git push
```

**VS Code**：`Ctrl+Shift+G` 打开源码管理 → 点 `+` 暂存 → 写说明 → ✓ 提交 → 同步更改。

## 常用命令

```bash
git status              # 看当前改了什么
git log --oneline       # 看提交历史
git pull                # 拉取远端更新
git diff                # 看具体改动内容
git restore <文件>       # 放弃某个文件的改动
git revert <版本号>      # 撤销某次提交
```

## 注意事项

- 单个文件不能超过 100 MB，仓库建议控制在 1 GB 内
- 不想上传的文件写进 `.gitignore`，git 会自动跳过
- 本机 `github.com` 网页被 DNS 污染打不开，需要时双击上级目录的 `open-github.bat`
- git 走 SSH 端口不受影响，push / pull / clone 一直正常
