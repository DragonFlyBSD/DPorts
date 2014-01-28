# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: editors/jupp/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	jupp
PORTVERSION=	3.1.26
CATEGORIES=	editors
MASTER_SITES=	http://www.mirbsd.org/MirOS/dist/jupp/ \
		http://pub.allbsd.org/MirOS/dist/jupp/
DISTNAME=	joe-${PORTVERSION:C/([0-9]+\.[0-9]+)\.([0-9]+)/\1${PORTNAME}\2/}
EXTRACT_SUFX=	.tgz

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Portable version of Joe's Own Editor from MirBSD

LICENSE=	GPLv1

CONFLICTS=	joe-[23]*

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-termidx
WRKSRC=		${WRKDIR}/${PORTNAME}

pre-configure:
	@${CHMOD} +x ${WRKSRC}/configure

.include <bsd.port.mk>
