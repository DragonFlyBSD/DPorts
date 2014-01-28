# Created by: vanilla
# $FreeBSD: chinese/irssi/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTREVISION=	0
CATEGORIES=	chinese

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	A zh-tw cursor movement friendly, wrapping clean irssi

CONFLICTS?=	irssi-*
MASTERDIR=	${.CURDIR}/../../irc/irssi

EXTRA_PATCHES=	${.CURDIR}/files/patch-irssi.conf \
		${.CURDIR}/files/patch-utf8_break

.include "${MASTERDIR}/Makefile"
