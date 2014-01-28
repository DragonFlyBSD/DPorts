# Created by: gahr
# $FreeBSD: mail/ez-pine-gpg/Makefile 340722 2014-01-22 17:00:46Z mat $

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

NO_STAGE=	yes
do-install:
	(cd ${WRKSRC} && ./install ${PREFIX}/bin)

.if !defined(NOPORTDOCS)
post-install:
	${INSTALL} -d ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
