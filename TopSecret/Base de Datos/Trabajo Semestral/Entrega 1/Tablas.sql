-- Creación de tablas --

-- Delegación.
create table Delegacion(
	
	PK_ID_Delegacion integer,
	nombre_Delegacion varchar(20),
	
	primary key (PK_ID_Delegacion)
);

-- Atleta.
create table Atleta(
	
	PK_ID_Atleta integer,
	FK_ID_Delegacion integer,
	nombre_Atleta varchar(15),
	apellido_Atleta varchar(20),
	fecha_Nacimiento integer,
	
	primary key (PK_ID_Atleta),
	foreign key (FK_ID_Delegacion) references Delegacion
);

-- Competencia.
create table Competencia(

	PK_ID_Competencia integer,
	nombre_Competencia varchar(20),
	puntaje_Max integer,
	
	primary key (PK_ID_Competencia)
);

-- Concursa.
create table Concursa(
	
	FK_ID_Competencia integer,
	FK_ID_Atleta integer,
	fecha_Competencia integer,
	
	primary key (FK_ID_Competencia, FK_ID_Atleta),
	foreign key (FK_ID_Competencia) references Competencia,
	foreign key (FK_ID_Atleta) references Atleta
);

-- PreCompetencia.
create table PreCompetencia(

	PK_ID_PreCompetencia integer,
	FK_ID_Competencia integer,
	fecha_PreCompetencia integer,
	
	primary key (PK_ID_PreCompetencia),
	foreign key (FK_ID_Competencia) references Competencia
);

-- Compite.
create table Compite(
	
	FK_ID_PreCompetencia integer,
	FK_ID_Atleta integer,
	puntaje_Obtenido integer,
	fecha_PreCom date,
	
	primary key (FK_ID_PreCompetencia, FK_ID_Atleta),
	foreign key (FK_ID_PreCompetencia) references PreCompetencia,
	foreign key (FK_ID_Atleta) references Atleta
);

-- Medalla.
create table Medalla(
	
	PK_ID_Medalla integer,
	tipo_Medalla varchar(15),
	
	primary key (PK_ID_Medalla)
);

-- Obtiene.
create table Obtiene(

	FK_ID_Competencia integer,
	FK_ID_Atleta integer,
	FK_ID_Medalla integer,
	
	primary key (FK_ID_Competencia, FK_ID_Atleta, FK_ID_Medalla),
	foreign key (FK_ID_Competencia) references Competencia,
	foreign key (FK_ID_Atleta) references Atleta,
	foreign key (FK_ID_Medalla) references Medalla
);

-- Deporte.
create table Deporte(

	PK_ID_Deporte integer,
	FK_ID_Competencia integer,
	descripcion_Deporte varchar(20),
	
	primary key (PK_ID_Deporte),
	foreign key (FK_ID_Competencia) references Competencia
);

-- Categoria.
create table Categoria(

	PK_ID_Categoria integer,
	FK_ID_Competencia integer,
	descripcion_Categoria varchar(20),
	
	primary key (PK_ID_Categoria),
	foreign key (FK_ID_Competencia) references Competencia
);

-- Pais.
create table Pais(

	PK_ID_Pais integer,
	nombre_Pais varchar(15),
	capital varchar(15),
	
	primary key (PK_ID_Pais)
);

-- Tiene.
create table Tiene(

	FK_ID_Delegacion integer,
	FK_ID_Pais integer,
	
	primary key (FK_ID_Delegacion, FK_ID_Pais),
	foreign key (FK_ID_Delegacion) references Delegacion,
	foreign key (FK_ID_Pais) references Pais
);

-- Ciudad.
create table Ciudad(

	PK_ID_Ciudad integer,
	FK_ID_Pais integer,
	nombre_Ciudad varchar(15),
	
	primary key (PK_ID_Ciudad),
	foreign key (FK_ID_Pais) references Pais
);

-- Hotel.
create table Hotel(

	PK_ID_Hotel integer,
	FK_ID_Ciudad integer,
	nombre_Hotel varchar(15),
	ciudad_Hotel varchar(15),
	
	primary key (PK_ID_Hotel),
	foreign key (FK_ID_Ciudad) references Ciudad
);

-- Hospeda.
create table Hospeda(

	FK_ID_Hotel integer,
	FK_ID_Delegacion integer,
	inicio_Estadia date,
	fin_Estadia date,
	precio_Pagado integer,
	
	primary key (FK_ID_Hotel, FK_ID_Delegacion),
	foreign key (FK_ID_Hotel) references Hotel,
	foreign key (FK_ID_Delegacion) references Delegacion
);

-- Recinto.
create table Recinto(

	PK_ID_Recinto integer,
	FK_ID_Ciudad integer,
	nombre_Recinto varchar(15),
	tipo_Recinto varchar(15),
	capacidad_Recinto integer,
	
	primary key (PK_ID_Recinto),
	foreign key (FK_ID_Ciudad) references Ciudad
);

-- Realiza.
create table Realiza(

	FK_ID_Recinto integer,
	FK_ID_Competencia integer,
	
	primary key (FK_ID_Recinto, FK_ID_Competencia),
	foreign key (FK_ID_Recinto) references Recinto,
	foreign key (FK_ID_Competencia) references Competencia
);

-- Efectua.
create table Efectua(

	FK_ID_Recinto integer,
	FK_ID_PreCompetencia integer,
	
	primary key (FK_ID_Recinto, FK_ID_PreCompetencia),
	foreign key (FK_ID_Recinto) references Recinto,
	foreign key (FK_ID_PreCompetencia) references PreCompetencia
);

-- Representa.
create table Representa(

	FK_ID_Atleta integer,
	
	primary key (FK_ID_Atleta),
	foreign key (FK_ID_Atleta) references Atleta
);
