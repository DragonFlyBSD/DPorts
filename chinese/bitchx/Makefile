# Created by: clive
# $FreeBSD: chinese/bitchx/Makefile 331078 2013-10-21 01:09:16Z vanilla $

PORTNAME=	BitchX
PORTREVISION=	5
CATEGORIES=	chinese

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A zh-tw cursor movement friendly, wrapping clean BitchX

MASTERDIR=	${.CURDIR}/../../irc/bitchx
EXTRA_PATCHES=	${.CURDIR}/files/patch-source::input.c \
		${.CURDIR}/files/patch-include::config.h \
		${.CURDIR}/files/patch-source::screen.c

WITH_LATIN=	YES
# Cursor movement and words wrapping aren't hacked if compiled with gnome.
WITHOUT_GNOME=	YES
# If without gnome, esound support isn't needed.
WITHOUT_ESOUND=	YES

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
