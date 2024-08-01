mysql -u root -p

create database farmacias;

use farmacias;

create table propietarios(
    dni int (8) not null,
    nombre varchar (25) not null,
    calle varchar (35) not null,
    numero int (4) not null,
    cod_post int (4) not null,
    ciudad varchar(30) not null,
    primary key (dni)
);

+----------+-------------+------+-----+---------+-------+
| Field    | Type        | Null | Key | Default | Extra |
+----------+-------------+------+-----+---------+-------+
| dni      | int(8)      | NO   | PRI | NULL    |       |
| nombre   | varchar(25) | NO   |     | NULL    |       |
| calle    | varchar(35) | NO   |     | NULL    |       |
| numero   | int(4)      | NO   |     | NULL    |       |
| cod_post | int(4)      | NO   |     | NULL    |       |
| ciudad   | varchar(30) | NO   |     | NULL    |       |
+----------+-------------+------+-----+---------+-------+




create table ciudad(
    nombre varchar (30) not null,
    prov varchar (30) not null,
    cant_habi int (7) not null,
    sup int (5) not null,
    primary key (nombre, prov)
);

+-----------+-------------+------+-----+---------+-------+
| Field     | Type        | Null | Key | Default | Extra |
+-----------+-------------+------+-----+---------+-------+
| nombre    | varchar(30) | NO   | PRI | NULL    |       |
| prov      | varchar(30) | NO   | PRI | NULL    |       |
| cant_habi | int(7)      | NO   |     | NULL    |       |
| sup       | int(5)      | NO   |     | NULL    |       |
+-----------+-------------+------+-----+---------+-------+




create table medicamentos(
    id int (4) not null,
    nomb_comer varchar (40) not null,
    droga varchar (50) not null,
    complementa boolean not null,
    primary key (id)    
);

+-------------+-------------+------+-----+---------+-------+
| Field       | Type        | Null | Key | Default | Extra |
+-------------+-------------+------+-----+---------+-------+
| id          | int(4)      | NO   | PRI | NULL    |       |
| nomb_comer  | varchar(40) | NO   |     | NULL    |       |
| droga       | varchar(50) | NO   |     | NULL    |       |
| complementa | tinyint(1)  | NO   |     | NULL    |       |
+-------------+-------------+------+-----+---------+-------+




create table farmacias(
    nombre varchar (25) not null,
    calle varchar (35) not null,
    numero int (4) not null,
    cod_post int (4) not null,
    dni_prop int (8) not null,
    nomb_ciud varchar (30) not null,
    prov_ciud varchar (30) not null,
    primary key (nombre),
    foreign key (dni_prop) references propietarios (dni),
    foreign key (nomb_ciud, prov_ciud) references ciudad (nombre, prov)
);

+-----------+-------------+------+-----+---------+-------+
| Field     | Type        | Null | Key | Default | Extra |
+-----------+-------------+------+-----+---------+-------+
| nombre    | varchar(25) | NO   | PRI | NULL    |       |
| calle     | varchar(35) | NO   |     | NULL    |       |
| numero    | int(4)      | NO   |     | NULL    |       |
| cod_post  | int(4)      | NO   |     | NULL    |       |
| dni_prop  | int(8)      | NO   | MUL | NULL    |       |
| nomb_ciud | varchar(30) | NO   | MUL | NULL    |       |
| prov_ciud | varchar(30) | NO   |     | NULL    |       |
+-----------+-------------+------+-----+---------+-------+




create table facturas(
    codigo int (4) not null,
    precio_med int (5) not null,
    cant_med int (99) not null,
    monto_final int (6) not null,
    nomb_farm varchar (25) not null,
    id_med int (4) not null,
    primary key (codigo),
    foreign key (nomb_farm) references farmacias (nombre),
    foreign key (id_med) references medicamentos (id)
);

+-------------+-------------+------+-----+---------+-------+
| Field       | Type        | Null | Key | Default | Extra |
+-------------+-------------+------+-----+---------+-------+
| codigo      | int(4)      | NO   | PRI | NULL    |       |
| precio_med  | int(5)      | NO   |     | NULL    |       |
| cant_med    | int(99)     | NO   |     | NULL    |       |
| monto_final | int(6)      | NO   |     | NULL    |       |
| nomb_farm   | varchar(25) | NO   | MUL | NULL    |       |
| id_med      | int(4)      | NO   | MUL | NULL    |       |
+-------------+-------------+------+-----+---------+-------+