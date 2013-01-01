# New ports collection Makefile for:	ez-pine-gpg
# Date created:				20 June 2008
# Whom:					gahr
#
# $FreeBSD: ports/mail/ez-pine-gpg/Makefile,v 1.3 2012/11/17 05:59:03 svnexp Exp $

PORTNAME=	ez-pine-gpg
DISTVERSION=	0.4h
PORTREVISION=	1
CATEGORIES=	mail
MASTER_SITES=	http://business-php.com/opensource/ez-pine-gpg/
DISTNAME=	${PORTNAME}_v${DISTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	A set of scripts to use gpg with Pine

RUN_DEPENDS=	gpg:${PORTSDIR}/security/gnupg

WRKSRC=	${WRKDIR}/${PORTNAME}
NO_BUILD=	yes

do-install:
	(cd ${WRKSRC} && ./install ${PREFIX}/bin)

.if !defined(NOPORTDOCS)
post-install:
	${INSTALL} -d ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
