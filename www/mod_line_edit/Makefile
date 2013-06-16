# Created by: Dominic Marks <dom@goodforbusiness.co.uk>
# $FreeBSD: www/mod_line_edit/Makefile 319447 2013-05-30 19:14:44Z ohauer $

PORTNAME=	mod_line_edit
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://apache.webthing.com/mod_line_edit/
PKGNAMEPREFIX=	${APACHE_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}.c
EXTRACT_SUFX=

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Apache module for simple text rewriting

MAKE_JOBS_SAFE=  yes

WRKSRC=	${WRKDIR}

USE_APACHE=	22+

AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

pre-extract:
	@${MKDIR} ${WRKDIR}

do-extract:
	@${CP} ${DISTDIR}/${PORTNAME}.c ${WRKDIR}/

.include <bsd.port.mk>
