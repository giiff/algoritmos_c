# Algoritmos
Códigos em linguagem C da disciplina Algoritmos do Curso de Tecnólogo em Análise e Desenvolvimento de Sistemas.

Os códigos estão organizados por aula em pastas noeadas como aulaiii, onde iii é um número inteiro sequencial.

A sequência obedece a um nível gradativo de apredizado/esforço de acordo com a ementa da disciplina.

## Como obter os códigos deste repositório ?

### Primeira vez que vai baixar o repositório ?

* No terminal de seu Linux, escolha e acesse a pasta de trabalho e digite/cole:
```console
git clone https://github.com/giiff/algoritmos.git
```

### Já tem o repositório na máquina e quer baixar as últimas atualizações ?

* No terminal de seu Linux, acesse a pasta de trabalho e digite/cole:
```console
git pull
```

## Como instalar o compilador C/C++ em meu computador?

* No terminal de seu Linux Ubuntu, Mint ou outros derivados de Debian digite/cole:
```console
sudo apt install build-essential gcc
```

* No terminal de seu Linux Fedora ou outros derivados de Red Hat digite/cole:
```console
sudo dnf install gcc gcc-c++
```

* No Windows, siga os passos do tutorial abaixo:
[How to install C++ on Windows](https://preshing.com/20141108/how-to-install-the-latest-gcc-on-windows)


## Como compilar meu código fonte?
* No terminal de seu Linux digite/cole:
```console
gcc meu_programa.c -o meu_executavel
```

## Como executar meu programa compilado ?
* No terminal de seu Linux digite/cole:
```console
./meu_executavel
```

# Gerenciando o MEU PRÓPRIO repositório

## Como criar um repositório novo?

![](https://github.com/giiff/algoritmos/blob/master/img/git01.png)

## Primeira vez que vai baixar o repositório ?

* No terminal de seu Linux, escolha e acesse a pasta de trabalho e digite/cole:
```console
https://github.com/waldeyr/meurepositorio.git
```

## Já tem o repositório na máquina e quer baixar as últimas atualizações ?

* No terminal de seu Linux, acesse a pasta de trabalho e digite/cole:
```console
git pull
```

## Como adicionar arquivos que eu alterei ou criei?

`git add <arquivo.c>`

## Como confirmar as alterações antes do upload?

`git commit -m "Uma mensagem de amor"`

## Como fazer o upload?

`git push origin master`

