<img width=100% src="https://capsule-render.vercel.app/api?type=waving&color=00bfbf&height=120&section=header"/>
<h1 align="center"><img align="center" style="border-radius: 50%;" src="https://moodle.embarcatech.cepedi.org.br/pluginfile.php/1/theme_moove/logo/1733422525/Group%20658.png" width="200px;" alt=""><br>Microcontrolador</h1>

<h3 align="center">
    Microcontrolador em Linguagem C
</h3>

<h4 align="center">
	🚧  Em Andamento 🚧
</h4>

---

Tabela de conteúdos
=================
<!--ts-->
   * [Sobre o projeto](#-sobre-o-projeto)
   * [Layout Repositorio Github](#-layout-repositorio-github)
   * [Funcionalidades](#-Funcionalidades)
   * [Como executar o projeto](#-como-executar-o-projeto)
     * [Pré-requisitos](#-pré-requisitos)
   * [Imagens do Projeto](#-imagens-do-projeto)
     * [Imagem](#-projeto-na-extensão-wokwi-simulator-no-visual-studio)
     * [Vídeo](#-video-do-projeto)
   * [Tecnologias](#-tecnologias)
     * [Websites](#-websites)
     * [Utilitários](#user-content-server--nodejs----typescript)
   * [Contribuidores](#-contribuidores)
   * [Licença](#-licença)
<!--te-->

---

## 💻 Sobre o projeto

O Microcontrolador em Linguagem C, é um sistema teste desenvolvido para fixação e experimentação do conteúdo proposto pelo curso.

Projeto desenvolvido durante o curso de Formação Básica em Software Embarcado oferecido pela [Embarcatech](https://embarcatech.softex.br).
A Formação Básica em Software Embarcado da Embarcatech é um programa de capacitação profissional técnica destinado a alunos de nível superior e técnico em Tecnologias da Informação e Comunicação (TIC) e áreas correlatas, focado em tecnologias de Sistemas Embarcados.

---

## 🎨 Layout Repositorio Github

U4_Microcontroladores_GPIO_ATIVIDADE_2/

- .vscode/
  - c_cpp_properties.json
  - cmake-kits.json
  - extensions.json
  - launch.json
  - settings.json
  - tasks.json

- assets/

- build/
  - generated/pico_base/pico/
    - config_autogen.h
    - version.h

  - pico-sdk/src/
    - extra_doxygen/
      - dreq.h
      - intctrl.h

    - rp2350/boot_stage2
      - bs2_default.bin
      - bs2_default.dis
      - bs2_default.elf
      - bs2_default.elf.map
      - bs2_default_padded_checksummed.S

  - U4_Microcontroladores_GPIO_ATIVIDADE_2.bin
  - U4_Microcontroladores_GPIO_ATIVIDADE_2.dis
  - U4_Microcontroladores_GPIO_ATIVIDADE_2.elf
  - U4_Microcontroladores_GPIO_ATIVIDADE_2.elf.map
  - U4_Microcontroladores_GPIO_ATIVIDADE_2.hex
  - U4_Microcontroladores_GPIO_ATIVIDADE_2.uf2
  - pico_flash_region.ld

- .gitignore

- CMakeLists.txt

- LICENSE

- README.md

- diagram.json

- main.c

- pico_sdk_import.cmake

- wokwi.toml

---

## ⚙️ Funcionalidades
- Teclado matricial 4x4.
- 03 LEDs – tipo RGB.
- Componente Buzzer.
- Microcontrolador Raspberry Pi Pico W.

---

## 🚀 Como executar o projeto

💡Siga as instruções abaixo para configurar, compilar e executar o programa.

### Pré-requisitos

Antes de começar, você vai precisar ter instalado em sua máquina as seguintes ferramentas:
  - Sistema operacional Linux, macOS ou Windows (com suporte a Makefile).
  - [Git](https://git-scm.com) (Opcional, mas recomendado),
  - [GCC compilador](https://gcc.gnu.org)
  - [Biblioteca Pico-Sdk](https://github.com/raspberrypi/pico-sdk.git) (OBS: Necessário caso queira modificar o projeto)

Além disto é bom ter um editor para trabalhar com o código como [VSCode](https://code.visualstudio.com/) e usar o simulador web [Wokwi](https://wokwi.com) (ou a extensão do Vscode [Wokwi Simulator](https://marketplace.visualstudio.com/items?itemName=Wokwi.wokwi-vscode))

#### 🎲 Rodando o Microcontrolador no Visual Studio

- Abra o Visual Studio, crie ou selecione uma pasta
- Abra o terminal de comando Git Bash no VsCode
- Clone o repositório no seu diretório:
```
$ git clone https://github.com/Embarcatech-Grupo1-Subgrupo3/U4_Microcontroladores_GPIO_ATIVIDADE_2.git
```
- Abra a pasta no Vscode
- Clique no Arquivo [diagram.json]() e aperte no botão play
```
OBS:
# Para rodar o Wokwi simualator é necessario uma licensa.
# Digite na aba pesquisar do seu Visual Studio o seguinte comando:
  >Wokwi: Request a New License
# faça login e gere uma nova licença
```

#### 🎲 Rodando o Microcontrolador no Wokwi Web

- Baixe o repositório do Github
- Descompacte o arquivo .zip
- Entre no navegador e digite [Wokwi.com](https://gcc.gnu.org)
- Faça Upload dos Arquivos [diagram.json]()
- Faça upload do aquivo main [main.c]()


#### 🎲 Rodando o Microcontrolador na placa BitdogLab

- Abra o Visual Studio, crie ou selecione uma pasta
- Abra o terminal de comando Git Bash no VsCode
- Clone o repositório no seu diretório:
```
$ git clone https://github.com/Embarcatech-Grupo1-Subgrupo3/U4_Microcontroladores_GPIO_ATIVIDADE_2.git
```
- Conecte Um cabo USB tipo A na placa para o seu Dispositivo
- Aperte os botões BOOTSEL e RESET na sua placa ao mesmo tempo para abrir o Armazenamento
- Copie o arquivo [U4_Microcontroladores_GPIO_ATIVIDADE_2.uf2]() para o armazenamento da placa
```bash
OBS:
$ Para o funcionamento do projeto na placa será necessário um Teclado Matricial 4x4
```

---

## 🎥 Imagens do Projeto

### 💿 Projeto na extensão Wokwi simulator no Visual Studio
<p align="center"><img width="700" height="400" src="https://github.com/Embarcatech-Grupo1-Subgrupo3/U4_Microcontroladores_GPIO_ATIVIDADE_1/blob/main/assets/Captura%20de%20Tela%20(39).png"></p>

### 💿 Video do projeto
<p align="center"><video ></p>

---

## 🛠 Tecnologias

As seguintes ferramentas foram usadas na construção do projeto:

#### **Websites**
-   **[Visual Studio code](https://code.visualstudio.com)**
-   **[Github](https://github.com)**
-   **[Wokwi Web](https://gcc.gnu.org)**


#### **Utilitários**

-   Editor:  **[Visual Studio Code](https://code.visualstudio.com/)**  → Extensions:  **[C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools), [C/C++ Compile Run](https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run), [Raspberry Pi Pico](https://marketplace.visualstudio.com/items?itemName=raspberry-pi.raspberry-pi-pico) e [Wokwi Simulator](https://marketplace.visualstudio.com/items?itemName=Wokwi.wokwi-vscode)**
-   **[Git](https://git-scm.com)**


---

## 👨‍💻 Contribuidores

GRUPO 1, SUBGRUPO 3 da Embarcatech <br/>
Mentor: MANOEL MESSIAS DA SILVA JUNIOR

<table>
  <tr>
    <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/113399464?v=4" width="100px;"/><br/><a href="https://github.com/Leo-Luz-code">Leornado R. Luz<a/><br/><sub><sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Lider do Projeto">👨‍🚀</a></td>
    <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/86336670?v=4" width="100px;"/><br/><a href="https://github.com/ferreiramateusalencar">Mateus A. Ferreira<a/><br/><sub><sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
    <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/180613216?v=4" width="100px;"/><br/><a href="https://github.com/Erlon335">Érlon S. Alves Neto<a/><br/><sub><sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
    <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/112970376?v=4" width="100px;"/><br/><a href="https://github.com/Dyeorn">João Pedro Jacó<a/><br/><sub> <sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
  <tr>
     <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/178435161?v=4" width="100px;"/><br/><a href="https://github.com/lauracruzz">Laura B. da Cruz<a/><br/><sub><sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
     <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/89869851?v=4" width="100px;"/><br/><a href="https://github.com/GabrielFOV">Gabriel F. O. Viana<a/><br/><sub><sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
     <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/165080675?v=4" width="100px;"/><br/><a href="https://github.com/2024Nat">Natalia C. Marques <a/><br/><sub><sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
     <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/64041493?v=4" width="100px;"/><br/><a href="https://github.com/jonathanmachado141">Jonathan M. da Silva<a/><br/><sub><sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
  </tr>
</table>

      
---

## 📄 Licença

Este projeto está sob a licença do SUBGRUPO 3 e seu Lider de Projeto da Formação Básica em Software Embarcado da Embarcatech - Veja o arquivo <a href="https://github.com/Embarcatech-Grupo1-Subgrupo3/U4_Microcontroladores_GPIO_ATIVIDADE_1/blob/main/LICENSE">License.md<a/>

<img width=100% src="https://capsule-render.vercel.app/api?type=waving&color=00bfbf&height=120&section=footer"/>
