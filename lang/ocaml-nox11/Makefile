# Created by: Eugene Ossintsev
# $FreeBSD: lang/ocaml-nox11/Makefile 327741 2013-09-20 19:53:09Z bapt $

PORTNAME=	ocaml-nox11
CATEGORIES=	lang

MAINTAINER=	michael.grunewald@laposte.net
COMMENT=	Objective Caml compiler and programming environment (no X11)

MASTERDIR=	${.CURDIR}/../ocaml

CONFLICTS=	metaocaml-[0-9]* ocaml-[0-9]* ocaml-notk-[0-9]*

OPTIONS_EXCLUDE=TK X11

SFX=		-nox11

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
