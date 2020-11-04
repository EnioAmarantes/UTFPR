CREATE OR REPLACE FUNCTION consultaclientesemail() RETURNS setof clientes AS 
'select * from clientes order by email'
language 'sql';


CREATE OR REPLACE FUNCTION consultamaioridade(integer) RETURNS setof clientes AS 
'select * from clientes where idade >= $1 order by nome'
language 'sql';


CREATE OR REPLACE FUNCTION inserecliente(integer, text, integer, text, text) RETURNS void AS 
'insert into clientes (id, nome, idade, fone, email) VALUES ($1, $2, $3, $4, $5)'
language 'sql';
