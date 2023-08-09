``` c
void treefree(NODO *rarbol)
{
	if (rarbol != NULL)
	{
		treefree(rarbol->izquierda);
		treefree(rarbol->derecha);
		free(rarbol);
	}
}
```