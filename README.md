# Sistema de Gestión de Inventario Básico

###### Descripción
Este proyecto es un programa desarrollado en C++ que simula un sistema de gestión de inventario para una pequeña tienda. Permite a los usuarios registrar nuevos productos, visualizar el inventario actual, actualizar las cantidades disponibles y obtener reportes básicos del estado del negocio. Este mini proyecto integra conceptos fundamentales de  C++.

###### Funcionalidades Principales
El sistema contiene las siguientes funcionalidades:
* **Menú Principal Interactivo:** Navegación entre las distintas opciones del programa.
* **Registro de Productos:** Permite ingresar el nombre del producto, su precio y la cantidad inicial en stock.
* **Visualización de Datos:** Muestra una tabla con todos los productos registrados.
* **Procesamiento de Datos:** Calcula y muestra el valor total del inventario.
* **Validaciones de Datos:** Impide el ingreso de cantidades negativas, precios menores a cero y opciones inválidas o inexistentes en el menú.
* **Mini Mejora Creativa:** Una función adicional que escanea los arreglos y muestra una lista de alerta con aquellos productos que tienen un stock crítico (menor a 5 unidades),esto ayuda al usuario a saber qué debe comprar urgentemente.
## Estructura Básica del Proyecto
El código mantiene un orden lógico y separar las responsabilidades:
* `main.cpp`: Archivo principal que contiene el menú interactivo y la ejecución central del programa.
* **Arreglos:** Se utilizan arreglos para almacenar paralelamente los nombres, precios y cantidades de los productos.

* **Funciones implementadas:**
  * `mostrarMenu()`: Despliega las opciones al usuario.
  * `registrarProducto()`: Captura y valida los datos de entrada.
  * `mostrarInventario()`: Recorre los arreglos para imprimir los datos.
  * `calcularTotalInventario()`: Realiza las operaciones matemáticas de procesamiento.
  * `reporteStockBajo()`: Ejecuta la mejora creativa filtrando datos.


###### Autor
**Antonela Brito**
## Indicaciones Generales de Compilación y Ejecución
Para compilar y ejecutar este proyecto desde la terminal, utiliza los siguientes comandos 
1.	Selecciona el documento , abre una terminal integrada 
2.	Introduce el comando ./GESTIONDEINVENTARIO.cpp

