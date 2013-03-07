# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: ports/sysutils/debhelper/Makefile,v 1.1 2013/02/08 12:05:00 svnexp Exp $

PORTNAME=	debhelper
PORTVERSION=	9.20120909
CATEGORIES=	sysutils
MASTER_SITES=	DEBIAN
DISTFILES=	${PORTNAME}_${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=	gslin@gslin.org
COMMENT=	Helper programs for debian/rules

MAKE_ENV+=	SITE_PERL_REL=${SITE_PERL_REL}
NO_BUILD=	yes
USE_PERL5=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}

.include <bsd.port.mk>
