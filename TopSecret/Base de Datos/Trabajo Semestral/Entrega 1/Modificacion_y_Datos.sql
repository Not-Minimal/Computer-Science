--    Agregar el atributo faltante   --
--         de "Delegacion"           --
-- (ID de Atleta) como clave foránea --

-- Agregamos la columna "FK_ID_Atleta".
alter table Delegacion add column FK_ID_Atleta integer;

-- Hacemos que la columna agregada sea clave foránea.
alter table Delegacion add constraint fk_atleta foreign key (FK_ID_Atleta) references Representa(FK_ID_Atleta);

-- Datos de insercion --

-- Delegacion (Datos Conocidos).
insert into Delegacion(PK_ID_Delegacion, nombre_Delegacion) values (1,'Academia Austral');
insert into Delegacion(PK_ID_Delegacion, nombre_Delegacion) values (2,'Team Chile');
insert into Delegacion(PK_ID_Delegacion, nombre_Delegacion) values (3,'Team Ger');

-- Datos de Atleta.
insert into Atleta values (10, 1, 'Fabian', 'Gutierrez', 981976);
insert into Atleta values (11, 2, 'Barbara', 'Riveros', 381987);
insert into Atleta values (12, 3, 'Max', 'Hartung', 8101989);

-- Datos de Representa.
insert into Representa values (10);
insert into Representa values (11);
insert into Representa values (12);

-- Datos faltantes de Delegacion.

-- fk atleta 10
update public.delegacion set
fk_id_atleta = '10'::integer where
pk_id_delegacion = 1;

-- fk atleta 11
update public.delegacion set
fk_id_atleta = '11'::integer where
pk_id_delegacion = 2;

-- fk atleta 12
update public.delegacion set
fk_id_atleta = '12'::integer where
pk_id_delegacion = 3;

-- Datos de Competencia.
insert into Competencia values (1, 'Hockey Final', 100);
insert into Competencia values (2, 'Triatlon Final', 100);
insert into Competencia values (3, 'Esgrima Final', 100);

-- Datos de Concursa.
insert into Concursa values (1, 10, 1962020);
insert into Concursa values (2, 11, 1962020);
insert into Concursa values (3, 12, 1962020);

-- Datos de PreCompetencia.
insert into PreCompetencia values (1, 1, 1562020);
insert into PreCompetencia values (2, 2, 1562020);
insert into PreCompetencia values (3, 3, 1562020);

-- Datos de Compite.
insert into Compite values (1, 10, 10, '2020-06-19');
insert into Compite values (2, 11, 10, '2020-06-19');
insert into Compite values (3, 12, 10, '2020-06-19');

-- Datos de Medalla.
insert into Medalla values (1, 'Oro');
insert into Medalla values (2, 'Plata');
insert into Medalla values (3, 'bronce');

-- Datos de Obtiene.
insert into Obtiene values (1, 10, 1);
insert into Obtiene values (2, 11, 1);
insert into Obtiene values (3, 12, 1);

-- Datos de Deporte.
insert into Deporte values (1, 1, 'Hockey Patin');
insert into Deporte values (2, 2, 'Triatlon');
insert into Deporte values (2, 2, 'Triatlon');

-- Datos de Categoria.
insert into Categoria values (1, 1, 'Dos equipos');
insert into Categoria values (2, 2, '3 disciplinas');
insert into Categoria values (3, 3, '2 contrincantes');

-- Datos de Pais.
insert into Pais values (10, 'Chile', 'Santiago');
insert into Pais values (11, 'Alemania', 'Berlin');
insert into Pais values (12, 'Italia', 'Roma');

-- Datos de Tiene.
insert into Tiene values (1, 10);
insert into Tiene values (2, 10);
insert into Tiene values (3, 11);

-- Datos de Ciudad.
insert into Ciudad values (10, 10, 'Concepcion');
insert into Ciudad values (11, 10, 'Talcahuano');
insert into Ciudad values (12, 10, 'Hualpen');

-- Datos de Hotel.
insert into Hotel values (1, 10, 'El Araucano', 'Concepcion');
insert into Hotel values (2, 10, 'Don Matias', 'Concepcion');
insert into Hotel values (3, 11, 'Mar Sur', 'Talcahuano');

-- Datos de Hospeda.
insert into Hospeda values (1, 1, '2020-6-14', '2020-6-20', 500000);
insert into Hospeda values (2, 2, '2020-6-14', '2020-6-20', 300000);
insert into Hospeda values (3, 3, '2020-6-14', '2020-6-20', 400000);

-- Datos de Recinto.
insert into Recinto values (1, 11, 'La Tortuga', 'Estadio', 10000);
insert into Recinto values (2, 10, 'Collao', 'Estadio', 30448);
insert into Recinto values (3, 10, 'Atletico', 'Estadio', 5000);

-- Datos de Realiza.
insert into Realiza values (1, 1);
insert into Realiza values (2, 2);
insert into Realiza values (3, 3);

-- Datos de Efectua.
insert into Efectua values (1, 1);
insert into Efectua values (1, 2);
insert into Efectua values (1, 3);


