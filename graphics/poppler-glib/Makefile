# New ports collection makefile for:	poppler-gtk
# Date created:		2006-01-12
# Whom:			Michael Johnson <ahze@FreeBSD.org>
#
# $FreeBSD: ports/graphics/poppler-glib/Makefile,v 1.4 2012/11/17 05:58:19 svnexp Exp $
#   $MCom$
#

PORTREVISION=	2
PKGNAMESUFFIX=	-glib

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Glib bindings to poppler

MASTERDIR=	${.CURDIR}/../../graphics/poppler
SLAVEPORT=	glib
PLIST=	${.CURDIR}/pkg-plist

pre-build:
	cd ${WRKSRC}/poppler && ${SETENV} ${MAKE_ENV} ${GMAKE} ${MAKE_FLAGS} \
		Makefile ${MAKE_ARGS} libpoppler-cairo.la

.include "${MASTERDIR}/Makefile"
