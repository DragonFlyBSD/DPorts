--
-- Execute the following SQL statements to enable PL/Ruby.
--
-- $FreeBSD: databases/postgresql-plruby/files/createlang.sql 300896 2012-07-14 13:54:48Z beat $
--

CREATE FUNCTION plruby_call_handler() RETURNS language_handler
	AS '!!PLRUBY_SO!!'
	LANGUAGE 'C';

CREATE TRUSTED LANGUAGE 'plruby'
	HANDLER plruby_call_handler
	LANCOMPILER 'PL/Ruby';

--
