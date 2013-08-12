# Created by: Vaida Bogdan <vaida.bogdan@gmail.com>
# $FreeBSD: sysutils/jailuser/Makefile 324181 2013-08-03 08:45:51Z az $

PORTNAME=	jailuser
PORTVERSION=	1.9
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	SF/jail/jail/version%20${PORTVERSION}
DISTNAME=	jail_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Builds a chrooted environment

LICENSE=	GPLv2

WRKSRC=		${WRKDIR}/jail_1-9_stable/src
WRKDOC=		${WRKDIR}/jail_1-9_stable/doc
USES=		perl5

OPTIONS_DEFINE=	DOCS
PORTDOCS=	CHANGELOG INSTALL README SECURITY VERSION \
		download features intro

SUB_FILES=	pkg-message

post-patch:
	@${REINPLACE_CMD} -e 's!/usr/bin/perl!${PERL}!' \
		-e 's!gcc!$(CC)!' ${WRKSRC}/Makefile

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKDOC}/,} ${DOCSDIR}
.endif
	@${ECHO_MSG} ; ${CAT} ${PKGMESSAGE} ; ${ECHO_MSG}

.include <bsd.port.mk>
