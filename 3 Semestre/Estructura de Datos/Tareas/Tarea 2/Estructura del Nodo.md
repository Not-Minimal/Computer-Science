``` c
struct Nodoreservas
{
	int reservationNumber;
	char namePassanger[50];
	char destinationPassanger[50];
	struct Nodoreservas *izquierda;
	struct Nodoreservas *derecha;
};
```