

BibliotecaApp/
├── src/               # Pasta principal do código fonte
│   ├── main.c         # Arquivo principal (controla o fluxo do programa)
│   ├── menu.c         # Arquivo que gerencia o menu
│   ├── livros.c       # Arquivo para funções de manipulação de livros
│   ├── persistencia.c # Arquivo para salvar/carregar dados (opcional)
│   ├── utils.c        # Funções auxiliares gerais (ex.: validações, leitura)
│   ├── headers/       # Pasta para arquivos de cabeçalho (organização)
│   │   ├── menu.h
│   │   ├── livros.h
│   │   ├── persistencia.h
│   │   ├── utils.h
├── data/              # Armazena arquivos de dados (ex.: livros salvos)
│   ├── livros.txt     # Arquivo que contém dados do catálogo (persistido)
├── Makefile           # Script de build para compilar o projeto
├── README.md          # Documentação básica do sistema