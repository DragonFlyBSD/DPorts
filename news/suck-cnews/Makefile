# $FreeBSD: news/suck-cnews/Makefile 327804 2013-09-21 11:06:03Z dinoex $

CATEGORIES=	news

MAINTAINER=	dinoex@FreeBSD.org

MASTERDIR=	${.CURDIR}/../suck

VARBASE?=	/var
NEWSBIN?=	${PREFIX}/libexec/cnews
NEWSCTL?=	${VARBASE}/lib/news

.if exists(${.CURDIR}/Makefile.local)
.include "${.CURDIR}/Makefile.local"
.endif

.include "${MASTERDIR}/Makefile"
