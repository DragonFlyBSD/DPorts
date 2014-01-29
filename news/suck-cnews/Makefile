# $FreeBSD: news/suck-cnews/Makefile 340722 2014-01-22 17:00:46Z mat $

CATEGORIES=	news

MAINTAINER=	dinoex@FreeBSD.org

MASTERDIR=	${.CURDIR}/../suck

OPTIONS_DEFAULT=	SSL CNEWS

.if exists(${.CURDIR}/Makefile.local)
.include "${.CURDIR}/Makefile.local"
.endif

.include "${MASTERDIR}/Makefile"
