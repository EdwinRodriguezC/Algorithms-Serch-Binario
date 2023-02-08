# Algorithms-Serch-Binario
Búsqueda binaria 
-  Es un algoritmo de búsqueda más eficiente que el anterior, pero posee el inconveniente que el arreglo debe estar ordenado. 

Su metodología consiste en colocarse en medio o parte central del arreglo, si no encuentra el elemento en dicha posición
entonces se pregunta si el valor de dicha posición es menor o mayor a la clave de búsqueda, en caso de que se menor 
entonces se coloca en medio del primer bloque de elementos del arreglo e ignora los elementos del segundo bloque de 
elementos del arreglo e ignora los elementos del bloque anterior. Estos pasos se repiten hasta que se encuentre el elemento buscado. 

Lo que hace este algoritmo sea mucho más eficiente que el algoritmo de búsqueda secuencial se debo a que en vez de 
pasar uno por uno los elementos de todo el arreglo, lo que hace es ignorar los bloques de elementos donde 
indudablemente se sabe debido a que está ordenado que no puede encontrarse allí. 

EJEMPLO: 

Imaginemos que tenemos un arreglo que contiene 11 elementos distribuidos de manera ordenada [2,6,9,12,15,18,24,29,32,45,50] y queremos 
buscar el elemento 12 en dicho arreglo. El algoritmo divide el arreglo en dos partes o bloques y se coloca en la posición del medio, en este 
caso se colocará en el elemento 18 ya que es la posición media del arreglo. Luego compara dicho elemento con la clave de búsqueda o dato 
que deseamos buscar, lo cual resulta que 18 no es similar a 12, por lo cual procede a verificar si dicho elemento es menor o mayor a la clave 
de búsqueda, es decir, si 18 es menor o mayor a 12, en este caso 18 es mayor a 12, por la cual el algoritmo procede a ignorar todos los elementos 
mayores e iguales que 18, es decir, ignora todos los elementos del segundo bloque y repite el proceso centrándose en el primer bloque y dividiendo 
dicho bloque en dos partes. En caso de que no encuentre el elemento repite el proceso hasta que indique si el elemento se encuentre o no en el arreglo.

<p align="center"> EL ALGORITMO COMPARARÍA LOS ELEMEMENTOS DEL ARREGLO [2,6,9,12,15,18,24,29,32,45,50] de la siguiente manera: </p> 

<p aling="center"> [2,6,9,12,15,18,24,29,32,45,50] </p>
<p aling="center"> ¿18==12? </p>
<p aling="center"> No </p>
<p aling="center"> 18 > 12 </p>
<p aling="center"> Se ignora segundo bloque (18,24,29,32,45,50) </p>
<p aling="center"> [2,6,9,12,15] </p>
<p aling="center"> ¿9==12? </p>
<p aling="center"> 9 < 12 </p>
<p aling="center"> Se ignora primer bloque (2,6,9) </p>
<p aling="center"> [12,15]] </p>
<p aling="center"> ¿12==12? </p>
<p aling="center"> Si </p>⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
<p aling="center"> "Elemento encontrado!" </p>
