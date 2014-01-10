# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: devel/p5-JIRA-Client/Makefile 338987 2014-01-07 09:28:30Z az $

PORTNAME=	JIRA-Client
PORTVERSION=	0.25
CATEGORIES=	devel perl5
MASTER_SITES=	GOOGLE_CODE \
		LOCAL/glarkin
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extended interface to JIRA's SOAP API

RUN_DEPENDS=	p5-SOAP-Lite>=0:${PORTSDIR}/net/p5-SOAP-Lite
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure
PROJECTHOST=	jira-client

.include <bsd.port.mk>
