# Created by: Rodrigo OSORIO <rodrigo@FreeBSD.org>
# $FreeBSD: multimedia/podcastdl/Makefile 341704 2014-01-29 09:17:41Z rodrigo $

PORTNAME=	podcastdl
PORTVERSION=	0.3.1
CATEGORIES=	multimedia
MASTER_SITES=	http://rodrigo.osorio.free.fr/freebsd/distfiles/ \
		http://files.bebik.net/podcastdl/

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Simple command line podcast client written in plain C

LICENSE=	BSD

LIB_DEPENDS=	libmrss.so:${PORTSDIR}/textproc/libmrss

USES=		cmake

PLIST_FILES=	bin/podcastdl

.include <bsd.port.mk>
