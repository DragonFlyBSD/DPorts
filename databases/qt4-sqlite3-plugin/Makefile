# Created by: Michael Nottebrock <lofi@FreeBSD.org>
# $FreeBSD: head/databases/qt4-sqlite3-plugin/Makefile 442740 2017-06-06 05:00:56Z tcberner $

PORTREVISION=	4

COMMENT=	Qt SQLite 3 database plugin
DB=		sqlite
USES=		sqlite:3

LDFLAGS+=	-lsqlite3

.include "${.CURDIR:H:H}/devel/qt4/Makefile.sqldrivers"
