# New ports collection makefile for:	p5-Template-Toolkit-Simple
# Date created:		2010-04-24
# Whom:			Li-Wen Hsu <lwhsu@FreeBSD.org>
#
# $FreeBSD: www/p5-Template-Toolkit-Simple/Makefile 325960 2013-09-02 09:44:14Z az $
#

PORTNAME=	Template-Toolkit-Simple
PORTVERSION=	0.16
CATEGORIES=	www textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	A Simple Interface to Template Toolkit

BUILD_DEPENDS=	p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Template::Toolkit::Simple.3

.include <bsd.port.mk>
