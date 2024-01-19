<p align="center">
  <img width="958" alt="Geowar" src="https://github.com/Fraggah/Geowar/assets/132927111/8d7928e2-8900-48c4-8fa8-3c957da9ea86">
</p>

Juego realizado completamente con el objetivo de utilizar la arquitectura ECS (Entity, Component, System). Quería explorar sus beneficios a la hora de escribir el código, y me resultó muy interesante la dinámica del proceso.
El juego está completamente desarrollado con C++ y SFML. Intenté lograr una estética simple y moderna utilizando colores grises y negros, reservando un tono rojo oscuro para los elementos de contraste.

<p align="center">
  <img width="960" alt="Geowar" src="https://github.com/Fraggah/Geowar/assets/132927111/3a80e54d-9584-42a1-aabb-aea8c1419ebe">
</p>

Gracias a este proyecto, pude comprender el funcionamiento de los "smart pointers", específicamente utilizando `std::shared_ptr<T>(args)` y `std::make_shared<T>(args)`.
También tuve que implementar trigonometría básica para el movimiento circular y permitir que pudiera disparar hacia donde esté apuntando.
Tiene un sistema de Hiscore que se guarda en una pequeña base de datos, asi como tambien hay un sistema de configuracion en un config.txt que se ejecuta al inicializar.

PD: Queda pendiente el audio. Como ahora estoy un poco alejado de la música, me da mucha flojera cortar con la programación para ponerme a hacerlo.

**Autor:**
Silvio Stefanucci
