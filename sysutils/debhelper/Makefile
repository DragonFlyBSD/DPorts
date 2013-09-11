# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: sysutils/debhelper/Makefile 326572 2013-09-07 06:13:27Z az $

PORTNAME=	debhelper
PORTVERSION=	9.20120909
CATEGORIES=	sysutils
MASTER_SITES=	DEBIAN
DISTFILES=	${PORTNAME}_${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=	gslin@gslin.org
COMMENT=	Helper programs for debian/rules

MAKE_ENV+=	SITE_PERL_REL=${SITE_PERL_REL}
NO_BUILD=	yes
USES=		perl5
WRKSRC=		${WRKDIR}/${PORTNAME}

.include <bsd.port.mk>
