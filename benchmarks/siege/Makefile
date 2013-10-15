# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: benchmarks/siege/Makefile 328113 2013-09-24 11:28:50Z bapt $

PORTNAME=	siege
PORTVERSION=	2.70
PORTREVISION=	2
CATEGORIES=	benchmarks
MASTER_SITES=	ftp://sid.joedog.org/pub/siege/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	HTTP regression testing and benchmarking utility

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
USE_OPENSSL=	yes

USES=		perl5

CONFIGURE_ARGS=	--with-ssl=${OPENSSLBASE} --disable-shared

post-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	@${INSTALL_DATA} ${WRKSRC}/doc/siegerc ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
