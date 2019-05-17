--
-- Execute the following SQL statements to enable PL/Ruby.
--
-- $FreeBSD: head/databases/postgresql-plruby/files/createlang.sql 340872 2014-01-24 00:14:07Z mat $
--

CREATE FUNCTION plruby_call_handler() RETURNS language_handler
	AS '!!PLRUBY_SO!!'
	LANGUAGE 'C';

CREATE TRUSTED LANGUAGE 'plruby'
	HANDLER plruby_call_handler
	LANCOMPILER 'PL/Ruby';

--
