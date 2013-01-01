# New ports collection makefile for:	audacious-dumb
# Date created:				27 May 2007
# Whom:					Emanuel Haupt <ehaupt@FreeBSD.org>
#
# $FreeBSD: ports/audio/audacious-dumb/Makefile,v 1.31 2012/12/18 15:59:42 svnexp Exp $
#

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

USE_GMAKE=	yes
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|3\.1-alpha1|3\.1|g; \
			s|/usr/local|${LOCALBASE}|g' ${WRKSRC}/Makefile

.include <bsd.port.mk>
