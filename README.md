# exam-so-sistemas-2019-01

1. Mediciones con puerta cerrada iniciando del for y terminando for 
-argumento 10000: se ejecuto en 0.001 s
-argumento 100000: se ejecuto en 0.002 s
-argumento 1000000: se ejecuto en 0.008 s
-argumento 10000000: se ejecuto en 0.068 s
-argumento 100000000: se ejecuto en 0.670 s
Mediciones con puerta cerrada justo antes de var compartida y puerta abierta justo despues de var compartida
-argumento 10000: se ejecuto en 0.002 s
-argumento 100000: se ejecuto en 0.013 s
-argumento 1000000: se ejecuto en 0.139 s
-argumento 10000000: se ejecuto en 1.514 s
-argumento 100000000: se ejecuto en 11.810 s

Conclusion: Un programa se demoro mas que el otro, porque al cerrar la puerta justo antes de aumentar la variable, hace que se tengan que realizar mas instrucciones para realizar la ejecucion, mientras que a diferencia de las primeras ejecuciones o mediciones, se realizaban menos instrucciones para dar la una salida, pues la puerta solo se cerraba y realizaba las operaciones que habian en el for y luego se abria. Mientras que la demora consiste en que la puerta se tenia que cerrar y volver a abrir a costa del aumento de la variable counter. Por esto las salidas se demoraron un poco mas.

