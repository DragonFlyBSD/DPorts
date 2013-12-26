# $FreeBSD: news/suck-cnews/Makefile 336876 2013-12-19 07:26:07Z dinoex $

CATEGORIES=	news

MAINTAINER=	dinoex@FreeBSD.org

MASTERDIR=	${.CURDIR}/../suck

OPTIONS_DEFAULT=	SSL CNEWS

.if exists(${.CURDIR}/Makefile.local)
.include "${.CURDIR}/Makefile.local"
.endif

.include "${MASTERDIR}/Makefile"
