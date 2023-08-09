----------------
-- Consulta 1 --
----------------

SELECT D.ID_Deporte, D.Descripcion_Deporte, C.Nombre_Competencia, PC.Nombre_Precompetencia, CI.Nombre_Ciudad
FROM Deporte D, Competencia C, PreCompetencia PC, Ciudad CI, Recinto R
WHERE PC.Fecha_Precompetencia BETWEEN '2016-08-1' AND '2016-08-15'
	  AND PC.FK_ID_Competencia = C.ID_Competencia
	  AND PC.FK_ID_Recinto = R.ID_Recinto
	  AND R.FK_ID_Ciudad = CI.ID_Ciudad
	  AND C.FK_ID_Deporte = D.ID_Deporte

----------------
-- Consulta 2 --
----------------

SELECT A.Nombre_Atleta, A.Apellido_Atleta, A.Nacionalidad_Atleta
FROM Atleta A, Precompite PC
WHERE A.ID_Atleta = PC.FK_ID_Atleta 
	  AND PC.FK_ID_Precompetencia = 1500 -- ID Precompetencia 'NATACION'
	  AND A.ID_Atleta NOT IN (SELECT CO.FK_ID_atleta FROM Compite CO 
							  WHERE CO.Fecha_Competencia BETWEEN '2016-08-1' AND '2016-08-31'
							  AND CO.FK_ID_Competencia = 1100 -- ID Competencia 'NATACION'
							 )

----------------
-- Consulta 3 --
----------------

SELECT D.ID_Delegacion, D.Nombre_Delegacion, P.Nombre_Pais, COUNT(D.ID_Delegacion) AS CANT_M
FROM Delegacion D, Pais P, Medalla M, Compite CO, Atleta A, Obtiene O, Competencia C
WHERE O.FK_ID_Atleta = A.ID_Atleta
      AND A.FK_ID_Delegacion = D.ID_Delegacion
	  AND O.FK_ID_Competencia = C.ID_Competencia
	  AND CO.Fecha_Competencia BETWEEN '2016-08-15' AND '2016-08-30'
	  AND D.FK_ID_Pais = P.ID_Pais
GROUP BY D.ID_Delegacion, D.Nombre_Delegacion, P.Nombre_Pais

----------------
-- Consulta 4 --
----------------

-- Vista necesaria para calcular el total de atletas
-- por delegaciones.
CREATE VIEW CANT_A AS
SELECT D.ID_Delegacion, COUNT (1) AS TOTAL_A
FROM Delegacion D, Atleta A
WHERE D.ID_Delegacion = A.FK_ID_Delegacion
GROUP BY ID_Delegacion

-- Desarrollo consulta
SELECT H.ID_Hotel, H.Nombre_Hotel
FROM Hotel H, Alojan AL, CANT_A CA
WHERE CA.ID_Delegacion = AL.FK_ID_Delegacion 
	  AND H.ID_Hotel = AL.FK_ID_Hotel 
	  AND CA.TOTAL_A > 15
	  AND AL.Fecha_Ingreso BETWEEN '2016-08-1' AND '2016-08-15'