# New ports collection makefile for:	foomatic-db-hpijs
# Date created:		2005-09-17
# Whom:			Michael Nottebrock <lofi@FreeBSD.org>
#
# $FreeBSD: ports/print/foomatic-db-hpijs/Makefile,v 1.6 2012/11/17 06:00:49 svnexp Exp $
#

PORTNAME=	foomatic-db-hpijs
PORTVERSION=	1.4
CATEGORIES=	print
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=lofi
DISTNAME=	${PORTNAME}-${PORTVERSION}-1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Foomatic data for the HPIJS printer drivers

BUILD_DEPENDS=	${LOCALBASE}/share/foomatic/db/oldprinterids:${PORTSDIR}/print/foomatic-db
RUN_DEPENDS=	${LOCALBASE}/share/foomatic/db/oldprinterids:${PORTSDIR}/print/foomatic-db

GNU_CONFIGURE=	yes
USE_GMAKE=	yes

post-patch:
	${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' \
			 -e 's|%%LOCALBASE%%|${LOCALBASE}|g' ${WRKSRC}/configure

.include <bsd.port.mk>
