# pyPackage build by bazel

### 代理

```shell
export https_proxy="http://127.0.0.1:1080"
export http_proxy="http://127.0.0.1:1080"
```

### bazel install

```shell
wget  https://github.com/bazelbuild/bazel/releases/download/6.1.1/bazel-6.1.1-installer-linux-x86_64.sh
sudo bash bazel-6.1.1-installer-linux-x86_64.sh
which bazel
```

#### 3. 安装 wheel

```python
pip install --user animal*.whl
sudo pip uninstall animal
```
