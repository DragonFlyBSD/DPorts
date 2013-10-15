# Created by: Rodrigo OSORIO <rodrigo@bebik.net>
# $FreeBSD: multimedia/podcastdl/Makefile 327747 2013-09-20 20:57:48Z bapt $

PORTNAME=	podcastdl
PORTVERSION=	0.3.0
CATEGORIES=	multimedia
MASTER_SITES=	http://rodrigo.osorio.free.fr/freebsd/distfiles/ \
		http://files.bebik.net/podcastdl/

MAINTAINER=	rodrigo@bebik.net
COMMENT=	Simple command line podcast client written in plain C

LICENSE=	BSD

LIB_DEPENDS=	mrss:${PORTSDIR}/textproc/libmrss

USES=		cmake

PLIST_FILES=	bin/podcastdl

NO_STAGE=	yes
.include <bsd.port.mk>
