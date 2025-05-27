📚 Como Compilar e Executar um Projeto com raylib
🛠️ Compilação do Raylib
Abra o terminal (cmd) e vá até a pasta src do raylib
(Geralmente em C:\raylib\raylib\src)
Execute o comando abaixo:

bash
Copy
Edit
mingw32-make PLATFORM=PLATFORM_DESKTOP RAYLIB_LIBTYPE=STATIC
1.1. ⚠️ Erro durante a compilação?

Isso geralmente acontece por usar uma versão incompatível do MinGW.

Baixe a versão correta aqui.

Após baixar e extrair:

Mova a pasta mingw64 para o diretório raiz (geralmente C:\).

Adicione o caminho C:\mingw64\bin às variáveis de ambiente do sistema (procure por "variáveis de ambiente").

Reinicie o terminal (e o VSCode) e tente o comando novamente.

🔧 Configuração do Projeto
Caminho do src diferente?

Se o raylib não está em C:/raylib/raylib/src, ajuste o caminho no arquivo tasks.json.

Quer mudar o nome do executável?

Altere o nome no tasks.json.

Não se esqueça de atualizar o mesmo nome no launch.json.

🚀 Executando no VSCode
No menu lateral Run and Debug, selecione a task correta:

Run Raylib (C) para C

Run Raylib (C++) para C++
Depois é só apertar F5 para compilar e executar!