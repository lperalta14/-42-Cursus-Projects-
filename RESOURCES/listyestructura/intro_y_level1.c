/* 🎮 Clase: Dominando las Listas Enlazadas en C
🧠 Objetivo final: Crear y manipular tu propia lista enlazada en C como un verdadero 42-warrior.
🧱 Nivel 1: ¿Qué es una estructura (struct)?
🎯 Misión:
Comprender cómo crear y usar estructuras en C.

📘 Teoría:
Una struct es una forma de agrupar datos bajo un mismo nombre. Por ejemplo:
*/

typedef struct s_student {
    char *name;
    int level;
} t_student;

//Con esto puedes hacer:

t_student luis;
luis.name = "Luis";
luis.level = 42;

	/*🧩 Mini-juego 1:
 Declara una estructura t_book que contenga:
	·char *title
	·int pages
 Crea una instancia de t_book y rellénala con tus datos favoritos.

🔗 Nivel 2: El misterio de los punteros y la recursividad
🎯 Misión:Entender cómo usar punteros a estructuras y cómo se enlazan entre sí.
📘 Teoría:
Aquí nace la magia de las listas enlazadas:
*/
typedef struct s_node {
    int value;
    struct s_node *next;
} t_node;

/* Cada nodo guarda un valor y una dirección hacia el siguiente nodo.

🧩 Mini-juego 2:
Crea tres nodos manualmente y enlázalos:
t_node a = {1, NULL};
t_node b = {2, NULL};
t_node c = {3, NULL};

a.next = &b;
b.next = &c;

Recorre la lista e imprime sus valores.
