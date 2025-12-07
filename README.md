GESTOR DE DEPORTES



Este proyecto es un programa que permite administrar la información de deportistas dentro de un solo equipo. Su objetivo es ofrecer una manera organizada de registrar jugadores, editarlos, consultarlos y ver sus datos de forma clara.

El sistema trabaja con tres tipos de deportistas:
- Futbolistas 
- Basquetbolistas
- Nadadores 
También permite registrar deportistas genéricos, es decir, jugadores sin una categoría deportiva específica.

Este sistema te permite:
- Registrar deportistas con datos básicos: ID, nombre y edad.
- Añadir deportistas según su disciplina (futbolista, basquetbolista o nadador).
- Guardar atributos especiales dependiendo del tipo de deportista.
- Editar la información de un jugador ya registrado.
- Consultar una lista completa de todos los deportistas guardados.
- Ejecutar acciones específicas como entrenar a un futbolista, hacer lanzar un triple a un basquetbolista o hacer nadar a un nadador.
- Buscar un deportista usando su ID único, para encontrarlo rápido.
- Evitar automáticamente IDs duplicados.
- Proteger al usuario de errores comunes, como escribir letras donde deben ir números.

Este sistema no fue creado para:
- Guardar datos después de cerrar el programa (no tiene almacenamiento permanente).
- Administrar estadísticas deportivas avanzadas.
- Manejar horarios, torneos o varios equipos al mismo tiempo.
- Conectarse a internet, bases de datos o sistemas externos.
- Tener interfaz gráfica.
- Crear usuarios, cuentas o contraseñas.
  

COMO SE USA: 
Presiona:
Win + R → escribe "cmd" → Enter

En la consola escribes: cd C:(la carpeta donde están tus archivos) y presionas Enter.

Ya en la carpeta del proyecto, escribe:
g++ -o programa main.cpp Deportista.cpp Futbolista.cpp Basquetbolista.cpp Nadador.cpp EquipoDeDeportes.cpp

por ultimo escribe: programa
y se abrira el sistema :)


USO DEL PROGRAMA
Menú principal:
1. Alta de deportista
2. Gestionar futbolistas
3. Gestionar basquetbolistas
4. Gestionar nadadores
5. Mostrar todos
6. Buscar por ID
0. Salir
   
Cada categoría permite:
- Registrar
- Ver lista
- Ejecutar una acción especial (entrenar, lanzar triple, nadar)
- Modificar datos
