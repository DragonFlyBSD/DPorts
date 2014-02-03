# $FreeBSD: devel/libklel/Makefile 342003 2014-01-31 15:23:50Z miwi $

PORTNAME=	libklel
PORTVERSION=	1.1.0
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	klm@uidzero.org
COMMENT=	KoreLogic Expression Language library

LIB_DEPENDS=	pcre:${PORTSDIR}/devel/pcre

GNU_CONFIGURE=	yes
USES=		perl5
USE_PERL5=	build
USE_LDCONFIG=	yes

CONFIGURE_ARGS+=--with-pcre=${LOCALBASE}

.include <bsd.port.mk>
