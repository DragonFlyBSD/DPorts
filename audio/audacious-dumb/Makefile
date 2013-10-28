# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: audio/audacious-dumb/Makefile 331362 2013-10-23 10:26:46Z ehaupt $

PORTNAME=	audacious-dumb
PORTVERSION=	0.82
CATEGORIES=	audio
MASTER_SITES=	http://www.netswarm.net/misc/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Audacious plugin that support the IT, XM, S3M, or MOD formats

LICENSE=	GPLv2

RUN_DEPENDS=	audacious:${PORTSDIR}/multimedia/audacious
BUILD_DEPENDS=	audacious:${PORTSDIR}/multimedia/audacious \
		${LOCALBASE}/lib/libdumb.a:${PORTSDIR}/audio/dumb

USES=		gmake pkgconfig
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|3\.1-alpha1|3\.1|g; \
			s|/usr/local|${LOCALBASE}|g' ${WRKSRC}/Makefile

.include <bsd.port.mk>
