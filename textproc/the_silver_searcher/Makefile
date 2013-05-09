# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: textproc/the_silver_searcher/Makefile 316355 2013-04-23 14:20:25Z bapt $

PORTNAME=	the_silver_searcher
PORTVERSION=	0.13.1
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	http://cloud.github.com/downloads/ggreer/${PORTNAME}/

MAINTAINER=	gslin@gslin.org
COMMENT=	A code-searching tool similar to ack but faster

LIB_DEPENDS=	pcre:${PORTSDIR}/devel/pcre

ACLOCAL_ARGS+=	-I ${ACLOCAL_DIR}
AUTOMAKE_ARGS+=	--add-missing
GNU_CONFIGURE=	yes
PLIST_FILES=	bin/ag
USE_AUTOTOOLS=	aclocal autoconf autoheader automake
USES=		pkgconfig

MAN1=		ag.1

.include <bsd.port.mk>
