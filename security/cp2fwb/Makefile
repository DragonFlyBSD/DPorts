# Created by: Christian Brueffer <chris@unixpages.org>
# $FreeBSD: security/cp2fwb/Makefile 324181 2013-08-03 08:45:51Z az $

PORTNAME=	cp2fwb
PORTVERSION=	0.6
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}uilder/${PORTNAME}uilder/${PORTNAME}-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Checkpoint FW1 to Firewall Builder ruleset converter

RUN_DEPENDS=	p5-XML-Writer>=0:${PORTSDIR}/textproc/p5-XML-Writer

PLIST_FILES=	bin/cp2fwbuilder
USES=		perl5
NO_BUILD=	yes

.include <bsd.port.pre.mk>

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/cp2fwbuilder ${PREFIX}/bin
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.post.mk>
