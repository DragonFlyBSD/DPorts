# Created by: Roman Bogorodskiy <novel@FreeBSD.org>
# $FreeBSD: x11-themes/openbox-themes/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	openbox-themes
PORTVERSION=	1.0.1
PORTREVISION=	5
CATEGORIES=	x11-themes
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	novel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Themes for Openbox

RUN_DEPENDS=	openbox:${PORTSDIR}/x11-wm/openbox

NO_BUILD=	yes
WRKSRC=		${PORTNAME}-${PORTVERSION}

NO_STAGE=	yes
do-install:
	@for i in `${LS} ${WRKDIR}/${WRKSRC}`; do \
		${CP} -r ${WRKDIR}/${WRKSRC}/$$i ${PREFIX}/share/themes/; \
	done

.include <bsd.port.mk>
