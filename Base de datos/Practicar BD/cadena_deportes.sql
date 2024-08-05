mysql -u root -p

create database cadena_deportes;

use cadena_deportes;

create table clientes(
    cod_cli int (4) not null,
    dni int (8) not null,
    nombre varchar (30) not null,
    ciudad varchar (30) not null,
    fecha_nac date not null,
    primary key (cod_cli)
);

+-----------+-------------+------+-----+---------+-------+
| Field     | Type        | Null | Key | Default | Extra |
+-----------+-------------+------+-----+---------+-------+
| cod_cli   | int(4)      | NO   | PRI | NULL    |       |
| dni       | int(8)      | NO   |     | NULL    |       |
| nombre    | varchar(30) | NO   |     | NULL    |       |
| ciudad    | varchar(30) | NO   |     | NULL    |       |
| fecha_nac | date        | NO   |     | NULL    |       |
+-----------+-------------+------+-----+---------+-------+


create table fabricas(
    cuit int (11) not null,
    nombre varchar (30) not null,
    pais varchar (30) not null,
    nomb_gerente varchar (30) not null,
    cant_empleados int (3) not null,
    primary key (cuit)
);

+----------------+-------------+------+-----+---------+-------+
| Field          | Type        | Null | Key | Default | Extra |
+----------------+-------------+------+-----+---------+-------+
| cuit           | int(11)     | NO   | PRI | NULL    |       |
| nombre         | varchar(30) | NO   |     | NULL    |       |
| pais           | varchar(30) | NO   |     | NULL    |       |
| nomb_gerente   | varchar(30) | NO   |     | NULL    |       |
| cant_empleados | int(3)      | NO   |     | NULL    |       |
+----------------+-------------+------+-----+---------+-------+


create table sucursal(
    num_unico int (4) not null,
    calle varchar (30) not null,
    numero int (4) not null,
    ciudad varchar (30) not null,
    primary key (num_unico)
    );
    
+-----------+-------------+------+-----+---------+-------+
| Field     | Type        | Null | Key | Default | Extra |
+-----------+-------------+------+-----+---------+-------+
| num_unico | int(4)      | NO   | PRI | NULL    |       |
| calle     | varchar(30) | NO   |     | NULL    |       |
| numero    | int(4)      | NO   |     | NULL    |       |
| ciudad    | varchar(30) | NO   |     | NULL    |       |
+-----------+-------------+------+-----+---------+-------+



create table empleados(
    legajo int (4) not null,
    nombre varchar (30) not null,
    dni int (8) not null,
    telefono int (10) not null,
    calle varchar (30) not null,
    numero int (4) not null,
    ciudad varchar (30) not null,
    primary key (legajo)
);

+----------+-------------+------+-----+---------+-------+
| Field    | Type        | Null | Key | Default | Extra |
+----------+-------------+------+-----+---------+-------+
| legajo   | int(4)      | NO   | PRI | NULL    |       |
| nombre   | varchar(30) | NO   |     | NULL    |       |
| dni      | int(8)      | NO   |     | NULL    |       |
| telefono | int(10)     | NO   |     | NULL    |       |
| calle    | varchar(30) | NO   |     | NULL    |       |
| numero   | int(4)      | NO   |     | NULL    |       |
| ciudad   | varchar(30) | NO   |     | NULL    |       |
+----------+-------------+------+-----+---------+-------+



create table productos(
    cod_prod int (4) not null,
    cuit_fabrica int (11) not null,
    descripcion varchar (30) not null,
    color varchar (30) not null,
    costo_fabrica int (5) not null,
    primary key (cod_prod),
    foreign key (cuit_fabrica) references fabricas (cuit)
);

+---------------+-------------+------+-----+---------+-------+
| Field         | Type        | Null | Key | Default | Extra |
+---------------+-------------+------+-----+---------+-------+
| cod_prod      | int(4)      | NO   | PRI | NULL    |       |
| cuit_fabrica  | int(11)     | NO   | MUL | NULL    |       |
| descripcion   | varchar(30) | NO   |     | NULL    |       |
| color         | varchar(30) | NO   |     | NULL    |       |
| costo_fabrica | int(5)      | NO   |     | NULL    |       |
+---------------+-------------+------+-----+---------+-------+



create table producto_sucursal(
    id int (4) not null,
    cod_prod int (4) not null,
    num_unico int (4) not null,
    precio_sucursal int (5) not null,
    primary key (id),
    foreign key (cod_prod) references productos (cod_prod),
    foreign key (num_unico) references sucursal (num_unico)
);

+-----------------+--------+------+-----+---------+-------+
| Field           | Type   | Null | Key | Default | Extra |
+-----------------+--------+------+-----+---------+-------+
| id              | int(4) | NO   | PRI | NULL    |       |
| cod_prod        | int(4) | NO   | MUL | NULL    |       |
| num_unico       | int(4) | NO   | MUL | NULL    |       |
| precio_sucursal | int(5) | NO   |     | NULL    |       |
+-----------------+--------+------+-----+---------+-------+



create table empleado_sucursal(
    id int (4) not null,
    legajo int (4) not null,
    num_unico int (4) not null,
    fecha date not null,
    horario varchar (20) not null,
    primary key (id),
    foreign key (legajo) references empleados (legajo),
    foreign key (num_unico) references sucursal (num_unico)
);

+-----------+-------------+------+-----+---------+-------+
| Field     | Type        | Null | Key | Default | Extra |
+-----------+-------------+------+-----+---------+-------+
| id        | int(4)      | NO   | PRI | NULL    |       |
| legajo    | int(4)      | NO   | MUL | NULL    |       |
| num_unico | int(4)      | NO   | MUL | NULL    |       |
| fecha     | date        | NO   |     | NULL    |       |
| horario   | varchar(20) | NO   |     | NULL    |       |
+-----------+-------------+------+-----+---------+-------+



create table tarjetas(
    num int (16) not null,
    nomb_tarjeta varchar (15) not null,
    cod_cli int (4) not null,
    fecha_vencimiento date not null,
    cod_seguridad int (4) not null,
    primary key (num, nomb_tarjeta),
    foreign key (cod_cli) references clientes (cod_cli)
);

+-------------------+-------------+------+-----+---------+-------+
| Field             | Type        | Null | Key | Default | Extra |
+-------------------+-------------+------+-----+---------+-------+
| num               | int(16)     | NO   | PRI | NULL    |       |
| nomb_tarjeta      | varchar(15) | NO   | PRI | NULL    |       |
| cod_cli           | int(4)      | NO   | MUL | NULL    |       |
| fecha_vencimiento | date        | NO   |     | NULL    |       |
| cod_seguridad     | int(4)      | NO   |     | NULL    |       |
+-------------------+-------------+------+-----+---------+-------+