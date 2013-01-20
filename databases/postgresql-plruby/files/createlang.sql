--
-- Execute the following SQL statements to enable PL/Ruby.
--
-- $FreeBSD: ports/databases/postgresql-plruby/files/createlang.sql,v 1.3 2012/11/17 05:55:20 svnexp Exp $
--

CREATE FUNCTION plruby_call_handler() RETURNS language_handler
	AS '!!PLRUBY_SO!!'
	LANGUAGE 'C';

CREATE TRUSTED LANGUAGE 'plruby'
	HANDLER plruby_call_handler
	LANCOMPILER 'PL/Ruby';

--
