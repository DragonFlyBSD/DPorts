# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: benchmarks/siege/Makefile 336648 2013-12-16 17:26:49Z bapt $

PORTNAME=	siege
PORTVERSION=	3.0.5
CATEGORIES=	benchmarks
MASTER_SITES=	http://www.joedog.org/pub/siege/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	HTTP regression testing and benchmarking utility

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
USE_OPENSSL=	yes

USES=		perl5

CONFIGURE_ARGS=	--with-ssl=${OPENSSLBASE} --disable-shared \
		--sysconfdir=${ETCDIR}

.include <bsd.port.mk>
